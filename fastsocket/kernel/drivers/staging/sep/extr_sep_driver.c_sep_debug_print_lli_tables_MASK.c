
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {int block_size; scalar_t__ physical_address; } ;
struct sep_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long,...) ;
 scalar_t__ FUNC_2 (struct sep_device*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sep_device *VAR_0, struct sep_lli_entry_t *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 FUNC_0("SEP Driver:--------> sep_debug_print_lli_tables start\n");

 VAR_4 = 1;
 while ((unsigned long) VAR_1 != 0xffffffff) {
  FUNC_1("SEP Driver: lli table %08lx, table_data_size is %lu\n", VAR_4, VAR_3);
  FUNC_1("SEP Driver: num_table_entries is %lu\n", VAR_2);


  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1++) {
   FUNC_1("SEP Driver:lli_table_ptr address is %08lx\n", (unsigned long) VAR_1);
   FUNC_1("SEP Driver:phys address is %08lx block size is %lu\n", VAR_1->physical_address, VAR_1->block_size);
  }


  VAR_1--;

  FUNC_1("SEP Driver:phys lli_table_ptr->block_size is %lu\n", VAR_1->block_size);
  FUNC_1("SEP Driver:phys lli_table_ptr->physical_address is %08lx\n", VAR_1->physical_address);


  VAR_3 = VAR_1->block_size & 0xffffff;
  VAR_2 = (VAR_1->block_size >> 24) & 0xff;
  VAR_1 = (struct sep_lli_entry_t *)
      (VAR_1->physical_address);

  FUNC_1("SEP Driver:phys table_data_size is %lu num_table_entries is %lu lli_table_ptr is%lu\n", VAR_3, VAR_2, (unsigned long) VAR_1);

  if ((unsigned long) VAR_1 != 0xffffffff)
   VAR_1 = (struct sep_lli_entry_t *) FUNC_2(VAR_0, (unsigned long) VAR_1);

  VAR_4++;
 }
 FUNC_0("SEP Driver:<-------- sep_debug_print_lli_tables end\n");
}
