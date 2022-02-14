
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_ls {int ls_wait_general; int ls_timer; } ;
struct TYPE_2__ {int ci_recover_timer; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 struct dlm_ls *VAR_4 = (struct dlm_ls *) VAR_3;
 FUNC_0(&VAR_4->ls_timer, VAR_2 + (VAR_1.ci_recover_timer * VAR_0));
 FUNC_1(&VAR_4->ls_wait_general);
}
