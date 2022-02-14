
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exofs_dir_entry {scalar_t__ rec_len; } ;


 struct exofs_dir_entry* FUNC_0 (struct exofs_dir_entry*) ;

__attribute__((used)) static inline unsigned
FUNC_1(char *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 struct exofs_dir_entry *VAR_3 = (struct exofs_dir_entry *)(VAR_0 + VAR_1);
 struct exofs_dir_entry *VAR_4 =
   (struct exofs_dir_entry *)(VAR_0 + (VAR_1&VAR_2));
 while ((char *)VAR_4 < (char *)VAR_3) {
  if (VAR_4->rec_len == 0)
   break;
  VAR_4 = FUNC_0(VAR_4);
 }
 return (char *)VAR_4 - VAR_0;
}
