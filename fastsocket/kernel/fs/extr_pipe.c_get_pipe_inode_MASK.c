
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int readers; int writers; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_state; int * i_fop; struct pipe_inode_info* i_pipe; } ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pipe_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct inode * FUNC_5(void)
{
 struct inode *VAR_7 = FUNC_4(VAR_5->mnt_sb);
 struct pipe_inode_info *VAR_8;

 if (!VAR_7)
  goto fail_inode;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8)
  goto fail_iput;
 VAR_7->i_pipe = VAR_8;

 VAR_8->readers = VAR_8->writers = 1;
 VAR_7->i_fop = &VAR_6;







 VAR_7->i_state = VAR_1;
 VAR_7->i_mode = VAR_2 | VAR_3 | VAR_4;
 VAR_7->i_uid = FUNC_2();
 VAR_7->i_gid = FUNC_1();
 VAR_7->i_atime = VAR_7->i_mtime = VAR_7->i_ctime = VAR_0;

 return VAR_7;

fail_iput:
 FUNC_3(VAR_7);

fail_inode:
 return ((void*)0);
}
