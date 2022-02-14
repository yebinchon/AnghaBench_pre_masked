
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {int * reg_tbl; TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* rd_reg_direct ) (struct scsi_qla_host*,int ) ;} ;


 int FUNC_0 (struct scsi_qla_host*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct scsi_qla_host *VAR_0,
          const uint32_t VAR_1)
{
 return VAR_0->isp_ops->rd_reg_direct(VAR_0, VAR_0->reg_tbl[VAR_1]);
}
