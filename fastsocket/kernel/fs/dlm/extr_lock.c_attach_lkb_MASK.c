
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {struct dlm_rsb* lkb_resource; } ;


 int FUNC_0 (struct dlm_rsb*) ;

__attribute__((used)) static void FUNC_1(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1->lkb_resource = VAR_0;
}
