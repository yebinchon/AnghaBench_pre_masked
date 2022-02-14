
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {unsigned long physical_address; unsigned long block_size; } ;
struct sep_device {unsigned long in_num_pages; long shared_bus; void* shared_addr; int in_page_array; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct sep_lli_entry_t*) ;
 int FUNC_3 (struct sep_lli_entry_t*,struct sep_lli_entry_t*,unsigned long*,unsigned long*,unsigned long) ;
 unsigned long FUNC_4 (struct sep_lli_entry_t*,unsigned long) ;
 int FUNC_5 (struct sep_device*,struct sep_lli_entry_t*,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (struct sep_device*,unsigned long,unsigned long,unsigned long*,struct sep_lli_entry_t**,int *) ;
 unsigned long FUNC_7 (struct sep_device*,unsigned long,unsigned long,unsigned long*,struct sep_lli_entry_t**,int *) ;
 scalar_t__ FUNC_8 (struct sep_device*,unsigned long) ;
 void* FUNC_9 (struct sep_device*,struct sep_lli_entry_t*) ;

__attribute__((used)) static int FUNC_10(struct sep_device *VAR_2,
    unsigned long VAR_3,
    unsigned long VAR_4,
    unsigned long VAR_5,
    unsigned long *VAR_6,
    unsigned long *VAR_7,
    unsigned long *VAR_8,
    bool VAR_9)
{

 struct sep_lli_entry_t *VAR_10;

 struct sep_lli_entry_t *VAR_11;

 unsigned long VAR_12;

 unsigned long VAR_13;

 struct sep_lli_entry_t *VAR_14;

 unsigned long VAR_15;

 unsigned long VAR_16;

 void *VAR_17;
 unsigned long VAR_18;

 FUNC_0("SEP Driver:--------> sep_prepare_input_dma_table start\n");

 FUNC_1("SEP Driver:data_size is %lu\n", VAR_4);
 FUNC_1("SEP Driver:block_size is %lu\n", VAR_5);


 VAR_2->in_page_array = 0;
 VAR_2->in_num_pages = 0;

 if (VAR_4 == 0) {

  VAR_14 = (struct sep_lli_entry_t *) (VAR_2->shared_addr + VAR_1);

  VAR_14->physical_address = (unsigned long)VAR_2->shared_addr + VAR_1;
  VAR_14->block_size = 0;

  VAR_14++;
  VAR_14->physical_address = 0xFFFFFFFF;
  VAR_14->block_size = 0;

  *VAR_6 = VAR_2->shared_bus + VAR_1;
  *VAR_7 = 2;
  *VAR_8 = 0;

  goto end_function;
 }


 if (VAR_9 == 1)

  VAR_18 = FUNC_6(VAR_2, VAR_3, VAR_4, &VAR_2->in_num_pages, &VAR_11, &VAR_2->in_page_array);
 else

  VAR_18 = FUNC_7(VAR_2, VAR_3, VAR_4, &VAR_2->in_num_pages, &VAR_11, &VAR_2->in_page_array);

 if (VAR_18)
  return VAR_18;

 FUNC_1("SEP Driver:output sep->in_num_pages is %lu\n", VAR_2->in_num_pages);

 VAR_12 = 0;
 VAR_10 = 0;
 VAR_13 = VAR_2->in_num_pages;


 VAR_17 = VAR_2->shared_addr + VAR_1;


 while (VAR_12 < VAR_13) {

  VAR_14 = (struct sep_lli_entry_t *) VAR_17;

  VAR_17 += sizeof(struct sep_lli_entry_t) * VAR_0;


  VAR_15 = FUNC_4(&VAR_11[VAR_12], (VAR_13 - VAR_12));


  VAR_15 = (VAR_15 / VAR_5) * VAR_5;

  FUNC_1("SEP Driver:output table_data_size is %lu\n", VAR_15);


  FUNC_3(&VAR_11[VAR_12], VAR_14, &VAR_12, &VAR_16, VAR_15);

  if (VAR_10 == 0) {

   *VAR_6 = FUNC_9(VAR_2, VAR_14);
   *VAR_7 = VAR_16;
   *VAR_8 = VAR_15;

   FUNC_1("SEP Driver:output lli_table_in_ptr is %08lx\n", *VAR_6);
  } else {

   VAR_10->physical_address = FUNC_9(VAR_2, VAR_14);
   VAR_10->block_size = ((VAR_16) << 24) | (VAR_15);
  }


  VAR_10 = VAR_14 + VAR_16 - 1;
 }


 FUNC_5(VAR_2, (struct sep_lli_entry_t *)
       FUNC_8(VAR_2, *VAR_6), *VAR_7, *VAR_8);


 FUNC_2(VAR_11);
end_function:
 FUNC_0("SEP Driver:<-------- sep_prepare_input_dma_table end\n");
 return 0;

}
