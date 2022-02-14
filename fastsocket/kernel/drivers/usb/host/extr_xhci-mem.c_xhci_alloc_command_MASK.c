
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_command {int cmd_list; scalar_t__ status; void* completion; int in_ctx; } ;
struct completion {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct xhci_command*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct xhci_hcd*,int ,int ) ;
 int FUNC_5 (struct xhci_hcd*,int ) ;

struct xhci_command *FUNC_6(struct xhci_hcd *VAR_1,
  bool VAR_2, bool VAR_3,
  gfp_t VAR_4)
{
 struct xhci_command *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_2) {
  VAR_5->in_ctx =
   FUNC_4(VAR_1, VAR_0,
     VAR_4);
  if (!VAR_5->in_ctx) {
   FUNC_2(VAR_5);
   return ((void*)0);
  }
 }

 if (VAR_3) {
  VAR_5->completion =
   FUNC_3(sizeof(struct completion), VAR_4);
  if (!VAR_5->completion) {
   FUNC_5(VAR_1, VAR_5->in_ctx);
   FUNC_2(VAR_5);
   return ((void*)0);
  }
  FUNC_1(VAR_5->completion);
 }

 VAR_5->status = 0;
 FUNC_0(&VAR_5->cmd_list);
 return VAR_5;
}
