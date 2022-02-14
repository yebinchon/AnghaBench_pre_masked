
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; int mnt_root; struct vfsmount* mnt_parent; int mnt_mountpoint; } ;
struct file_system_type {int fs_flags; int (* get_sb ) (struct file_system_type*,int,char const*,void*,struct vfsmount*) ;int name; } ;
struct TYPE_3__ {scalar_t__ s_maxbytes; int s_umount; int s_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int ,scalar_t__) ;
 char* FUNC_3 () ;
 struct vfsmount* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct vfsmount*) ;
 int FUNC_9 (void*,char*) ;
 int FUNC_10 (TYPE_1__*,int,char*) ;
 int FUNC_11 (struct file_system_type*,int,char const*,void*,struct vfsmount*) ;
 int FUNC_12 (int *) ;

struct vfsmount *
FUNC_13(struct file_system_type *VAR_4, int VAR_5, const char *VAR_6, void *VAR_7)
{
 struct vfsmount *VAR_8;
 char *VAR_9 = ((void*)0);
 int VAR_10;

 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_10 = -VAR_1;
 VAR_8 = FUNC_4(VAR_6);
 if (!VAR_8)
  goto out;

 if (VAR_7 && !(VAR_4->fs_flags & VAR_2)) {
  VAR_9 = FUNC_3();
  if (!VAR_9)
   goto out_mnt;

  VAR_10 = FUNC_9(VAR_7, VAR_9);
  if (VAR_10)
   goto out_free_secdata;
 }

 VAR_10 = VAR_4->get_sb(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 < 0)
  goto out_free_secdata;
 FUNC_0(!VAR_8->mnt_sb);
 VAR_8->mnt_sb->s_flags |= VAR_3;

  VAR_10 = FUNC_10(VAR_8->mnt_sb, VAR_5, VAR_9);
  if (VAR_10)
   goto out_sb;
 FUNC_2((VAR_8->mnt_sb->s_maxbytes < 0), "%s set sb->s_maxbytes to "
  "negative value (%lld)\n", VAR_4->name, VAR_8->mnt_sb->s_maxbytes);

 VAR_8->mnt_mountpoint = VAR_8->mnt_root;
 VAR_8->mnt_parent = VAR_8;
 FUNC_12(&VAR_8->mnt_sb->s_umount);
 FUNC_7(VAR_9);
 return VAR_8;
out_sb:
 FUNC_6(VAR_8->mnt_root);
 FUNC_5(VAR_8->mnt_sb);
out_free_secdata:
 FUNC_7(VAR_9);
out_mnt:
 FUNC_8(VAR_8);
out:
 return FUNC_1(VAR_10);
}
