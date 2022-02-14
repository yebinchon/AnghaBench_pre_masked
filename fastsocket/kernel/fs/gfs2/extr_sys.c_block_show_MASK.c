
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 struct lm_lockstruct *VAR_3 = &VAR_1->sd_lockstruct;
 ssize_t VAR_4;
 int VAR_5 = 0;

 if (FUNC_1(VAR_0, &VAR_3->ls_flags))
  VAR_5 = 1;
 VAR_4 = FUNC_0(VAR_2, "%d\n", VAR_5);
 return VAR_4;
}
