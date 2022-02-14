
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int fcp_prio_enabled; } ;
struct qla_hw_data {int flt_region_fcp_prio; TYPE_4__* fcp_prio_cfg; TYPE_2__ flags; TYPE_1__* isp_ops; } ;
struct TYPE_15__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_16__ {int num_entries; int * entry; } ;
struct TYPE_13__ {int (* read_optrom ) (TYPE_3__*,int *,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,int *,int,int) ;
 int FUNC_4 (TYPE_3__*,int *,int,int) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int) ;

int
FUNC_7(scsi_qla_host_t *VAR_6)
{
 int VAR_7, VAR_8;
 uint32_t VAR_9;
 struct qla_hw_data *VAR_10 = VAR_6->hw;

 if (!VAR_10->fcp_prio_cfg) {
  VAR_10->fcp_prio_cfg = FUNC_6(VAR_2);
  if (!VAR_10->fcp_prio_cfg) {
   FUNC_1(VAR_5, VAR_6, 0x00d5,
       "Unable to allocate memory for fcp priorty data (%x).\n",
       VAR_2);
   return VAR_3;
  }
 }
 FUNC_0(VAR_10->fcp_prio_cfg, 0, VAR_2);

 VAR_9 = VAR_10->flt_region_fcp_prio;


 VAR_10->isp_ops->read_optrom(VAR_6, (uint8_t *)VAR_10->fcp_prio_cfg,
   VAR_9 << 2, VAR_1);

 if (!FUNC_2(VAR_6, VAR_10->fcp_prio_cfg, 0))
  goto fail;


 VAR_9 += (VAR_1 >> 2);
 VAR_7 = VAR_10->fcp_prio_cfg->num_entries * VAR_0;
 VAR_8 = VAR_2 - VAR_1;

 VAR_10->isp_ops->read_optrom(VAR_6, (uint8_t *)&VAR_10->fcp_prio_cfg->entry[0],
   VAR_9 << 2, (VAR_7 < VAR_8 ? VAR_7 : VAR_8));


 if (!FUNC_2(VAR_6, VAR_10->fcp_prio_cfg, 1))
  goto fail;

 VAR_10->flags.fcp_prio_enabled = 1;
 return VAR_4;
fail:
 FUNC_5(VAR_10->fcp_prio_cfg);
 VAR_10->fcp_prio_cfg = ((void*)0);
 return VAR_3;
}
