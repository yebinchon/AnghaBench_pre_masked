
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_entry {int dummy; } ;


 int VAR_0 ;
 struct ext4_xattr_entry* FUNC_0 (struct ext4_xattr_entry*) ;
 int FUNC_1 (struct ext4_xattr_entry*) ;

__attribute__((used)) static int
FUNC_2(struct ext4_xattr_entry *VAR_1, void *VAR_2)
{
 while (!FUNC_1(VAR_1)) {
  struct ext4_xattr_entry *VAR_3 = FUNC_0(VAR_1);
  if ((void *)VAR_3 >= VAR_2)
   return -VAR_0;
  VAR_1 = VAR_3;
 }
 return 0;
}
