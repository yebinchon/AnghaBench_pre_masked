
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_i2c_access {int option; int length; int offset; int device; int buffer; } ;
struct qla_hw_data {int s_dma_pool; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_8__ {int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* reply; TYPE_1__ request_payload; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_12__ {struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_9__ {scalar_t__* vendor_rsp; } ;
struct TYPE_10__ {TYPE_2__ vendor_reply; } ;
struct TYPE_11__ {int result; TYPE_3__ reply_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,struct qla_i2c_access*,int) ;
 TYPE_5__* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_7(struct fc_bsg_job *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->shost;
 scsi_qla_host_t *VAR_7 = FUNC_5(VAR_6);
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 int VAR_9 = 0;
 uint8_t VAR_10[VAR_1];
 struct qla_i2c_access *VAR_11 = (void *)VAR_10;
 dma_addr_t VAR_12;
 uint8_t *VAR_13 = FUNC_0(VAR_8->s_dma_pool, VAR_4, &VAR_12);
 if (!VAR_13) {
  VAR_5->reply->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_3;
  goto done;
 }

 FUNC_4(VAR_5->request_payload.sg_list,
     VAR_5->request_payload.sg_cnt, VAR_11, sizeof(*VAR_11));

 FUNC_2(VAR_13, VAR_11->buffer, VAR_11->length);
 VAR_9 = FUNC_3(VAR_7, VAR_12, VAR_13,
     VAR_11->device, VAR_11->offset, VAR_11->length, VAR_11->option);

 if (VAR_9) {
  VAR_5->reply->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_2;
  goto dealloc;
 }

 VAR_5->reply->reply_data.vendor_reply.vendor_rsp[0] = 0;

dealloc:
 FUNC_1(VAR_8->s_dma_pool, VAR_13, VAR_12);

done:
 VAR_5->reply_len = sizeof(struct fc_bsg_reply);
 VAR_5->reply->result = VAR_0 << 16;
 VAR_5->job_done(VAR_5);

 return 0;
}
