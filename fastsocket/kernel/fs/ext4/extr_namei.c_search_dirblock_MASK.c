
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {char* name; int len; } ;
struct inode {TYPE_1__* i_sb; } ;
struct ext4_dir_entry_2 {int rec_len; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (char*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,unsigned int) ;
 scalar_t__ FUNC_1 (int,char const*,struct ext4_dir_entry_2*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct buffer_head *VAR_0,
      struct inode *VAR_1,
      const struct qstr *VAR_2,
      unsigned int VAR_3,
      struct ext4_dir_entry_2 ** VAR_4)
{
 struct ext4_dir_entry_2 * VAR_5;
 char * VAR_6;
 int VAR_7;
 const char *VAR_8 = VAR_2->name;
 int VAR_9 = VAR_2->len;

 VAR_5 = (struct ext4_dir_entry_2 *) VAR_0->b_data;
 VAR_6 = VAR_0->b_data + VAR_1->i_sb->s_blocksize;
 while ((char *) VAR_5 < VAR_6) {



  if ((char *) VAR_5 + VAR_9 <= VAR_6 &&
      FUNC_1 (VAR_9, VAR_8, VAR_5)) {

   if (!FUNC_0("ext4_find_entry",
        VAR_1, VAR_5, VAR_0, VAR_3))
    return -1;
   *VAR_4 = VAR_5;
   return 1;
  }

  VAR_7 = FUNC_2(VAR_5->rec_len,
      VAR_1->i_sb->s_blocksize);
  if (VAR_7 <= 0)
   return -1;
  VAR_3 += VAR_7;
  VAR_5 = (struct ext4_dir_entry_2 *) ((char *) VAR_5 + VAR_7);
 }
 return 0;
}
