
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int s_blocksize; TYPE_4__* s_bdev; } ;
struct inode {int i_size; int i_blkbits; int i_blocks; scalar_t__ i_version; int i_ino; struct super_block* i_sb; } ;
struct TYPE_11__ {int prev_pos; } ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct file {int f_pos; scalar_t__ f_version; TYPE_5__ f_ra; TYPE_2__ f_path; } ;
struct ext4_dir_entry_2 {int rec_len; int file_type; int inode; int name_len; int name; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; scalar_t__ b_state; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int (* filldir_t ) (void*,int ,int ,int,scalar_t__,int ) ;
typedef int ext4_lblk_t ;
struct TYPE_10__ {TYPE_3__* bd_inode; } ;
struct TYPE_9__ {int i_mapping; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (int *,struct inode*,int,int ,int*) ;
 int FUNC_4 (char*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,unsigned int) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct file*,void*,int (*) (void*,int ,int ,int,scalar_t__,int )) ;
 int FUNC_7 (struct super_block*,char*,int ,unsigned long long) ;
 int FUNC_8 (int *,struct inode*,int,int,struct buffer_head*,int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (struct super_block*,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,TYPE_5__*,struct file*,int,int) ;
 int FUNC_14 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_3,
    void *VAR_4, filldir_t VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8, VAR_9;
 struct ext4_dir_entry_2 *VAR_10;
 int VAR_11;
 struct inode *VAR_12 = VAR_3->f_path.dentry->d_inode;
 struct super_block *VAR_13 = VAR_12->i_sb;
 int VAR_14 = 0;
 int VAR_15 = 0;

 if (FUNC_11(VAR_12)) {
  VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_5);
  if (VAR_11 != VAR_0) {
   VAR_14 = VAR_11;
   goto out;
  }




  FUNC_5(VAR_3->f_path.dentry->d_inode,
          VAR_1);
 }
 VAR_9 = 0;
 VAR_7 = VAR_3->f_pos & (VAR_13->s_blocksize - 1);

 while (!VAR_6 && !VAR_9 && VAR_3->f_pos < VAR_12->i_size) {
  ext4_lblk_t VAR_16 = VAR_3->f_pos >> FUNC_0(VAR_13);
  struct buffer_head VAR_17;
  struct buffer_head *VAR_18 = ((void*)0);

  VAR_17.b_state = 0;
  VAR_11 = FUNC_8(((void*)0), VAR_12, VAR_16, 1, &VAR_17, 0);
  if (VAR_11 > 0) {
   pgoff_t VAR_19 = VAR_17.b_blocknr >>
     (VAR_2 - VAR_12->i_blkbits);
   if (!FUNC_14(&VAR_3->f_ra, VAR_19))
    FUNC_13(
     VAR_13->s_bdev->bd_inode->i_mapping,
     &VAR_3->f_ra, VAR_3,
     VAR_19, 1);
   VAR_3->f_ra.prev_pos = (loff_t)VAR_19 << VAR_2;
   VAR_18 = FUNC_3(((void*)0), VAR_12, VAR_16, 0, &VAR_11);
  }





  if (!VAR_18) {
   if (!VAR_15) {
    FUNC_7(VAR_13, "directory #%lu "
        "contains a hole at offset %Lu",
        VAR_12->i_ino,
        (unsigned long long) VAR_3->f_pos);
    VAR_15 = 1;
   }

   if (VAR_3->f_pos > VAR_12->i_blocks << 9)
    break;
   VAR_3->f_pos += VAR_13->s_blocksize - VAR_7;
   continue;
  }

revalidate:




  if (VAR_3->f_version != VAR_12->i_version) {
   for (VAR_8 = 0; VAR_8 < VAR_13->s_blocksize && VAR_8 < VAR_7; ) {
    VAR_10 = (struct ext4_dir_entry_2 *)
     (VAR_18->b_data + VAR_8);






    if (FUNC_9(VAR_10->rec_len,
     VAR_13->s_blocksize) < FUNC_1(1))
     break;
    VAR_8 += FUNC_9(VAR_10->rec_len,
           VAR_13->s_blocksize);
   }
   VAR_7 = VAR_8;
   VAR_3->f_pos = (VAR_3->f_pos & ~(VAR_13->s_blocksize - 1))
    | VAR_7;
   VAR_3->f_version = VAR_12->i_version;
  }

  while (!VAR_6 && VAR_3->f_pos < VAR_12->i_size
         && VAR_7 < VAR_13->s_blocksize) {
   VAR_10 = (struct ext4_dir_entry_2 *) (VAR_18->b_data + VAR_7);
   if (!FUNC_4("ext4_readdir", VAR_12, VAR_10,
        VAR_18, VAR_7)) {



    VAR_3->f_pos = (VAR_3->f_pos |
      (VAR_13->s_blocksize - 1)) + 1;
    FUNC_2(VAR_18);
    VAR_14 = VAR_9;
    goto out;
   }
   VAR_7 += FUNC_9(VAR_10->rec_len,
     VAR_13->s_blocksize);
   if (FUNC_12(VAR_10->inode)) {







    u64 VAR_20 = VAR_3->f_version;

    VAR_6 = VAR_5(VAR_4, VAR_10->name,
      VAR_10->name_len,
      VAR_3->f_pos,
      FUNC_12(VAR_10->inode),
      FUNC_10(VAR_13, VAR_10->file_type));
    if (VAR_6)
     break;
    if (VAR_20 != VAR_3->f_version)
     goto revalidate;
    VAR_9++;
   }
   VAR_3->f_pos += FUNC_9(VAR_10->rec_len,
      VAR_13->s_blocksize);
  }
  VAR_7 = 0;
  FUNC_2(VAR_18);
 }
out:
 return VAR_14;
}
