
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
typedef int uint64_t ;
struct nameidata {int ni_vp; } ;
struct attrlist {int dummy; } ;
typedef int int32_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int ,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct attrlist*,int ,size_t,int,int,int *,int ) ;
 int FUNC_2 (struct nameidata*,int) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(vfs_context_t VAR_6, user_addr_t VAR_7,
    struct attrlist *VAR_8, user_addr_t VAR_9, size_t VAR_10,
    uint64_t VAR_11, enum uio_seg VAR_12, enum uio_seg VAR_13, int VAR_14)
{
 struct nameidata VAR_15;
 vnode_t VAR_16;
 int32_t VAR_17;
 int VAR_18;

 VAR_17 = 0;



 if (!(VAR_11 & VAR_2))
  VAR_17 |= VAR_1;

 VAR_17 |= VAR_0;
 FUNC_0(&VAR_15, VAR_3, VAR_5, VAR_17, VAR_13,
     VAR_7, VAR_6);

 VAR_18 = FUNC_2(&VAR_15, VAR_14);

 if (VAR_18)
  return (VAR_18);

 VAR_16 = VAR_15.ni_vp;

 VAR_18 = FUNC_1(VAR_6, VAR_16, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, ((void*)0), VAR_4);


 FUNC_3(&VAR_15);
 FUNC_4(VAR_16);
 return (VAR_18);
}
