
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef unsigned short uid_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef int name ;
typedef unsigned short gid_t ;
struct TYPE_3__ {int * dn_clone; } ;
typedef TYPE_1__ devnode_t ;
struct TYPE_4__ {char* de_name; TYPE_1__* de_dnp; } ;
typedef TYPE_2__ devdirent_t ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ,unsigned short) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct vnode_attr*,int ) ;

__attribute__((used)) static int
FUNC_10(void * VAR_10, unsigned short VAR_11, uid_t VAR_12, gid_t VAR_13)
{
 devdirent_t *VAR_14 = (devdirent_t *)VAR_10;
 devnode_t *VAR_15;
 int VAR_16 = VAR_1;
 vfs_context_t VAR_17 = FUNC_7();;
 struct vnode_attr VAR_18;

 FUNC_2(&VAR_18);
 FUNC_3(&VAR_18, VAR_9, VAR_12);
 FUNC_3(&VAR_18, VAR_7, VAR_13);
 FUNC_3(&VAR_18, VAR_8, VAR_11 & VAR_0);







 if (VAR_14 == ((void*)0) || (VAR_15 = VAR_14->de_dnp) == ((void*)0)) {
  VAR_16 = VAR_2;
  goto out;
 }
 if (VAR_15->dn_clone == ((void*)0)) {
  struct nameidata VAR_19;
  char VAR_20[128];

  FUNC_6(VAR_20, sizeof(VAR_20), "/dev/%s", VAR_14->de_name);
  FUNC_1(&VAR_19, VAR_4, VAR_5, VAR_3, VAR_6, FUNC_0(VAR_20), VAR_17);
  VAR_16 = FUNC_4(&VAR_19);
  if (VAR_16)
   goto out;
  VAR_16 = FUNC_9(VAR_19.ni_vp, &VAR_18, VAR_17);
  FUNC_8(VAR_19.ni_vp);
  FUNC_5(&VAR_19);
  goto out;
 }

out:
 return(VAR_16);
}
