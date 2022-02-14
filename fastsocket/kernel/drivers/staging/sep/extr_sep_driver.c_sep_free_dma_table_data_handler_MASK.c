
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {scalar_t__ out_num_pages; scalar_t__ in_num_pages; scalar_t__ out_page_array; scalar_t__ in_page_array; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct sep_device *VAR_0)
{
 FUNC_0("SEP Driver:--------> sep_free_dma_table_data_handler start\n");


 FUNC_1(VAR_0->in_page_array, VAR_0->in_num_pages, 0);


 if (VAR_0->out_page_array)
  FUNC_1(VAR_0->out_page_array, VAR_0->out_num_pages, 1);


 VAR_0->in_page_array = 0;
 VAR_0->out_page_array = 0;
 VAR_0->in_num_pages = 0;
 VAR_0->out_num_pages = 0;
 FUNC_0("SEP Driver:<-------- sep_free_dma_table_data_handler end\n");
 return 0;
}
