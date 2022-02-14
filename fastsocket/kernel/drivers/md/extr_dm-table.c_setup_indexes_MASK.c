
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int depth; unsigned int* counts; int ** index; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned long) ;
 int FUNC_2 (int,struct dm_table*) ;

__attribute__((used)) static int FUNC_3(struct dm_table *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = 0;
 sector_t *VAR_7;


 for (VAR_5 = VAR_4->depth - 2; VAR_5 >= 0; VAR_5--) {
  VAR_4->counts[VAR_5] = FUNC_0(VAR_4->counts[VAR_5 + 1], VAR_0);
  VAR_6 += VAR_4->counts[VAR_5];
 }

 VAR_7 = (sector_t *) FUNC_1(VAR_6, (unsigned long) VAR_3);
 if (!VAR_7)
  return -VAR_1;


 for (VAR_5 = VAR_4->depth - 2; VAR_5 >= 0; VAR_5--) {
  VAR_4->index[VAR_5] = VAR_7;
  VAR_7 += (VAR_2 * VAR_4->counts[VAR_5]);
  FUNC_2(VAR_5, VAR_4);
 }

 return 0;
}
