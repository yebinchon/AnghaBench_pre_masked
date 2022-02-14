
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext3_dir_entry_2 {scalar_t__ inode; int rec_len; int name_len; } ;
struct dx_map_entry {int offs; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,struct ext3_dir_entry_2*,unsigned int) ;

__attribute__((used)) static struct ext3_dir_entry_2 *
FUNC_3(char *VAR_0, char *VAR_1, struct dx_map_entry *VAR_2, int VAR_3)
{
 unsigned VAR_4 = 0;

 while (VAR_3--) {
  struct ext3_dir_entry_2 *VAR_5 = (struct ext3_dir_entry_2 *) (VAR_0 + VAR_2->offs);
  VAR_4 = FUNC_0(VAR_5->name_len);
  FUNC_2 (VAR_1, VAR_5, VAR_4);
  ((struct ext3_dir_entry_2 *) VAR_1)->rec_len =
    FUNC_1(VAR_4);
  VAR_5->inode = 0;
  VAR_2++;
  VAR_1 += VAR_4;
 }
 return (struct ext3_dir_entry_2 *) (VAR_1 - VAR_4);
}
