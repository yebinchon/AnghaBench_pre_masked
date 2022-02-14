
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {struct vfsmount* mnt; struct dentry* dentry; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {int d_sb; TYPE_1__ d_name; } ;
struct autofs_sb_info {int type; } ;
struct autofs_info {int last_used; } ;


 int FUNC_0 (char*,...) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct path*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (struct path*) ;

__attribute__((used)) static int FUNC_9(struct vfsmount *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3 = VAR_2;
 struct path VAR_4 = {.mnt = VAR_1, .dentry = VAR_2};
 int VAR_5 = 1;

 FUNC_0("dentry %p %.*s",
  VAR_2, (int)VAR_2->d_name.len, VAR_2->d_name.name);

 FUNC_7(&VAR_4);

 if (!FUNC_4(&VAR_4))
  goto done;

 if (FUNC_5(VAR_4.dentry)) {
  struct autofs_sb_info *VAR_6 = FUNC_2(VAR_4.dentry->d_sb);


  if (FUNC_3(VAR_6->type))
   goto done;
 }


 if (!FUNC_6(VAR_4.mnt)) {
  struct autofs_info *VAR_7 = FUNC_1(VAR_3);
  VAR_7->last_used = VAR_0;
  goto done;
 }

 VAR_5 = 0;
done:
 FUNC_0("returning = %d", VAR_5);
 FUNC_8(&VAR_4);
 return VAR_5;
}
