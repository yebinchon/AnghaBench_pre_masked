
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct pm8001_ioctl_payload {int minor_function; int length; int* func_specific; scalar_t__ offset; } ;
struct pm8001_hba_info {scalar_t__ chip_id; int* sas_addr; TYPE_2__* phy; TYPE_1__* chip; int * nvmd_completion; int pdev; } ;
struct TYPE_6__ {int (* get_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_5__ {int dev_sas_addr; } ;
struct TYPE_4__ {int n_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int*,int ) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pm8001_hba_info *VAR_6)
{
 u8 VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_6->chip->n_phy; VAR_7++) {
  VAR_6->phy[VAR_7].dev_sas_addr = 0x50010c600047f9d0ULL;
  VAR_6->phy[VAR_7].dev_sas_addr =
   FUNC_2((u64)
    (*(u64 *)&VAR_6->phy[VAR_7].dev_sas_addr));
 }
 FUNC_4(VAR_6->sas_addr, &VAR_6->phy[0].dev_sas_addr,
  VAR_3);

}
