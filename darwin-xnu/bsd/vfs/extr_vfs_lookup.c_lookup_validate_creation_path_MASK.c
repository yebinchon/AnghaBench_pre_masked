
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct componentname {int cn_flags; } ;
struct nameidata {int ni_flag; struct componentname ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(struct nameidata *VAR_6)
{
 struct componentname *VAR_7 = &VAR_6->ni_cnd;





 if (VAR_7->cn_flags & VAR_4) {
  return VAR_1;
 }
 if ((VAR_7->cn_flags & VAR_2) && (VAR_6->ni_flag & VAR_3) && !(VAR_7->cn_flags & VAR_5)) {
  return VAR_0;
 }

 return 0;
}
