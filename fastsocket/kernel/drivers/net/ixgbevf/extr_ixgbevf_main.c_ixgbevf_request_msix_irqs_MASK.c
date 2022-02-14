
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {char* name; } ;
struct msix_entry {int vector; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct ixgbevf_q_vector {int num_msix_vectors; char* name; struct ixgbevf_q_vector** q_vector; struct msix_entry* msix_entries; int hw; TYPE_2__ tx; TYPE_1__ rx; struct net_device* netdev; } ;
struct ixgbevf_adapter {int num_msix_vectors; char* name; struct ixgbevf_adapter** q_vector; struct msix_entry* msix_entries; int hw; TYPE_2__ tx; TYPE_1__ rx; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ixgbevf_q_vector*) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int ,char*,struct ixgbevf_q_vector*) ;
 int FUNC_3 (char*,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct ixgbevf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 int VAR_5 = VAR_3->num_msix_vectors - VAR_0;
 int VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct ixgbevf_q_vector *VAR_10 = VAR_3->q_vector[VAR_6];
  struct msix_entry *VAR_11 = &VAR_3->msix_entries[VAR_6];

  if (VAR_10->tx.ring && VAR_10->rx.ring) {
   FUNC_3(VAR_10->name, sizeof(VAR_10->name) - 1,
     "%s-%s-%d", VAR_4->name, "TxRx", VAR_8++);
   VAR_9++;
  } else if (VAR_10->rx.ring) {
   FUNC_3(VAR_10->name, sizeof(VAR_10->name) - 1,
     "%s-%s-%d", VAR_4->name, "rx", VAR_8++);
  } else if (VAR_10->tx.ring) {
   FUNC_3(VAR_10->name, sizeof(VAR_10->name) - 1,
     "%s-%s-%d", VAR_4->name, "tx", VAR_9++);
  } else {

   continue;
  }
  VAR_7 = FUNC_2(VAR_11->vector, &VAR_1, 0,
      VAR_10->name, VAR_10);
  if (VAR_7) {
   FUNC_1(&VAR_3->hw,
          "request_irq failed for MSIX interrupt "
          "Error: %d\n", VAR_7);
   goto free_queue_irqs;
  }
 }

 VAR_7 = FUNC_2(VAR_3->msix_entries[VAR_6].vector,
     &VAR_2, 0, VAR_4->name, VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_3->hw,
         "request_irq for msix_other failed: %d\n", VAR_7);
  goto free_queue_irqs;
 }

 return 0;

free_queue_irqs:
 while (VAR_6) {
  VAR_6--;
  FUNC_0(VAR_3->msix_entries[VAR_6].vector,
    VAR_3->q_vector[VAR_6]);
 }
 VAR_3->num_msix_vectors = 0;
 return VAR_7;
}
