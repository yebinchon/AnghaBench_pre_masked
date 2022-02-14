
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_header {int dummy; } ;
struct ext2_xattr_entry {scalar_t__ e_hash; scalar_t__ e_name_index; scalar_t__ e_name_len; scalar_t__ e_value_size; char* e_name; scalar_t__ e_value_block; int e_value_offs; } ;


 int VAR_0 ;
 struct ext2_xattr_entry* FUNC_0 (struct ext2_xattr_header*) ;
 struct ext2_xattr_entry* FUNC_1 (struct ext2_xattr_entry*) ;
 scalar_t__ FUNC_2 (struct ext2_xattr_entry*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ext2_xattr_header *VAR_1,
        struct ext2_xattr_header *VAR_2)
{
 struct ext2_xattr_entry *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_1+1);
 VAR_4 = FUNC_0(VAR_2+1);
 while (!FUNC_2(VAR_3)) {
  if (FUNC_2(VAR_4))
   return 1;
  if (VAR_3->e_hash != VAR_4->e_hash ||
      VAR_3->e_name_index != VAR_4->e_name_index ||
      VAR_3->e_name_len != VAR_4->e_name_len ||
      VAR_3->e_value_size != VAR_4->e_value_size ||
      FUNC_5(VAR_3->e_name, VAR_4->e_name, VAR_3->e_name_len))
   return 1;
  if (VAR_3->e_value_block != 0 || VAR_4->e_value_block != 0)
   return -VAR_0;
  if (FUNC_5((char *)VAR_1 + FUNC_3(VAR_3->e_value_offs),
      (char *)VAR_2 + FUNC_3(VAR_4->e_value_offs),
      FUNC_4(VAR_3->e_value_size)))
   return 1;

  VAR_3 = FUNC_1(VAR_3);
  VAR_4 = FUNC_1(VAR_4);
 }
 if (!FUNC_2(VAR_4))
  return 1;
 return 0;
}
