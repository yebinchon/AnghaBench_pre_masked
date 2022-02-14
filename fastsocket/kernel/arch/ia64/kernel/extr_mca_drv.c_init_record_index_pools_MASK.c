
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int slidx_list_t ;
typedef int sal_processor_static_info_t ;
typedef int sal_log_smbios_dev_err_info_t ;
typedef int sal_log_sel_dev_err_info_t ;
typedef int sal_log_processor_info_t ;
typedef int sal_log_plat_specific_err_info_t ;
typedef int sal_log_plat_bus_err_info_t ;
typedef int sal_log_pci_comp_err_info_t ;
typedef int sal_log_pci_bus_err_info_t ;
typedef int sal_log_mem_dev_err_info_t ;
typedef int sal_log_host_ctlr_err_info_t ;
struct TYPE_2__ {int max_idx; int * buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 static int VAR_7[] = {
  sizeof(sal_log_processor_info_t)
  + sizeof(sal_processor_static_info_t),
  sizeof(sal_log_mem_dev_err_info_t),
  sizeof(sal_log_sel_dev_err_info_t),
  sizeof(sal_log_pci_bus_err_info_t),
  sizeof(sal_log_smbios_dev_err_info_t),
  sizeof(sal_log_pci_comp_err_info_t),
  sizeof(sal_log_plat_specific_err_info_t),
  sizeof(sal_log_host_ctlr_err_info_t),
  sizeof(sal_log_plat_bus_err_info_t),
 };
 VAR_5 = VAR_2;


 VAR_6 = VAR_7[0];
 for (VAR_4 = 1; VAR_4 < sizeof VAR_7/sizeof(size_t); VAR_4++)
  if (VAR_6 > VAR_7[VAR_4])
   VAR_6 = VAR_7[VAR_4];


 VAR_3.max_idx = (VAR_5/VAR_6) * 2 + 1;
 VAR_3.buffer = (slidx_list_t *)
  FUNC_0(VAR_3.max_idx * sizeof(slidx_list_t), VAR_1);

 return VAR_3.buffer ? 0 : -VAR_0;
}
