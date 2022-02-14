
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct TYPE_3__ {int cn_flags; } ;
struct nameidata {int ni_flag; TYPE_1__ ni_cnd; int ni_ncgeneration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;

void
FUNC_4(int VAR_10, vnode_t VAR_11, vnode_t VAR_12, struct nameidata *VAR_13, int VAR_14)
{
 if (VAR_10 == 0 && VAR_12 == VAR_7) {
  FUNC_3("NULL vp with error == 0.\n");
 }






 if ((VAR_13->ni_flag & VAR_6) == 0) {
  return;
 }





 if (VAR_10 == VAR_4) {
  return;
 }





 if ((VAR_12 != VAR_7) && !VAR_14) {




  if ((VAR_10 != 0) || (VAR_13->ni_cnd.cn_flags & VAR_5)) {
   FUNC_2(VAR_11, VAR_12, &VAR_13->ni_cnd, VAR_13->ni_ncgeneration);
  }
  if (VAR_13->ni_cnd.cn_flags & VAR_2)
   FUNC_0(VAR_9, VAR_12, VAR_0);
  else if (VAR_13->ni_cnd.cn_flags & VAR_3)
   FUNC_0(VAR_9, VAR_12, VAR_1);
 }
 if (VAR_8) {
         FUNC_1(VAR_12 ? VAR_12 : VAR_11, &VAR_13->ni_cnd);
 }
}
