
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipath_lkey_table {int lock; int ** table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ipath_lkey_table *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 if (VAR_2 == 0)
  return;
 VAR_4 = VAR_2 >> (32 - VAR_0);
 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_1->table[VAR_4] = ((void*)0);
 FUNC_1(&VAR_1->lock, VAR_3);
}
