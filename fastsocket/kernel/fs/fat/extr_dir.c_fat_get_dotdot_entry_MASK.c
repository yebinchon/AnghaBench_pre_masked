
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {int name; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*,scalar_t__*,struct buffer_head**,struct msdos_dir_entry**) ;
 scalar_t__ FUNC_1 (int ,struct buffer_head*,struct msdos_dir_entry*) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct inode *VAR_3, struct buffer_head **VAR_4,
    struct msdos_dir_entry **VAR_5, loff_t *VAR_6)
{
 loff_t VAR_7;

 VAR_7 = 0;
 *VAR_4 = ((void*)0);
 while (FUNC_0(VAR_3, &VAR_7, VAR_4, VAR_5) >= 0) {
  if (!FUNC_2((*VAR_5)->name, VAR_1, VAR_2)) {
   *VAR_6 = FUNC_1(VAR_3->i_sb, *VAR_4, *VAR_5);
   return 0;
  }
 }
 return -VAR_0;
}
