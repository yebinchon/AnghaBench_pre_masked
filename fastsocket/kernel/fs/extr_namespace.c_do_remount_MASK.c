
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_umount; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct TYPE_4__ {scalar_t__ mnt_root; int mnt_flags; int mnt_ns; struct super_block* mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct super_block*,int,void*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int,void*) ;
 int FUNC_6 (struct super_block*,void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct path *VAR_5, int VAR_6, int VAR_7,
        void *VAR_8)
{
 int VAR_9;
 struct super_block *VAR_10 = VAR_5->mnt->mnt_sb;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (!FUNC_2(VAR_5->mnt))
  return -VAR_1;

 if (VAR_5->dentry != VAR_5->mnt->mnt_root)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_10, VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_10->s_umount);
 if (VAR_6 & VAR_3)
  VAR_9 = FUNC_1(VAR_5->mnt, VAR_6);
 else
  VAR_9 = FUNC_3(VAR_10, VAR_6, VAR_8, 0);
 if (!VAR_9)
  VAR_5->mnt->mnt_flags = VAR_7;
 FUNC_10(&VAR_10->s_umount);
 if (!VAR_9) {
  FUNC_5(VAR_5->mnt, VAR_6, VAR_8);

  FUNC_7(&VAR_4);
  FUNC_9(VAR_5->mnt->mnt_ns);
  FUNC_8(&VAR_4);
 }
 return VAR_9;
}
