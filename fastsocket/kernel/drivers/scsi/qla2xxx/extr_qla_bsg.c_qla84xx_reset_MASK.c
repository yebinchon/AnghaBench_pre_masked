
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__* reply; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_14__ {struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_13__ {int result; } ;
struct TYPE_10__ {scalar_t__* vendor_cmd; } ;
struct TYPE_11__ {TYPE_1__ h_vendor; } ;
struct TYPE_12__ {TYPE_2__ rqst_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,TYPE_5__*,int,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_5__*,int,char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_5__* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_6(struct fc_bsg_job *VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_6->shost;
 scsi_qla_host_t *VAR_8 = FUNC_4(VAR_7);
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 int VAR_10 = 0;
 uint32_t VAR_11;

 if (!FUNC_0(VAR_9)) {
  FUNC_1(VAR_4, VAR_8, 0x702f, "Not 84xx, exiting.\n");
  return -VAR_3;
 }

 VAR_11 = VAR_6->request->rqst_data.h_vendor.vendor_cmd[1];

 VAR_10 = FUNC_3(VAR_8, VAR_11 == VAR_0);

 if (VAR_10) {
  FUNC_2(VAR_5, VAR_8, 0x7030,
      "Vendor request 84xx reset failed.\n");
  VAR_10 = (VAR_1 << 16);

 } else {
  FUNC_1(VAR_4, VAR_8, 0x7031,
      "Vendor request 84xx reset completed.\n");
  VAR_6->reply->result = VAR_2;
  VAR_6->job_done(VAR_6);
 }

 return VAR_10;
}
