
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u16 ;
struct writeback_control {scalar_t__ sync_mode; } ;
struct TYPE_9__ {unsigned long tv_sec; } ;
struct TYPE_8__ {unsigned long tv_sec; } ;
struct TYPE_7__ {unsigned long tv_sec; } ;
struct inode {unsigned long i_mode; unsigned long i_uid; unsigned long i_gid; unsigned long i_nlink; unsigned long i_size; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; TYPE_4__* i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_sb_info {unsigned int si_lasti; int bfs_lock; } ;
struct bfs_inode {void* i_eoffset; void* i_eblock; void* i_sblock; void* i_ctime; void* i_mtime; void* i_atime; void* i_nlink; void* i_gid; void* i_uid; void* i_mode; int i_ino; void* i_vtype; } ;
struct TYPE_11__ {unsigned long i_sblock; unsigned long i_eblock; } ;
struct TYPE_10__ {char* s_id; } ;


 unsigned long VAR_0 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct bfs_sb_info* FUNC_1 (TYPE_4__*) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (unsigned int) ;
 void* FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,unsigned int) ;
 struct buffer_head* FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, struct writeback_control *VAR_8)
{
 struct bfs_sb_info *VAR_9 = FUNC_1(VAR_7->i_sb);
 unsigned int VAR_10 = (u16)VAR_7->i_ino;
        unsigned long VAR_11;
 struct bfs_inode *VAR_12;
 struct buffer_head *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = 0;

        FUNC_7("ino=%08x\n", VAR_10);

 if ((VAR_10 < VAR_2) || (VAR_10 > FUNC_1(VAR_7->i_sb)->si_lasti)) {
  FUNC_11("Bad inode number %s:%08x\n", VAR_7->i_sb->s_id, VAR_10);
  return -VAR_5;
 }

 FUNC_9(&VAR_9->bfs_lock);
 VAR_14 = (VAR_10 - VAR_2) / VAR_1 + 1;
 VAR_13 = FUNC_12(VAR_7->i_sb, VAR_14);
 if (!VAR_13) {
  FUNC_11("Unable to read inode %s:%08x\n",
    VAR_7->i_sb->s_id, VAR_10);
  FUNC_10(&VAR_9->bfs_lock);
  return -VAR_5;
 }

 VAR_15 = (VAR_10 - VAR_2) % VAR_1;
 VAR_12 = (struct bfs_inode *)VAR_13->b_data + VAR_15;

 if (VAR_10 == VAR_2)
  VAR_12->i_vtype = FUNC_6(VAR_3);
 else
  VAR_12->i_vtype = FUNC_6(VAR_4);

 VAR_12->i_ino = FUNC_5(VAR_10);
 VAR_12->i_mode = FUNC_6(VAR_7->i_mode);
 VAR_12->i_uid = FUNC_6(VAR_7->i_uid);
 VAR_12->i_gid = FUNC_6(VAR_7->i_gid);
 VAR_12->i_nlink = FUNC_6(VAR_7->i_nlink);
 VAR_12->i_atime = FUNC_6(VAR_7->i_atime.tv_sec);
 VAR_12->i_mtime = FUNC_6(VAR_7->i_mtime.tv_sec);
 VAR_12->i_ctime = FUNC_6(VAR_7->i_ctime.tv_sec);
        VAR_11 = FUNC_0(VAR_7)->i_sblock;
 VAR_12->i_sblock = FUNC_6(VAR_11);
 VAR_12->i_eblock = FUNC_6(FUNC_0(VAR_7)->i_eblock);
 VAR_12->i_eoffset = FUNC_6(VAR_11 * VAR_0 + VAR_7->i_size - 1);

 FUNC_8(VAR_13);
 if (VAR_8->sync_mode == VAR_6) {
  FUNC_13(VAR_13);
  if (FUNC_3(VAR_13) && !FUNC_4(VAR_13))
   VAR_16 = -VAR_5;
 }
 FUNC_2(VAR_13);
 FUNC_10(&VAR_9->bfs_lock);
 return VAR_16;
}
