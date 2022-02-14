
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
struct TYPE_2__ {int cn_flags; int cn_context; } ;
struct nameidata {int ni_flag; TYPE_1__ ni_cnd; int ni_dvp; scalar_t__ ni_dirp; int ni_segflg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

int
FUNC_6(struct nameidata *VAR_5, int VAR_6)
{
 if ((VAR_6 != VAR_0) &&
     !(VAR_5->ni_flag & VAR_2) &&
     !(VAR_5->ni_cnd.cn_flags & VAR_3)) {
  int VAR_7 = 0;
  char VAR_8;

  if (FUNC_0(VAR_5->ni_segflg)) {
   VAR_7 = FUNC_1(VAR_5->ni_dirp, &VAR_8, sizeof(char));
   if (VAR_7)
    return (VAR_7);
  } else {
   VAR_8 = *((char *)(VAR_5->ni_dirp));
  }

  if (VAR_8 != '/') {
   vnode_t VAR_9;

   VAR_7 = FUNC_3(VAR_5->ni_cnd.cn_context, VAR_6,
       &VAR_9);
   if (VAR_7)
    return (VAR_7);

   if (FUNC_5(VAR_9) != VAR_4) {
    FUNC_4(VAR_9);
    return (VAR_1);
   }

   VAR_5->ni_dvp = VAR_9;
   VAR_5->ni_cnd.cn_flags |= VAR_3;
   VAR_7 = FUNC_2(VAR_5);
   VAR_5->ni_cnd.cn_flags &= ~VAR_3;
   FUNC_4(VAR_9);
   return (VAR_7);
  }
 }

 return (FUNC_2(VAR_5));
}
