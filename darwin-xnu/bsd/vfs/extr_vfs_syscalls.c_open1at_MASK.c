
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct TYPE_2__ {int cn_flags; int cn_context; } ;
struct nameidata {TYPE_1__ ni_cnd; int ni_dvp; scalar_t__ ni_dirp; int ni_segflg; } ;
typedef int int32_t ;
typedef int fp_allocfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (int ,struct nameidata*,int,struct vnode_attr*,int ,void*,int *) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(vfs_context_t VAR_4, struct nameidata *VAR_5, int VAR_6,
    struct vnode_attr *VAR_7, fp_allocfn_t VAR_8, void *VAR_9, int32_t *VAR_10,
    int VAR_11)
{
 if ((VAR_11 != VAR_0) && !(VAR_5->ni_cnd.cn_flags & VAR_2)) {
  int VAR_12;
  char VAR_13;

  if (FUNC_0(VAR_5->ni_segflg)) {
   VAR_12 = FUNC_1(VAR_5->ni_dirp, &VAR_13, sizeof(char));
   if (VAR_12)
    return (VAR_12);
  } else {
   VAR_13 = *((char *)(VAR_5->ni_dirp));
  }

  if (VAR_13 != '/') {
   vnode_t VAR_14;

   VAR_12 = FUNC_3(VAR_5->ni_cnd.cn_context, VAR_11,
       &VAR_14);
   if (VAR_12)
    return (VAR_12);

   if (FUNC_5(VAR_14) != VAR_3) {
    FUNC_4(VAR_14);
    return (VAR_1);
   }

   VAR_5->ni_dvp = VAR_14;
   VAR_5->ni_cnd.cn_flags |= VAR_2;
   VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_10);
   FUNC_4(VAR_14);
   return (VAR_12);
  }
 }

 return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10));
}
