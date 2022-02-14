
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext3_fsblk_t ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int *,int ,struct inode*,struct buffer_head*,scalar_t__) ;
 int FUNC_2 (int *,struct inode*,int ,unsigned long) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (int *,struct inode*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct buffer_head* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,struct inode*) ;
 scalar_t__ FUNC_9 (int *,struct inode*) ;

__attribute__((used)) static void FUNC_10(handle_t *VAR_0, struct inode *VAR_1,
  struct buffer_head *VAR_2, ext3_fsblk_t VAR_3,
  unsigned long VAR_4, __le32 *VAR_5, __le32 *VAR_6)
{
 __le32 *VAR_7;
 if (FUNC_9(VAR_0, VAR_1)) {
  if (VAR_2) {
   FUNC_0(VAR_2, "call ext3_journal_dirty_metadata");
   FUNC_3(VAR_0, VAR_2);
  }
  FUNC_5(VAR_0, VAR_1);
  FUNC_8(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_0(VAR_2, "retaking write access");
   FUNC_4(VAR_0, VAR_2);
  }
 }
 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
  u32 VAR_8 = FUNC_6(*VAR_7);
  if (VAR_8) {
   struct buffer_head *VAR_9;

   *VAR_7 = 0;
   VAR_9 = FUNC_7(VAR_1->i_sb, VAR_8);
   FUNC_1(VAR_0, 0, VAR_1, VAR_9, VAR_8);
  }
 }

 FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
}
