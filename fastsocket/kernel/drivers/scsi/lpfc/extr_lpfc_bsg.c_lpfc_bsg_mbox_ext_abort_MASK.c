
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct lpfc_hba {TYPE_1__ mbox_ext_buf_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_hba*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_2)
{
 if (VAR_2->mbox_ext_buf_ctx.state == VAR_1)
  VAR_2->mbox_ext_buf_ctx.state = VAR_0;
 else
  FUNC_0(VAR_2);
 return;
}
