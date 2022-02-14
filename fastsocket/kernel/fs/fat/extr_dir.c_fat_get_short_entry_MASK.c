
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_dir_entry {int attr; int name; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*,int *,struct buffer_head**,struct msdos_dir_entry**) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, loff_t *VAR_3,
          struct buffer_head **VAR_4,
          struct msdos_dir_entry **VAR_5)
{
 while (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5) >= 0) {

  if (!FUNC_0((*VAR_5)->name) && !((*VAR_5)->attr & VAR_0))
   return 0;
 }
 return -VAR_1;
}
