
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xhci_virt_device {int cmd_list; TYPE_2__* eps; } ;
struct xhci_hcd {int lock; TYPE_3__* cmd_ring; struct xhci_virt_device** devs; } ;
struct TYPE_9__ {scalar_t__ next; } ;
struct xhci_command {TYPE_4__ cmd_list; int completion; int command_trb; } ;
struct TYPE_8__ {int enqueue; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct TYPE_6__ {scalar_t__ dequeue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 struct xhci_command* FUNC_5 (struct xhci_hcd*,int,int,int ) ;
 int FUNC_6 (struct xhci_hcd*,char*) ;
 int FUNC_7 (struct xhci_hcd*,struct xhci_command*) ;
 int FUNC_8 (struct xhci_hcd*,int,int,int) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct xhci_hcd *VAR_6, int VAR_7, int VAR_8)
{
 struct xhci_virt_device *VAR_9;
 struct xhci_command *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = 0;
 VAR_9 = VAR_6->devs[VAR_7];
 VAR_10 = FUNC_5(VAR_6, 0, 1, VAR_2);
 if (!VAR_10) {
  FUNC_6(VAR_6, "Couldn't allocate command structure.\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_6->lock, VAR_11);
 for (VAR_14 = VAR_3; VAR_14 > 0; VAR_14--) {
  if (VAR_9->eps[VAR_14].ring && VAR_9->eps[VAR_14].ring->dequeue)
   FUNC_8(VAR_6, VAR_7, VAR_14, VAR_8);
 }
 VAR_10->command_trb = VAR_6->cmd_ring->enqueue;
 FUNC_0(&VAR_10->cmd_list, &VAR_9->cmd_list);
 FUNC_8(VAR_6, VAR_7, 0, VAR_8);
 FUNC_9(VAR_6);
 FUNC_3(&VAR_6->lock, VAR_11);


 VAR_12 = FUNC_4(
   VAR_10->completion,
   VAR_5);
 if (VAR_12 <= 0) {
  FUNC_10(VAR_6, "%s while waiting for stop endpoint command\n",
    VAR_12 == 0 ? "Timeout" : "Signal");
  FUNC_2(&VAR_6->lock, VAR_11);



  if (VAR_10->cmd_list.next != VAR_4)
   FUNC_1(&VAR_10->cmd_list);
  FUNC_3(&VAR_6->lock, VAR_11);
  VAR_13 = -VAR_1;
  goto command_cleanup;
 }

command_cleanup:
 FUNC_7(VAR_6, VAR_10);
 return VAR_13;
}
