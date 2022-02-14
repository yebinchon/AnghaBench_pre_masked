
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_entry {int e_value_offs; scalar_t__ e_value_size; int e_value_block; int e_name_len; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ) ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_entry*) ;
 int FUNC_2 (struct ext4_xattr_entry*) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(struct ext4_xattr_entry *VAR_0,
        size_t *VAR_1, void *VAR_2, int *VAR_3)
{
 for (; !FUNC_2(VAR_0); VAR_0 = FUNC_1(VAR_0)) {
  *VAR_3 += FUNC_0(VAR_0->e_name_len);
  if (!VAR_0->e_value_block && VAR_0->e_value_size) {
   size_t VAR_4 = FUNC_3(VAR_0->e_value_offs);
   if (VAR_4 < *VAR_1)
    *VAR_1 = VAR_4;
  }
 }
 return (*VAR_1 - ((void *)VAR_0 - VAR_2) - sizeof(__u32));
}
