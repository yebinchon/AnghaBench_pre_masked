
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int flt_region_fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

int
FUNC_3(scsi_qla_host_t *VAR_2, uint32_t *VAR_3)
{
 int VAR_4;

 if (VAR_1 == 1)
  return FUNC_2(VAR_2, VAR_3);






 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == VAR_0)
  return VAR_4;

 return FUNC_1(VAR_2, VAR_3,
     VAR_2->hw->flt_region_fw);
}
