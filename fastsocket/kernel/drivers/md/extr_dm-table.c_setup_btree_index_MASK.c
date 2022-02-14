
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {unsigned int* counts; } ;
typedef int sector_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int * FUNC_1 (struct dm_table*,unsigned int,unsigned int) ;
 int FUNC_2 (struct dm_table*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, struct dm_table *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 sector_t *VAR_5;

 for (VAR_3 = 0U; VAR_3 < VAR_2->counts[VAR_1]; VAR_3++) {
  VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_3);

  for (VAR_4 = 0U; VAR_4 < VAR_0; VAR_4++)
   VAR_5[VAR_4] = FUNC_2(VAR_2, VAR_1 + 1, FUNC_0(VAR_3, VAR_4));
 }

 return 0;
}
