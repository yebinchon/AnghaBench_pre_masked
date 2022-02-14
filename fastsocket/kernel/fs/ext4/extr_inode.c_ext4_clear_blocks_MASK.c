
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int i_sb; int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int,struct inode*,struct buffer_head*,scalar_t__) ;
 int FUNC_5 (int *,struct inode*,int ,unsigned long,int) ;
 int FUNC_6 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (int *,struct inode*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 struct buffer_head* FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,struct inode*) ;

__attribute__((used)) static void FUNC_13(handle_t *VAR_1, struct inode *VAR_2,
         struct buffer_head *VAR_3,
         ext4_fsblk_t VAR_4,
         unsigned long VAR_5, __le32 *VAR_6,
         __le32 *VAR_7)
{
 __le32 *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (FUNC_1(VAR_2->i_mode) || FUNC_2(VAR_2->i_mode)) {
  VAR_10 |= VAR_0;
  VAR_9 = 1;
 }


 if (FUNC_12(VAR_1, VAR_2)) {
  if (VAR_3) {
   FUNC_0(VAR_3, "call ext4_handle_dirty_metadata");
   FUNC_6(VAR_1, VAR_2, VAR_3);
  }
  FUNC_8(VAR_1, VAR_2);
  FUNC_9(VAR_1, VAR_2,
         FUNC_3(VAR_2));
  if (VAR_3) {
   FUNC_0(VAR_3, "retaking write access");
   FUNC_7(VAR_1, VAR_3);
  }
 }
 for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
  u32 VAR_11 = FUNC_10(*VAR_8);
  if (VAR_11) {
   struct buffer_head *VAR_12;

   *VAR_8 = 0;
   VAR_12 = FUNC_11(VAR_2->i_sb, VAR_11);
   FUNC_4(VAR_1, VAR_9, VAR_2, VAR_12, VAR_11);
  }
 }

 FUNC_5(VAR_1, VAR_2, VAR_4, VAR_5, VAR_10);
}
