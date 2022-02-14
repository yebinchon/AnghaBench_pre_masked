
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {unsigned long physical_address; unsigned long block_size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct sep_lli_entry_t *VAR_0, struct sep_lli_entry_t *VAR_1, unsigned long *VAR_2, unsigned long *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 unsigned long VAR_6;

 FUNC_0("SEP Driver:--------> sep_build_lli_table start\n");


 VAR_5 = 0;
 VAR_6 = 0;
 *VAR_3 = 1;

 FUNC_1("SEP Driver:table_data_size is %lu\n", VAR_4);


 while (VAR_5 < VAR_4) {

  (*VAR_3)++;

  VAR_1->physical_address = VAR_0[VAR_6].physical_address;
  VAR_1->block_size = VAR_0[VAR_6].block_size;
  VAR_5 += VAR_1->block_size;

  FUNC_1("SEP Driver:lli_table_ptr is %08lx\n", (unsigned long) VAR_1);
  FUNC_1("SEP Driver:lli_table_ptr->physical_address is %08lx\n", VAR_1->physical_address);
  FUNC_1("SEP Driver:lli_table_ptr->block_size is %lu\n", VAR_1->block_size);


  if (VAR_5 > VAR_4) {
   FUNC_1("SEP Driver:curr_table_data_size > table_data_size\n");


   VAR_1->block_size -= (VAR_5 - VAR_4);


   VAR_0[VAR_6].physical_address += VAR_1->block_size;


   VAR_0[VAR_6].block_size = (VAR_5 - VAR_4);
  } else

   VAR_6++;

  FUNC_1("SEP Driver:lli_table_ptr->physical_address is %08lx\n", VAR_1->physical_address);
  FUNC_1("SEP Driver:lli_table_ptr->block_size is %lu\n", VAR_1->block_size);


  VAR_1++;
 }


 VAR_1->physical_address = 0xffffffff;
 VAR_1->block_size = 0;

 FUNC_1("SEP Driver:lli_table_ptr is %08lx\n", (unsigned long) VAR_1);
 FUNC_1("SEP Driver:lli_table_ptr->physical_address is %08lx\n", VAR_1->physical_address);
 FUNC_1("SEP Driver:lli_table_ptr->block_size is %lu\n", VAR_1->block_size);


 *VAR_2 += VAR_6;

 FUNC_1("SEP Driver:*num_processed_entries_ptr is %lu\n", *VAR_2);
 FUNC_0("SEP Driver:<-------- sep_build_lli_table end\n");
 return;
}
