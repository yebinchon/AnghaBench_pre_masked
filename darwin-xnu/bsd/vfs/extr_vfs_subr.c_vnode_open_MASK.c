
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
typedef int * vfs_context_t ;
typedef int u_int32_t ;
struct nameidata {int * ni_vp; } ;
typedef int errno_t ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_2 () ;
 int FUNC_3 (struct nameidata*,int,int) ;

errno_t
FUNC_4(const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, vnode_t *VAR_15, vfs_context_t VAR_16)
{
 struct nameidata VAR_17;
 int VAR_18;
 u_int32_t VAR_19 = 0;
 int VAR_20 = VAR_14;

 if (VAR_16 == ((void*)0)) {
  VAR_16 = FUNC_2();
 }

 if (VAR_12 & VAR_6)
  VAR_20 |= VAR_10;

 if (VAR_20 & VAR_10)
  VAR_19 = VAR_4;
 else
  VAR_19 = VAR_1;

 if (VAR_20 & VAR_9)
  VAR_19 |= VAR_3;

 if (VAR_20 & VAR_8)
  VAR_19 |= VAR_0;


 FUNC_1(&VAR_17, VAR_2, VAR_5, VAR_19, VAR_7,
        FUNC_0(VAR_11), VAR_16);

 if ((VAR_18 = FUNC_3(&VAR_17, VAR_12, VAR_13)))
  *VAR_15 = ((void*)0);
 else
  *VAR_15 = VAR_17.ni_vp;

 return (VAR_18);
}
