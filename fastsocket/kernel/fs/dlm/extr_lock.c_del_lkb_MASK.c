
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int lkb_statequeue; scalar_t__ lkb_status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1)
{
 VAR_1->lkb_status = 0;
 FUNC_0(&VAR_1->lkb_statequeue);
 FUNC_1(VAR_1);
}
