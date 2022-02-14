
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;
typedef void* __le32 ;
struct TYPE_5__ {int s_blocksize; } ;
struct TYPE_4__ {struct buffer_head* bh; void** p; void* key; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (struct buffer_head*,char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct inode*,int,int ,int,int,int *,int*) ;
 int FUNC_3 (int *,struct inode*,int ,int,int ) ;
 int FUNC_4 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 struct buffer_head* FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_0, struct inode *VAR_1,
        ext4_lblk_t VAR_2, int VAR_3,
        int *VAR_4, ext4_fsblk_t VAR_5,
        ext4_lblk_t *VAR_6, Indirect *VAR_7)
{
 int VAR_8 = VAR_1->i_sb->s_blocksize;
 int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;
 struct buffer_head *VAR_12;
 int VAR_13;
 ext4_fsblk_t VAR_14[4];
 ext4_fsblk_t VAR_15;

 VAR_13 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3,
    *VAR_4, VAR_14, &VAR_11);
 if (VAR_11)
  return VAR_11;

 VAR_7[0].key = FUNC_1(VAR_14[0]);



 for (VAR_10 = 1; VAR_10 <= VAR_3; VAR_10++) {





  VAR_12 = FUNC_9(VAR_1->i_sb, VAR_14[VAR_10-1]);
  VAR_7[VAR_10].bh = VAR_12;
  FUNC_7(VAR_12);
  FUNC_0(VAR_12, "call get_create_access");
  VAR_11 = FUNC_6(VAR_0, VAR_12);
  if (VAR_11) {


   FUNC_11(VAR_12);
   goto failed;
  }

  FUNC_8(VAR_12->b_data, 0, VAR_8);
  VAR_7[VAR_10].p = (__le32 *) VAR_12->b_data + VAR_6[VAR_10];
  VAR_7[VAR_10].key = FUNC_1(VAR_14[VAR_10]);
  *VAR_7[VAR_10].p = VAR_7[VAR_10].key;
  if (VAR_10 == VAR_3) {
   VAR_15 = VAR_14[VAR_10];





   for (VAR_9 = 1; VAR_9 < VAR_13; VAR_9++)
    *(VAR_7[VAR_10].p + VAR_9) = FUNC_1(++VAR_15);
  }
  FUNC_0(VAR_12, "marking uptodate");
  FUNC_10(VAR_12);
  FUNC_11(VAR_12);

  FUNC_0(VAR_12, "call ext4_handle_dirty_metadata");
  VAR_11 = FUNC_4(VAR_0, VAR_1, VAR_12);
  if (VAR_11)
   goto failed;
 }
 *VAR_4 = VAR_13;
 return VAR_11;
failed:

 for (VAR_9 = 1; VAR_9 <= VAR_10 ; VAR_9++) {
  FUNC_0(VAR_7[VAR_9].bh, "call jbd2_journal_forget");
  FUNC_5(VAR_0, VAR_7[VAR_9].bh);
 }
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_3(VAR_0, VAR_1, VAR_14[VAR_9], 1, 0);

 FUNC_3(VAR_0, VAR_1, VAR_14[VAR_9], VAR_13, 0);

 return VAR_11;
}
