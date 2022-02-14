
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_hcd {int cancel_cmd_list; } ;
struct xhci_command {int dummy; } ;
struct xhci_cd {int cancel_cmd_list; union xhci_trb* cmd_trb; struct xhci_command* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct xhci_cd* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd *VAR_2,
  struct xhci_command *VAR_3,
  union xhci_trb *VAR_4)
{
 struct xhci_cd *VAR_5;
 VAR_5 = FUNC_1(sizeof(struct xhci_cd), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_5->cancel_cmd_list);

 VAR_5->command = VAR_3;
 VAR_5->cmd_trb = VAR_4;
 FUNC_2(&VAR_5->cancel_cmd_list, &VAR_2->cancel_cmd_list);

 return 0;
}
