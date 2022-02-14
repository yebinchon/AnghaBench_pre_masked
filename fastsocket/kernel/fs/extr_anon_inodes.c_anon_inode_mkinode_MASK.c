
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_state; TYPE_1__* i_mapping; int * i_fop; } ;
struct TYPE_4__ {int mnt_sb; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct inode* FUNC_3 (int ) ;

__attribute__((used)) static struct inode *FUNC_4(void)
{
 struct inode *VAR_9 = FUNC_3(VAR_8->mnt_sb);

 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->i_fop = &VAR_7;

 VAR_9->i_mapping->a_ops = &VAR_6;







 VAR_9->i_state = VAR_2;
 VAR_9->i_mode = VAR_3 | VAR_4 | VAR_5;
 VAR_9->i_uid = FUNC_2();
 VAR_9->i_gid = FUNC_1();
 VAR_9->i_atime = VAR_9->i_mtime = VAR_9->i_ctime = VAR_0;
 return VAR_9;
}
