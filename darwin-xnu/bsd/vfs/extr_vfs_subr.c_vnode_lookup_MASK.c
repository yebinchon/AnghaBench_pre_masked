
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int * vfs_context_t ;
typedef int u_int32_t ;
struct nameidata {int ni_vp; } ;
typedef int errno_t ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (struct nameidata*) ;

errno_t
FUNC_4(const char *VAR_11, int VAR_12, vnode_t *VAR_13, vfs_context_t VAR_14)
{
 struct nameidata VAR_15;
 int VAR_16;
 u_int32_t VAR_17 = 0;

 if (VAR_14 == ((void*)0)) {
  return VAR_1;
 }

 if (VAR_12 & VAR_10)
  VAR_17 = VAR_5;
 else
  VAR_17 = VAR_2;

 if (VAR_12 & VAR_9)
  VAR_17 |= VAR_4;

 if (VAR_12 & VAR_8)
  VAR_17 |= VAR_0;


 FUNC_1(&VAR_15, VAR_3, VAR_6, VAR_17, VAR_7,
        FUNC_0(VAR_11), VAR_14);

 if ((VAR_16 = FUNC_2(&VAR_15)))
  return (VAR_16);
 *VAR_13 = VAR_15.ni_vp;
 FUNC_3(&VAR_15);

 return (0);
}
