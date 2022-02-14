
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext3_fsblk_t ;
typedef void* __le32 ;
struct TYPE_5__ {int s_blocksize; } ;
struct TYPE_4__ {struct buffer_head* bh; void** p; void* key; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct inode*,int ,int,int,int *,int*) ;
 int FUNC_4 (int *,struct inode*,int ,int) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 struct buffer_head* FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_0, struct inode *VAR_1,
   int VAR_2, int *VAR_3, ext3_fsblk_t VAR_4,
   int *VAR_5, Indirect *VAR_6)
{
 int VAR_7 = VAR_1->i_sb->s_blocksize;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = 0;
 struct buffer_head *VAR_11;
 int VAR_12;
 ext3_fsblk_t VAR_13[4];
 ext3_fsblk_t VAR_14;

 VAR_12 = FUNC_3(VAR_0, VAR_1, VAR_4, VAR_2,
    *VAR_3, VAR_13, &VAR_10);
 if (VAR_10)
  return VAR_10;

 VAR_6[0].key = FUNC_2(VAR_13[0]);



 for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {





  VAR_11 = FUNC_10(VAR_1->i_sb, VAR_13[VAR_9-1]);
  VAR_6[VAR_9].bh = VAR_11;
  FUNC_8(VAR_11);
  FUNC_0(VAR_11, "call get_create_access");
  VAR_10 = FUNC_7(VAR_0, VAR_11);
  if (VAR_10) {
   FUNC_12(VAR_11);
   FUNC_1(VAR_11);
   goto failed;
  }

  FUNC_9(VAR_11->b_data, 0, VAR_7);
  VAR_6[VAR_9].p = (__le32 *) VAR_11->b_data + VAR_5[VAR_9];
  VAR_6[VAR_9].key = FUNC_2(VAR_13[VAR_9]);
  *VAR_6[VAR_9].p = VAR_6[VAR_9].key;
  if ( VAR_9 == VAR_2) {
   VAR_14 = VAR_13[VAR_9];





   for (VAR_8=1; VAR_8 < VAR_12; VAR_8++)
    *(VAR_6[VAR_9].p + VAR_8) = FUNC_2(++VAR_14);
  }
  FUNC_0(VAR_11, "marking uptodate");
  FUNC_11(VAR_11);
  FUNC_12(VAR_11);

  FUNC_0(VAR_11, "call ext3_journal_dirty_metadata");
  VAR_10 = FUNC_5(VAR_0, VAR_11);
  if (VAR_10)
   goto failed;
 }
 *VAR_3 = VAR_12;
 return VAR_10;
failed:

 for (VAR_8 = 1; VAR_8 <= VAR_9 ; VAR_8++) {
  FUNC_0(VAR_6[VAR_8].bh, "call journal_forget");
  FUNC_6(VAR_0, VAR_6[VAR_8].bh);
 }
 for (VAR_8 = 0; VAR_8 <VAR_2; VAR_8++)
  FUNC_4(VAR_0, VAR_1, VAR_13[VAR_8], 1);

 FUNC_4(VAR_0, VAR_1, VAR_13[VAR_8], VAR_12);

 return VAR_10;
}
