
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int *,int,struct inode*,struct buffer_head*,int ) ;
 int FUNC_5 (int *,struct inode*,int ,int,int ) ;
 int FUNC_6 (int *,struct inode*,struct buffer_head*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 int FUNC_10 (int *,struct inode*) ;
 int FUNC_11 (int *,struct inode*,int ) ;
 int FUNC_12 (scalar_t__) ;
 struct buffer_head* FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int *,struct inode*) ;

__attribute__((used)) static void FUNC_15(handle_t *VAR_1, struct inode *VAR_2,
          struct buffer_head *VAR_3,
          __le32 *VAR_4, __le32 *VAR_5, int VAR_6)
{
 ext4_fsblk_t VAR_7;
 __le32 *VAR_8;

 if (FUNC_8(VAR_1))
  return;

 if (VAR_6--) {
  struct buffer_head *VAR_9;
  int VAR_10 = FUNC_1(VAR_2->i_sb);
  VAR_8 = VAR_5;
  while (--VAR_8 >= VAR_4) {
   VAR_7 = FUNC_12(*VAR_8);
   if (!VAR_7)
    continue;


   VAR_9 = FUNC_13(VAR_2->i_sb, VAR_7);





   if (!VAR_9) {
    FUNC_3(VAR_2->i_sb,
        "Read failure, inode=%lu, block=%llu",
        VAR_2->i_ino, VAR_7);
    continue;
   }


   FUNC_0(VAR_9, "free child branches");
   FUNC_15(VAR_1, VAR_2, VAR_9,
     (__le32 *) VAR_9->b_data,
     (__le32 *) VAR_9->b_data + VAR_10,
     VAR_6);
   FUNC_4(VAR_1, 1, VAR_2, VAR_9, VAR_9->b_blocknr);
   if (FUNC_8(VAR_1))
    return;
   if (FUNC_14(VAR_1, VAR_2)) {
    FUNC_10(VAR_1, VAR_2);
    FUNC_11(VAR_1, VAR_2,
         FUNC_2(VAR_2));
   }

   FUNC_5(VAR_1, VAR_2, VAR_7, 1,
      VAR_0);

   if (VAR_3) {




    FUNC_0(VAR_3, "get_write_access");
    if (!FUNC_9(VAR_1,
           VAR_3)){
     *VAR_8 = 0;
     FUNC_0(VAR_3,
     "call ext4_handle_dirty_metadata");
     FUNC_7(VAR_1,
           VAR_2,
           VAR_3);
    }
   }
  }
 } else {

  FUNC_0(VAR_3, "free data blocks");
  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
