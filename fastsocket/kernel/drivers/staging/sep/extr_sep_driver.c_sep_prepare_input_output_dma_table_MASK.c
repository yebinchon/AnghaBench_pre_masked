
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {int dummy; } ;
struct sep_device {int out_num_pages; int in_num_pages; int out_page_array; int in_page_array; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sep_lli_entry_t*) ;
 int FUNC_3 (struct sep_device*,struct sep_lli_entry_t*,int ,struct sep_lli_entry_t*,int ,unsigned long,unsigned long*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_4 (struct sep_device*,unsigned long,unsigned long,int *,struct sep_lli_entry_t**,int *) ;
 int FUNC_5 (struct sep_device*,unsigned long,unsigned long,int *,struct sep_lli_entry_t**,int *) ;

__attribute__((used)) static int FUNC_6(struct sep_device *VAR_1,
           unsigned long VAR_2,
           unsigned long VAR_3,
           unsigned long VAR_4,
           unsigned long VAR_5,
           unsigned long *VAR_6, unsigned long *VAR_7, unsigned long *VAR_8, unsigned long *VAR_9, unsigned long *VAR_10, bool VAR_11)
{

 struct sep_lli_entry_t *VAR_12;

 struct sep_lli_entry_t *VAR_13;
 int VAR_14 = 0;

 FUNC_0("SEP Driver:--------> sep_prepare_input_output_dma_table start\n");


 VAR_1->in_page_array = 0;
 VAR_1->out_page_array = 0;


 if (VAR_11 == 1) {

  VAR_14 = FUNC_4(VAR_1, VAR_2, VAR_4, &VAR_1->in_num_pages, &VAR_12, &VAR_1->in_page_array);
  if (VAR_14) {
   FUNC_1("SEP Driver: sep_lock_kernel_pages for input virtual buffer failed\n");
   goto end_function;
  }
 } else {

  VAR_14 = FUNC_5(VAR_1, VAR_2, VAR_4, &VAR_1->in_num_pages, &VAR_12, &VAR_1->in_page_array);
  if (VAR_14) {
   FUNC_1("SEP Driver: sep_lock_user_pages for input virtual buffer failed\n");
   goto end_function;
  }
 }

 if (VAR_11 == 1) {
  VAR_14 = FUNC_4(VAR_1, VAR_3, VAR_4, &VAR_1->out_num_pages, &VAR_13, &VAR_1->out_page_array);
  if (VAR_14) {
   FUNC_1("SEP Driver: sep_lock_kernel_pages for output virtual buffer failed\n");
   goto end_function_with_error1;
  }
 } else {
  VAR_14 = FUNC_5(VAR_1, VAR_3, VAR_4, &VAR_1->out_num_pages, &VAR_13, &VAR_1->out_page_array);
  if (VAR_14) {
   FUNC_1("SEP Driver: sep_lock_user_pages for output virtual buffer failed\n");
   goto end_function_with_error1;
  }
 }
 FUNC_1("sep->in_num_pages is %lu\n", VAR_1->in_num_pages);
 FUNC_1("sep->out_num_pages is %lu\n", VAR_1->out_num_pages);
 FUNC_1("SEP_DRIVER_ENTRIES_PER_TABLE_IN_SEP is %x\n", VAR_0);



 VAR_14 = FUNC_3(VAR_1, VAR_12, VAR_1->in_num_pages, VAR_13, VAR_1->out_num_pages, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_14) {
  FUNC_1("SEP Driver: sep_construct_dma_tables_from_lli failed\n");
  goto end_function_with_error2;
 }


 FUNC_0("in_num_entries_ptr is %08lx\n", *VAR_8);
 FUNC_0("out_num_entries_ptr is %08lx\n", *VAR_9);
 FUNC_0("table_data_size_ptr is %08lx\n", *VAR_10);
end_function_with_error2:
 FUNC_2(VAR_13);
end_function_with_error1:
 FUNC_2(VAR_12);
end_function:
 FUNC_0("SEP Driver:<-------- sep_prepare_input_output_dma_table end result = %d\n", (int) VAR_14);
 return VAR_14;

}
