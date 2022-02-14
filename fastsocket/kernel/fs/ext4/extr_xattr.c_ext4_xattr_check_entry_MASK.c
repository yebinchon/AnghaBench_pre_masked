
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_entry {scalar_t__ e_value_block; int e_value_offs; int e_value_size; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct ext4_xattr_entry *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_1->e_value_size);

 if (VAR_1->e_value_block != 0 || VAR_3 > VAR_2 ||
     FUNC_0(VAR_1->e_value_offs) + VAR_3 > VAR_2)
  return -VAR_0;
 return 0;
}
