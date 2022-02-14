
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ctlr_info_t ;
struct TYPE_6__ {TYPE_1__* err_info; } ;
struct TYPE_5__ {scalar_t__ CommandStatus; scalar_t__ ScsiStatus; } ;
typedef TYPE_2__ CommandList_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_2, CommandList_struct *VAR_3)
{
 if (VAR_3->err_info->CommandStatus == VAR_0 &&
   VAR_3->err_info->ScsiStatus != VAR_1)
  (void)FUNC_0(VAR_2, VAR_3);
}
