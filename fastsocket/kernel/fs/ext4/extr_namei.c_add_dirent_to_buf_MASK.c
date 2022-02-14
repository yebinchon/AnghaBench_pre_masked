
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; int i_version; int i_ctime; int i_mtime; int i_mode; int i_ino; } ;
struct ext4_dir_entry_2 {int name_len; int name; scalar_t__ inode; int file_type; void* rec_len; } ;
struct TYPE_6__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_7__ {unsigned int s_blocksize; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct inode*) ;
 scalar_t__ FUNC_8 (int,char const*,struct ext4_dir_entry_2*) ;
 int FUNC_9 (void*,unsigned int) ;
 void* FUNC_10 (int,unsigned int) ;
 int FUNC_11 (TYPE_3__*,struct ext4_dir_entry_2*,int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_4, struct dentry *VAR_5,
        struct inode *VAR_6, struct ext4_dir_entry_2 *VAR_7,
        struct buffer_head *VAR_8)
{
 struct inode *VAR_9 = VAR_5->d_parent->d_inode;
 const char *VAR_10 = VAR_5->d_name.name;
 int VAR_11 = VAR_5->d_name.len;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = VAR_9->i_sb->s_blocksize;
 unsigned short VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18;

 VAR_14 = FUNC_1(VAR_11);
 if (!VAR_7) {
  VAR_7 = (struct ext4_dir_entry_2 *)VAR_8->b_data;
  VAR_18 = VAR_8->b_data + VAR_13 - VAR_14;
  while ((char *) VAR_7 <= VAR_18) {
   if (!FUNC_3("ext4_add_entry", VAR_9, VAR_7,
        VAR_8, VAR_12))
    return -VAR_1;
   if (FUNC_8(VAR_11, VAR_10, VAR_7))
    return -VAR_0;
   VAR_15 = FUNC_1(VAR_7->name_len);
   VAR_16 = FUNC_9(VAR_7->rec_len, VAR_13);
   if ((VAR_7->inode? VAR_16 - VAR_15: VAR_16) >= VAR_14)
    break;
   VAR_7 = (struct ext4_dir_entry_2 *)((char *)VAR_7 + VAR_16);
   VAR_12 += VAR_16;
  }
  if ((char *) VAR_7 > VAR_18)
   return -VAR_2;
 }
 FUNC_0(VAR_8, "get_write_access");
 VAR_17 = FUNC_6(VAR_4, VAR_8);
 if (VAR_17) {
  FUNC_12(VAR_9->i_sb, VAR_17);
  return VAR_17;
 }


 VAR_15 = FUNC_1(VAR_7->name_len);
 VAR_16 = FUNC_9(VAR_7->rec_len, VAR_13);
 if (VAR_7->inode) {
  struct ext4_dir_entry_2 *VAR_19 = (struct ext4_dir_entry_2 *)((char *)VAR_7 + VAR_15);
  VAR_19->rec_len = FUNC_10(VAR_16 - VAR_15, VAR_13);
  VAR_7->rec_len = FUNC_10(VAR_15, VAR_13);
  VAR_7 = VAR_19;
 }
 VAR_7->file_type = VAR_3;
 if (VAR_6) {
  VAR_7->inode = FUNC_2(VAR_6->i_ino);
  FUNC_11(VAR_9->i_sb, VAR_7, VAR_6->i_mode);
 } else
  VAR_7->inode = 0;
 VAR_7->name_len = VAR_11;
 FUNC_14(VAR_7->name, VAR_10, VAR_11);
 VAR_9->i_mtime = VAR_9->i_ctime = FUNC_4(VAR_9);
 FUNC_13(VAR_9);
 VAR_9->i_version++;
 FUNC_7(VAR_4, VAR_9);
 FUNC_0(VAR_8, "call ext4_handle_dirty_metadata");
 VAR_17 = FUNC_5(VAR_4, VAR_9, VAR_8);
 if (VAR_17)
  FUNC_12(VAR_9->i_sb, VAR_17);
 return 0;
}
