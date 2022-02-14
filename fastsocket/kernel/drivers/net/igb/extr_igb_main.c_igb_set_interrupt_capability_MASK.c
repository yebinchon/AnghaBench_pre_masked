
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int num_rx_queues; int rss_queues; int num_tx_queues; int flags; int num_q_vectors; TYPE_1__* pdev; scalar_t__ vfs_allocated_count; int * vf_data; struct e1000_hw hw; TYPE_2__* msix_entries; } ;
struct TYPE_7__ {int entry; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igb_adapter*) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct igb_adapter *VAR_5, bool VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_6)
  goto msi_only;


 VAR_5->num_rx_queues = VAR_5->rss_queues;
 if (VAR_5->vfs_allocated_count)
  VAR_5->num_tx_queues = 1;
 else
  VAR_5->num_tx_queues = VAR_5->rss_queues;


 VAR_8 = VAR_5->num_rx_queues;


 if (!(VAR_5->flags & VAR_4))
  VAR_8 += VAR_5->num_tx_queues;


 VAR_5->num_q_vectors = VAR_8;


 VAR_8++;
 VAR_5->msix_entries = FUNC_2(VAR_8, sizeof(struct msix_entry),
     VAR_2);

 if (!VAR_5->msix_entries)
  goto msi_only;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_5->msix_entries[VAR_9].entry = VAR_9;

 VAR_7 = FUNC_7(VAR_5->pdev,
         VAR_5->msix_entries,
         VAR_8);
 if (VAR_7 == 0)
  return;

 FUNC_1(VAR_5);


msi_only:
 VAR_5->vfs_allocated_count = 0;
 VAR_5->rss_queues = 1;
 VAR_5->flags |= VAR_4;
 VAR_5->num_rx_queues = 1;
 VAR_5->num_tx_queues = 1;
 VAR_5->num_q_vectors = 1;
 if (!FUNC_6(VAR_5->pdev))
  VAR_5->flags |= VAR_3;
}
