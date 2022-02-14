
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int depth; unsigned int* counts; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,scalar_t__) ;
 int * FUNC_1 (struct dm_table*,unsigned int,unsigned int) ;

__attribute__((used)) static sector_t FUNC_2(struct dm_table *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 for (; VAR_3 < VAR_2->depth - 1; VAR_3++)
  VAR_4 = FUNC_0(VAR_4, VAR_0 - 1);

 if (VAR_4 >= VAR_2->counts[VAR_3])
  return (sector_t) - 1;

 return FUNC_1(VAR_2, VAR_3, VAR_4)[VAR_1 - 1];
}
