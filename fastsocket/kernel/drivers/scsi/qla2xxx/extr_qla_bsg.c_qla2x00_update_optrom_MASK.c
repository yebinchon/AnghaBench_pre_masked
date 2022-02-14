
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int isp82xx_no_md_cap; } ;
struct qla_hw_data {int optrom_state; int * optrom_buffer; int optrom_region_size; int optrom_region_start; TYPE_3__* isp_ops; TYPE_1__ flags; } ;
struct TYPE_10__ {int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* reply; TYPE_2__ request_payload; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_13__ {struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_12__ {int result; } ;
struct TYPE_11__ {int (* write_optrom ) (TYPE_5__*,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_bsg_job*,TYPE_5__*,int) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 TYPE_5__* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (TYPE_5__*,int *,int ,int ) ;
 int FUNC_4 (struct fc_bsg_job*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct fc_bsg_job *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->shost;
 scsi_qla_host_t *VAR_4 = FUNC_2(VAR_3);
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 int VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_2, VAR_4, 1);
 if (VAR_6)
  return VAR_6;


 VAR_5->flags.isp82xx_no_md_cap = 1;

 FUNC_1(VAR_2->request_payload.sg_list,
     VAR_2->request_payload.sg_cnt, VAR_5->optrom_buffer,
     VAR_5->optrom_region_size);

 VAR_5->isp_ops->write_optrom(VAR_4, VAR_5->optrom_buffer,
     VAR_5->optrom_region_start, VAR_5->optrom_region_size);

 VAR_2->reply->result = VAR_0;
 FUNC_5(VAR_5->optrom_buffer);
 VAR_5->optrom_buffer = ((void*)0);
 VAR_5->optrom_state = VAR_1;
 VAR_2->job_done(VAR_2);
 return VAR_6;
}
