
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_dir_entry_2 {int rec_len; scalar_t__ name_len; scalar_t__ inode; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 struct ext4_dir_entry_2* FUNC_1 (struct ext4_dir_entry_2*,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct ext4_dir_entry_2*,struct ext4_dir_entry_2*,unsigned int) ;

__attribute__((used)) static struct ext4_dir_entry_2* FUNC_4(char *VAR_0, unsigned VAR_1)
{
 struct ext4_dir_entry_2 *VAR_2, *VAR_3, *VAR_4, *VAR_5 = (struct ext4_dir_entry_2 *) VAR_0;
 unsigned VAR_6 = 0;

 VAR_4 = VAR_3 = VAR_5;
 while ((char*)VAR_5 < VAR_0 + VAR_1) {
  VAR_2 = FUNC_1(VAR_5, VAR_1);
  if (VAR_5->inode && VAR_5->name_len) {
   VAR_6 = FUNC_0(VAR_5->name_len);
   if (VAR_5 > VAR_3)
    FUNC_3(VAR_3, VAR_5, VAR_6);
   VAR_3->rec_len = FUNC_2(VAR_6, VAR_1);
   VAR_4 = VAR_3;
   VAR_3 = (struct ext4_dir_entry_2 *) (((char *) VAR_3) + VAR_6);
  }
  VAR_5 = VAR_2;
 }
 return VAR_4;
}
