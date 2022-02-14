
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 struct vfsmount* FUNC_1 (struct vfsmount*,struct vfsmount*) ;

__attribute__((used)) static inline int FUNC_2(struct vfsmount *VAR_0)
{
 struct vfsmount *VAR_1;
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = FUNC_1(VAR_1, VAR_0)) {
  if (FUNC_0(VAR_1))
   return 1;
 }
 return 0;
}
