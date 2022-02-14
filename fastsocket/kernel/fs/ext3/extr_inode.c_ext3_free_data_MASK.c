
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int handle_t ;
typedef scalar_t__ ext3_fsblk_t ;
typedef int __le32 ;


 int FUNC_0 (struct buffer_head*,char*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *,struct inode*,struct buffer_head*,scalar_t__,unsigned long,int *,int *) ;
 int FUNC_3 (int ,char*,char*,int ,unsigned long long) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(handle_t *VAR_0, struct inode *VAR_1,
      struct buffer_head *VAR_2,
      __le32 *VAR_3, __le32 *VAR_4)
{
 ext3_fsblk_t VAR_5 = 0;
 unsigned long VAR_6 = 0;
 __le32 *VAR_7 = ((void*)0);


 ext3_fsblk_t VAR_8;
 __le32 *VAR_9;

 int VAR_10;

 if (VAR_2) {
  FUNC_0(VAR_2, "get_write_access");
  VAR_10 = FUNC_5(VAR_0, VAR_2);


  if (VAR_10)
   return;
 }

 for (VAR_9 = VAR_3; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = FUNC_6(*VAR_9);
  if (VAR_8) {

   if (VAR_6 == 0) {
    VAR_5 = VAR_8;
    VAR_7 = VAR_9;
    VAR_6 = 1;
   } else if (VAR_8 == VAR_5 + VAR_6) {
    VAR_6++;
   } else {
    FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_5,
        VAR_6, VAR_7, VAR_9);
    VAR_5 = VAR_8;
    VAR_7 = VAR_9;
    VAR_6 = 1;
   }
  }
 }

 if (VAR_6 > 0)
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5,
      VAR_6, VAR_7, VAR_9);

 if (VAR_2) {
  FUNC_0(VAR_2, "call ext3_journal_dirty_metadata");







  if (FUNC_1(VAR_2))
   FUNC_4(VAR_0, VAR_2);
  else
   FUNC_3(VAR_1->i_sb, "ext3_free_data",
       "circular indirect block detected, "
       "inode=%lu, block=%llu",
       VAR_1->i_ino,
       (unsigned long long)VAR_2->b_blocknr);
 }
}
