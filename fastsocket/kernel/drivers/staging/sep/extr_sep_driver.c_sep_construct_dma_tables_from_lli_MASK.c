
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {unsigned long block_size; void* physical_address; } ;
struct sep_device {void* shared_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct sep_lli_entry_t*,struct sep_lli_entry_t*,unsigned long*,unsigned long*,unsigned long) ;
 unsigned long FUNC_3 (struct sep_lli_entry_t*,unsigned long) ;
 int FUNC_4 (struct sep_device*,struct sep_lli_entry_t*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (struct sep_device*,unsigned long) ;
 void* FUNC_6 (struct sep_device*,struct sep_lli_entry_t*) ;

__attribute__((used)) static int FUNC_7(struct sep_device *VAR_2,
          struct sep_lli_entry_t *VAR_3,
          unsigned long VAR_4,
          struct sep_lli_entry_t *VAR_5,
          unsigned long VAR_6,
          unsigned long VAR_7, unsigned long *VAR_8, unsigned long *VAR_9, unsigned long *VAR_10, unsigned long *VAR_11, unsigned long *VAR_12)
{


 void *VAR_13;

 struct sep_lli_entry_t *VAR_14;

 struct sep_lli_entry_t *VAR_15;

 struct sep_lli_entry_t *VAR_16;

 struct sep_lli_entry_t *VAR_17;

 unsigned long VAR_18;

 unsigned long VAR_19;

 unsigned long VAR_20;

 unsigned long VAR_21;

 unsigned long VAR_22;

 unsigned long VAR_23;

 unsigned long VAR_24;

 unsigned long VAR_25;

 FUNC_0("SEP Driver:--------> sep_construct_dma_tables_from_lli start\n");


 VAR_13 = VAR_2->shared_addr + VAR_1;

 VAR_18 = 0;
 VAR_19 = 0;
 VAR_22 = 1;
 VAR_16 = 0;
 VAR_17 = 0;


 while (VAR_18 < VAR_4) {

  VAR_14 = (struct sep_lli_entry_t *) VAR_13;

  VAR_13 += sizeof(struct sep_lli_entry_t) * VAR_0;


  VAR_15 = (struct sep_lli_entry_t *) VAR_13;

  VAR_13 += sizeof(struct sep_lli_entry_t) * VAR_0;


  VAR_20 = FUNC_3(&VAR_3[VAR_18], (VAR_4 - VAR_18));


  VAR_21 = FUNC_3(&VAR_5[VAR_19], (VAR_6 - VAR_19));

  FUNC_1("SEP Driver:in_table_data_size is %lu\n", VAR_20);
  FUNC_1("SEP Driver:out_table_data_size is %lu\n", VAR_21);


  VAR_23 = VAR_20;
  if (VAR_23 > VAR_21)
   VAR_23 = VAR_21;


  VAR_23 = (VAR_23 / VAR_7) * VAR_7;

  FUNC_0("SEP Driver:table_data_size is %lu\n", VAR_23);


  FUNC_2(&VAR_3[VAR_18], VAR_14, &VAR_18, &VAR_24, VAR_23);


  FUNC_2(&VAR_5[VAR_19], VAR_15, &VAR_19, &VAR_25, VAR_23);


  if (VAR_16 == 0) {

   *VAR_8 = FUNC_6(VAR_2, VAR_14);
   *VAR_10 = VAR_24;
   *VAR_9 = FUNC_6(VAR_2, VAR_15);
   *VAR_11 = VAR_25;
   *VAR_12 = VAR_23;

   FUNC_1("SEP Driver:output lli_table_in_ptr is %08lx\n", *VAR_8);
   FUNC_1("SEP Driver:output lli_table_out_ptr is %08lx\n", *VAR_9);
  } else {

   VAR_16->physical_address = FUNC_6(VAR_2, VAR_14);
   VAR_16->block_size = ((VAR_24) << 24) | (VAR_23);


   VAR_17->physical_address = FUNC_6(VAR_2, VAR_15);
   VAR_17->block_size = ((VAR_25) << 24) | (VAR_23);
  }


  VAR_16 = VAR_14 + VAR_24 - 1;
  VAR_17 = VAR_15 + VAR_25 - 1;

  FUNC_1("SEP Driver:output num_entries_out_table is %lu\n", (unsigned long) VAR_25);
  FUNC_1("SEP Driver:output info_in_entry_ptr is %lu\n", (unsigned long) VAR_16);
  FUNC_1("SEP Driver:output info_out_entry_ptr is %lu\n", (unsigned long) VAR_17);
 }


 FUNC_4(VAR_2, (struct sep_lli_entry_t *)
       FUNC_5(VAR_2, *VAR_8), *VAR_10, *VAR_12);

 FUNC_4(VAR_2, (struct sep_lli_entry_t *)
       FUNC_5(VAR_2, *VAR_9), *VAR_11, *VAR_12);
 FUNC_0("SEP Driver:<-------- sep_construct_dma_tables_from_lli end\n");
 return 0;
}
