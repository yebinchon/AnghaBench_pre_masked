
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_first_done; } ;
struct gfs2_sbd {int sd_kobj; struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char**) ;

__attribute__((used)) static void FUNC_1(struct gfs2_sbd *VAR_1)
{
 char *VAR_2 = "FIRSTMOUNT=Done";
 char *VAR_3[] = { VAR_2, ((void*)0) };
 struct lm_lockstruct *VAR_4 = &VAR_1->sd_lockstruct;
 VAR_4->ls_first_done = 1;
 FUNC_0(&VAR_1->sd_kobj, VAR_0, VAR_3);
}
