
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;
struct inode {int i_state; int i_size; int i_blocks; int i_mode; TYPE_1__ i_data; int * i_op; int * i_fop; struct timespec i_ctime; struct timespec i_atime; struct timespec i_mtime; int i_gid; int i_uid; } ;
struct cramfs_inode {int size; int gid; int uid; int mode; } ;


 int FUNC_0 (struct cramfs_inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,struct cramfs_inode*) ;
 int FUNC_5 (struct inode*,int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_8(struct super_block *VAR_8,
    struct cramfs_inode * VAR_9)
{
 struct inode *VAR_10 = FUNC_4(VAR_8, FUNC_0(VAR_9),
         VAR_5, VAR_4,
         VAR_9);
 static struct timespec VAR_11;

 if (VAR_10 && (VAR_10->i_state & VAR_0)) {
  VAR_10->i_mode = VAR_9->mode;
  VAR_10->i_uid = VAR_9->uid;
  VAR_10->i_size = VAR_9->size;
  VAR_10->i_blocks = (VAR_9->size - 1) / 512 + 1;
  VAR_10->i_gid = VAR_9->gid;

  VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = VAR_11;




  if (FUNC_3(VAR_10->i_mode)) {
   VAR_10->i_fop = &VAR_6;
   VAR_10->i_data.a_ops = &VAR_1;
  } else if (FUNC_1(VAR_10->i_mode)) {
   VAR_10->i_op = &VAR_2;
   VAR_10->i_fop = &VAR_3;
  } else if (FUNC_2(VAR_10->i_mode)) {
   VAR_10->i_op = &VAR_7;
   VAR_10->i_data.a_ops = &VAR_1;
  } else {
   FUNC_5(VAR_10, VAR_10->i_mode,
    FUNC_6(VAR_9->size));
  }
  FUNC_7(VAR_10);
 }
 return VAR_10;
}
