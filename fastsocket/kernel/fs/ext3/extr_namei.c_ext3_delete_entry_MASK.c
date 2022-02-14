
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_version; } ;
struct ext3_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,struct inode*,struct ext3_dir_entry_2*,struct buffer_head*,int) ;
 int FUNC_2 (int *,struct buffer_head*) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 struct ext3_dir_entry_2* FUNC_4 (struct ext3_dir_entry_2*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7 (handle_t *VAR_2,
         struct inode * VAR_3,
         struct ext3_dir_entry_2 * VAR_4,
         struct buffer_head * VAR_5)
{
 struct ext3_dir_entry_2 * VAR_6, * VAR_7;
 int VAR_8;

 VAR_8 = 0;
 VAR_7 = ((void*)0);
 VAR_6 = (struct ext3_dir_entry_2 *) VAR_5->b_data;
 while (VAR_8 < VAR_5->b_size) {
  if (!FUNC_1("ext3_delete_entry", VAR_3, VAR_6, VAR_5, VAR_8))
   return -VAR_0;
  if (VAR_6 == VAR_4) {
   FUNC_0(VAR_5, "get_write_access");
   FUNC_3(VAR_2, VAR_5);
   if (VAR_7)
    VAR_7->rec_len = FUNC_6(
     FUNC_5(VAR_7->rec_len) +
     FUNC_5(VAR_6->rec_len));
   else
    VAR_6->inode = 0;
   VAR_3->i_version++;
   FUNC_0(VAR_5, "call ext3_journal_dirty_metadata");
   FUNC_2(VAR_2, VAR_5);
   return 0;
  }
  VAR_8 += FUNC_5(VAR_6->rec_len);
  VAR_7 = VAR_6;
  VAR_6 = FUNC_4(VAR_6);
 }
 return -VAR_1;
}
