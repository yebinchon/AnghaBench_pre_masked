
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct list_head {int dummy; } ;
struct dm_exception_table {unsigned int hash_shift; int hash_mask; scalar_t__ table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct dm_exception_table *VAR_1,
       uint32_t VAR_2, unsigned VAR_3)
{
 unsigned int VAR_4;

 VAR_1->hash_shift = VAR_3;
 VAR_1->hash_mask = VAR_2 - 1;
 VAR_1->table = FUNC_1(VAR_2, sizeof(struct list_head));
 if (!VAR_1->table)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_1->table + VAR_4);

 return 0;
}
