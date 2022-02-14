
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_driver_build_sync_table_t {int isKernelVirtualAddress; int table_data_size; int in_table_num_entries; int in_table_address; scalar_t__ block_size; scalar_t__ data_in_size; scalar_t__ app_in_address; int out_table_num_entries; int out_table_address; scalar_t__ app_out_address; } ;
struct sep_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sep_driver_build_sync_table_t*,void*,int) ;
 scalar_t__ FUNC_1 (void*,void*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct sep_device*,scalar_t__,scalar_t__,scalar_t__,int *,int *,int *,int ) ;
 int FUNC_5 (struct sep_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct sep_device *VAR_1,
      unsigned long VAR_2)
{
 int VAR_3;

 struct sep_driver_build_sync_table_t VAR_4;

 FUNC_2("SEP Driver:--------> sep_create_sync_dma_tables_handler start\n");

 VAR_3 = FUNC_0(&VAR_4, (void *) VAR_2, sizeof(struct sep_driver_build_sync_table_t));
 if (VAR_3)
  goto end_function;

 FUNC_3("app_in_address is %08lx\n", VAR_4.app_in_address);
 FUNC_3("app_out_address is %08lx\n", VAR_4.app_out_address);
 FUNC_3("data_size is %lu\n", VAR_4.data_in_size);
 FUNC_3("block_size is %lu\n", VAR_4.block_size);


 if (VAR_4.app_out_address)

  VAR_3 = FUNC_5(VAR_1,
          VAR_4.app_in_address,
          VAR_4.app_out_address,
          VAR_4.data_in_size,
          VAR_4.block_size,
          &VAR_4.in_table_address,
          &VAR_4.out_table_address, &VAR_4.in_table_num_entries, &VAR_4.out_table_num_entries, &VAR_4.table_data_size, VAR_4.isKernelVirtualAddress);
 else

  VAR_3 = FUNC_4(VAR_1,
          VAR_4.app_in_address,
          VAR_4.data_in_size, VAR_4.block_size, &VAR_4.in_table_address, &VAR_4.in_table_num_entries, &VAR_4.table_data_size, VAR_4.isKernelVirtualAddress);

 if (VAR_3)
  goto end_function;

 if (FUNC_1((void *) VAR_2, (void *) &VAR_4, sizeof(struct sep_driver_build_sync_table_t)))
  VAR_3 = -VAR_0;
end_function:
 FUNC_2("SEP Driver:<-------- sep_create_sync_dma_tables_handler end\n");
 return VAR_3;
}
