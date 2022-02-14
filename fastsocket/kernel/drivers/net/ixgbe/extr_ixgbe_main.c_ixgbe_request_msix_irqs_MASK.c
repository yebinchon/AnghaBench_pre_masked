
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
struct ixgbe_q_vector {int num_q_vectors; char* name; int flags; struct msix_entry* msix_entries; int pdev; struct ixgbe_q_vector** q_vector; int affinity_mask; TYPE_2__ tx; TYPE_1__ rx; struct net_device* netdev; } ;
struct ixgbe_adapter {int num_q_vectors; char* name; int flags; struct msix_entry* msix_entries; int pdev; struct ixgbe_adapter** q_vector; int affinity_mask; TYPE_2__ tx; TYPE_1__ rx; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct ixgbe_q_vector*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (struct msix_entry*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,int ,char*,struct ixgbe_q_vector*) ;
 int FUNC_6 (char*,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct ixgbe_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 int VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_q_vectors; VAR_7++) {
  struct ixgbe_q_vector *VAR_11 = VAR_5->q_vector[VAR_7];
  struct msix_entry *VAR_12 = &VAR_5->msix_entries[VAR_7];

  if (VAR_11->tx.ring && VAR_11->rx.ring) {
   FUNC_6(VAR_11->name, sizeof(VAR_11->name) - 1,
     "%s-%s-%d", VAR_6->name, "TxRx", VAR_9++);
   VAR_10++;
  } else if (VAR_11->rx.ring) {
   FUNC_6(VAR_11->name, sizeof(VAR_11->name) - 1,
     "%s-%s-%d", VAR_6->name, "rx", VAR_9++);
  } else if (VAR_11->tx.ring) {
   FUNC_6(VAR_11->name, sizeof(VAR_11->name) - 1,
     "%s-%s-%d", VAR_6->name, "tx", VAR_10++);
  } else {

   continue;
  }
  VAR_8 = FUNC_5(VAR_12->vector, &VAR_2, 0,
      VAR_11->name, VAR_11);
  if (VAR_8) {
   FUNC_0(VAR_4, "request_irq failed for MSIX interrupt "
         "Error: %d\n", VAR_8);
   goto free_queue_irqs;
  }

  if (VAR_5->flags & VAR_0) {

   FUNC_2(VAR_12->vector,
           &VAR_11->affinity_mask);
  }
 }

 VAR_8 = FUNC_5(VAR_5->msix_entries[VAR_7].vector,
     VAR_3, 0, VAR_6->name, VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4, "request_irq for msix_other failed: %d\n", VAR_8);
  goto free_queue_irqs;
 }

 return 0;

free_queue_irqs:
 while (VAR_7) {
  VAR_7--;
  FUNC_2(VAR_5->msix_entries[VAR_7].vector,
          ((void*)0));
  FUNC_1(VAR_5->msix_entries[VAR_7].vector,
    VAR_5->q_vector[VAR_7]);
 }
 VAR_5->flags &= ~VAR_1;
 FUNC_4(VAR_5->pdev);
 FUNC_3(VAR_5->msix_entries);
 VAR_5->msix_entries = ((void*)0);
 return VAR_8;
}
