
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int running_gold_fw; } ;
struct qla_hw_data {TYPE_1__ flags; int flt_region_gold_fw; int flt_region_fw; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;

int
FUNC_3(scsi_qla_host_t *VAR_3, uint32_t *VAR_4)
{
 int VAR_5;
 struct qla_hw_data *VAR_6 = VAR_3->hw;

 if (VAR_1 == 2)
  goto try_blob_fw;







 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6->flt_region_fw);
 if (VAR_5 == VAR_0)
  return VAR_5;

try_blob_fw:
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == VAR_0 || !VAR_6->flt_region_gold_fw)
  return VAR_5;

 FUNC_0(VAR_2, VAR_3, 0x0099,
     "Attempting to fallback to golden firmware.\n");
 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6->flt_region_gold_fw);
 if (VAR_5 != VAR_0)
  return VAR_5;

 FUNC_0(VAR_2, VAR_3, 0x009a, "Update operational firmware.\n");
 VAR_6->flags.running_gold_fw = 1;
 return VAR_5;
}
