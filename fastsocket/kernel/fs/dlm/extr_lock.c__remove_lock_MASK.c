
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int lkb_grmode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_1, struct dlm_lkb *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 VAR_2->lkb_grmode = VAR_0;


 FUNC_1(VAR_2);
}
