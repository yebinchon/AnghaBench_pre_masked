
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned short working_srl; unsigned short working_branch; unsigned short working_build; unsigned short driver_srl_high; unsigned short driver_srl_low; unsigned short fw_on_ctlr_srl; unsigned short fw_on_ctlr_branch; unsigned short fw_on_ctlr_build; void* driver_build_low; void* driver_branch_low; void* driver_build_high; void* driver_branch_high; int driver_version; } ;
struct TYPE_6__ {TYPE_1__ tw_compat_info; int host; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,unsigned short,int ,void*,void*,unsigned short*,unsigned short*,unsigned short*,unsigned short*,int*) ;

__attribute__((used)) static int FUNC_4(TW_Device_Extension *VAR_12, int *VAR_13)
{
 int VAR_14 = 1;
 unsigned short VAR_15 = 0, VAR_16 = 0;
 unsigned short VAR_17 = 0, VAR_18 = 0;
 u32 VAR_19 = 0;

 if (FUNC_3(VAR_12, VAR_11,
          VAR_10, VAR_7,
          VAR_0, VAR_5,
          VAR_6, &VAR_15,
          &VAR_16, &VAR_17,
          &VAR_18, &VAR_19)) {
  FUNC_0(VAR_12->host, VAR_8, 0x7, "Initconnection failed while checking SRL");
  goto out;
 }

 VAR_12->tw_compat_info.working_srl = VAR_15;
 VAR_12->tw_compat_info.working_branch = VAR_17;
 VAR_12->tw_compat_info.working_build = VAR_18;


 if (!(VAR_19 & VAR_4)) {
  if (FUNC_3(VAR_12, VAR_11,
           VAR_10,
           VAR_3, VAR_0,
           VAR_1, VAR_2,
           &VAR_15, &VAR_16,
           &VAR_17, &VAR_18,
           &VAR_19)) {
   FUNC_0(VAR_12->host, VAR_8, 0xa, "Initconnection (base mode) failed while checking SRL");
   goto out;
  }
  if (!(VAR_19 & VAR_4)) {
   if (VAR_7 > VAR_15) {
    FUNC_0(VAR_12->host, VAR_8, 0x32, "Firmware and driver incompatibility: please upgrade firmware");
   } else {
    FUNC_0(VAR_12->host, VAR_8, 0x33, "Firmware and driver incompatibility: please upgrade driver");
   }
   goto out;
  }
  VAR_12->tw_compat_info.working_srl = VAR_3;
  VAR_12->tw_compat_info.working_branch = VAR_1;
  VAR_12->tw_compat_info.working_build = VAR_2;
 }


 FUNC_2(VAR_12->tw_compat_info.driver_version, VAR_9, FUNC_1(VAR_9));
 VAR_12->tw_compat_info.driver_srl_high = VAR_7;
 VAR_12->tw_compat_info.driver_branch_high = VAR_5;
 VAR_12->tw_compat_info.driver_build_high = VAR_6;
 VAR_12->tw_compat_info.driver_srl_low = VAR_3;
 VAR_12->tw_compat_info.driver_branch_low = VAR_1;
 VAR_12->tw_compat_info.driver_build_low = VAR_2;
 VAR_12->tw_compat_info.fw_on_ctlr_srl = VAR_15;
 VAR_12->tw_compat_info.fw_on_ctlr_branch = VAR_17;
 VAR_12->tw_compat_info.fw_on_ctlr_build = VAR_18;

 VAR_14 = 0;
out:
 return VAR_14;
}
