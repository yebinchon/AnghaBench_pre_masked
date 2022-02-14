
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct file {int f_pos; } ;
struct ext3_dir_entry_2 {scalar_t__ inode; int name_len; int name; } ;
struct dx_hash_info {scalar_t__ hash; scalar_t__ minor_hash; } ;
struct buffer_head {char* b_data; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int,int ,int*) ;
 int FUNC_5 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,int) ;
 int FUNC_6 (struct file*,scalar_t__,scalar_t__,struct ext3_dir_entry_2*) ;
 struct ext3_dir_entry_2* FUNC_7 (struct ext3_dir_entry_2*) ;
 int FUNC_8 (int ,int ,struct dx_hash_info*) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0,
      struct inode *VAR_1, int VAR_2,
      struct dx_hash_info *VAR_3,
      __u32 VAR_4, __u32 VAR_5)
{
 struct buffer_head *VAR_6;
 struct ext3_dir_entry_2 *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_3(FUNC_9("In htree dirblock_to_tree: block %d\n", VAR_2));
 if (!(VAR_6 = FUNC_4 (((void*)0), VAR_1, VAR_2, 0, &VAR_9)))
  return VAR_9;

 VAR_7 = (struct ext3_dir_entry_2 *) VAR_6->b_data;
 VAR_8 = (struct ext3_dir_entry_2 *) ((char *) VAR_7 +
        VAR_1->i_sb->s_blocksize -
        FUNC_1(0));
 for (; VAR_7 < VAR_8; VAR_7 = FUNC_7(VAR_7)) {
  if (!FUNC_5("htree_dirblock_to_tree", VAR_1, VAR_7, VAR_6,
     (VAR_2<<FUNC_0(VAR_1->i_sb))
      +((char *)VAR_7 - VAR_6->b_data))) {

   VAR_0->f_pos = (VAR_0->f_pos |
     (VAR_1->i_sb->s_blocksize - 1)) + 1;
   FUNC_2 (VAR_6);
   return VAR_10;
  }
  FUNC_8(VAR_7->name, VAR_7->name_len, VAR_3);
  if ((VAR_3->hash < VAR_4) ||
      ((VAR_3->hash == VAR_4) &&
       (VAR_3->minor_hash < VAR_5)))
   continue;
  if (VAR_7->inode == 0)
   continue;
  if ((VAR_9 = FUNC_6(VAR_0,
       VAR_3->hash, VAR_3->minor_hash, VAR_7)) != 0) {
   FUNC_2(VAR_6);
   return VAR_9;
  }
  VAR_10++;
 }
 FUNC_2(VAR_6);
 return VAR_10;
}
