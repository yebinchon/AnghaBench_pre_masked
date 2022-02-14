
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {scalar_t__ completion; int cmd_list; int status; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xhci_hcd*,struct xhci_command*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_0,
  struct xhci_command *VAR_1, u32 VAR_2)
{
 VAR_1->status = VAR_2;
 FUNC_1(&VAR_1->cmd_list);
 if (VAR_1->completion)
  FUNC_0(VAR_1->completion);
 else
  FUNC_2(VAR_0, VAR_1);
}
