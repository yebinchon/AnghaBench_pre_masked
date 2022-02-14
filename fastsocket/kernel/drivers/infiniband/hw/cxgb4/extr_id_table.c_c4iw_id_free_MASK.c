
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct c4iw_id_table {int lock; int table; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct c4iw_id_table *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;

 VAR_1 -= VAR_0->start;
 FUNC_0((int)VAR_1 < 0);

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(VAR_1, VAR_0->table);
 FUNC_3(&VAR_0->lock, VAR_2);
}
