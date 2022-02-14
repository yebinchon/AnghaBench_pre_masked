
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_5__ {int oem_data; } ;
struct TYPE_7__ {TYPE_1__ valid; } ;
typedef TYPE_3__ sal_log_plat_specific_err_info_t ;
struct TYPE_6__ {int oem_data; } ;
struct TYPE_8__ {TYPE_2__ valid; } ;
typedef TYPE_4__ sal_log_mem_dev_err_info_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,int **,scalar_t__*) ;
 int FUNC_2 (int *) ;

int FUNC_3(const u8 *VAR_2, u8 **VAR_3, u64 *VAR_4)
{
 efi_guid_t VAR_5 = *(efi_guid_t *)VAR_2;
 int VAR_6 = 0;
 *VAR_4 = 0;
 FUNC_2(*VAR_3);
 *VAR_3 = ((void*)0);
 if (FUNC_0(VAR_5, VAR_1) == 0) {
  sal_log_plat_specific_err_info_t *VAR_7 = (sal_log_plat_specific_err_info_t *)VAR_2;
  VAR_6 = VAR_7->valid.oem_data;
 } else if (FUNC_0(VAR_5, VAR_0) == 0) {
  sal_log_mem_dev_err_info_t *VAR_8 = (sal_log_mem_dev_err_info_t *)VAR_2;
  VAR_6 = VAR_8->valid.oem_data;
 }
 if (VAR_6)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 else
  return 0;
}
