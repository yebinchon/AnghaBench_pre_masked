
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static ssize_t FUNC_5(struct gfs2_sbd *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct lm_lockstruct *VAR_5 = &VAR_2->sd_lockstruct;
 ssize_t VAR_6 = VAR_4;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, ((void*)0), 0);

 if (VAR_7 == 1)
  FUNC_2(VAR_0, &VAR_5->ls_flags);
 else if (VAR_7 == 0) {
  FUNC_0(VAR_0, &VAR_5->ls_flags);
  FUNC_4();
  FUNC_1(VAR_2);
 } else {
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
