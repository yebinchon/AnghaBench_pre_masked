
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dentry; TYPE_1__* mnt; } ;
struct nsproxy {struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {TYPE_1__* root; } ;
struct fs_struct {int users; } ;
struct TYPE_4__ {struct fs_struct* fs; } ;
struct TYPE_3__ {int mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct path*) ;
 int FUNC_3 (struct mnt_namespace*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct mnt_namespace*) ;
 int FUNC_7 (struct fs_struct*,struct path*) ;
 int FUNC_8 (struct fs_struct*,struct path*) ;

__attribute__((used)) static int FUNC_9(struct nsproxy *VAR_4, void *VAR_5)
{
 struct fs_struct *VAR_6 = VAR_3->fs;
 struct mnt_namespace *VAR_7 = VAR_5;
 struct path VAR_8;

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
  return -VAR_2;

 if (VAR_6->users != 1)
  return -VAR_2;

 FUNC_3(VAR_7);
 FUNC_6(VAR_4->mnt_ns);
 VAR_4->mnt_ns = VAR_7;


 VAR_8.mnt = VAR_7->root;
 VAR_8.dentry = VAR_7->root->mnt_root;
 FUNC_4(&VAR_8);
 while(FUNC_1(VAR_8.dentry) && FUNC_2(&VAR_8))
  ;


 FUNC_7(VAR_6, &VAR_8);
 FUNC_8(VAR_6, &VAR_8);

 FUNC_5(&VAR_8);
 return 0;
}
