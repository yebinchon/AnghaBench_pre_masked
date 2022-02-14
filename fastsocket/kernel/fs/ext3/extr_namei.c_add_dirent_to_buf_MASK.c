
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; int i_version; int i_ctime; int i_mtime; int i_mode; int i_ino; } ;
struct ext3_dir_entry_2 {int name_len; int name; scalar_t__ inode; int file_type; void* rec_len; } ;
struct TYPE_6__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_7__ {int s_blocksize; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,unsigned long) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct inode*) ;
 scalar_t__ FUNC_8 (int,char const*,struct ext3_dir_entry_2*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,struct ext3_dir_entry_2*,int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_5, struct dentry *VAR_6,
        struct inode *VAR_7, struct ext3_dir_entry_2 *VAR_8,
        struct buffer_head * VAR_9)
{
 struct inode *VAR_10 = VAR_6->d_parent->d_inode;
 const char *VAR_11 = VAR_6->d_name.name;
 int VAR_12 = VAR_6->d_name.len;
 unsigned long VAR_13 = 0;
 unsigned short VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18;

 VAR_14 = FUNC_1(VAR_12);
 if (!VAR_8) {
  VAR_8 = (struct ext3_dir_entry_2 *)VAR_9->b_data;
  VAR_18 = VAR_9->b_data + VAR_10->i_sb->s_blocksize - VAR_14;
  while ((char *) VAR_8 <= VAR_18) {
   if (!FUNC_4("ext3_add_entry", VAR_10, VAR_8,
        VAR_9, VAR_13)) {
    FUNC_2 (VAR_9);
    return -VAR_2;
   }
   if (FUNC_8 (VAR_12, VAR_11, VAR_8)) {
    FUNC_2 (VAR_9);
    return -VAR_1;
   }
   VAR_15 = FUNC_1(VAR_8->name_len);
   VAR_16 = FUNC_9(VAR_8->rec_len);
   if ((VAR_8->inode? VAR_16 - VAR_15: VAR_16) >= VAR_14)
    break;
   VAR_8 = (struct ext3_dir_entry_2 *)((char *)VAR_8 + VAR_16);
   VAR_13 += VAR_16;
  }
  if ((char *) VAR_8 > VAR_18)
   return -VAR_3;
 }
 FUNC_0(VAR_9, "get_write_access");
 VAR_17 = FUNC_6(VAR_5, VAR_9);
 if (VAR_17) {
  FUNC_12(VAR_10->i_sb, VAR_17);
  FUNC_2(VAR_9);
  return VAR_17;
 }


 VAR_15 = FUNC_1(VAR_8->name_len);
 VAR_16 = FUNC_9(VAR_8->rec_len);
 if (VAR_8->inode) {
  struct ext3_dir_entry_2 *VAR_19 = (struct ext3_dir_entry_2 *)((char *)VAR_8 + VAR_15);
  VAR_19->rec_len = FUNC_10(VAR_16 - VAR_15);
  VAR_8->rec_len = FUNC_10(VAR_15);
  VAR_8 = VAR_19;
 }
 VAR_8->file_type = VAR_4;
 if (VAR_7) {
  VAR_8->inode = FUNC_3(VAR_7->i_ino);
  FUNC_11(VAR_10->i_sb, VAR_8, VAR_7->i_mode);
 } else
  VAR_8->inode = 0;
 VAR_8->name_len = VAR_12;
 FUNC_14 (VAR_8->name, VAR_11, VAR_12);
 VAR_10->i_mtime = VAR_10->i_ctime = VAR_0;
 FUNC_13(VAR_10);
 VAR_10->i_version++;
 FUNC_7(VAR_5, VAR_10);
 FUNC_0(VAR_9, "call ext3_journal_dirty_metadata");
 VAR_17 = FUNC_5(VAR_5, VAR_9);
 if (VAR_17)
  FUNC_12(VAR_10->i_sb, VAR_17);
 FUNC_2(VAR_9);
 return 0;
}
