
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int * ls_dlm; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct gfs2_sbd *VAR_0)
{
 struct lm_lockstruct *VAR_1 = &VAR_0->sd_lockstruct;

 if (VAR_1->ls_dlm) {
  FUNC_0(VAR_1->ls_dlm, 2);
  VAR_1->ls_dlm = ((void*)0);
 }
}
