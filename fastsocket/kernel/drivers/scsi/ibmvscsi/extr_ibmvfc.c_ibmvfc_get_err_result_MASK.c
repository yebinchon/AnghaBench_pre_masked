
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsp_code; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct ibmvfc_fcp_rsp {int fcp_rsp_len; int flags; int scsi_status; TYPE_2__ data; } ;
struct ibmvfc_cmd {int error; int status; struct ibmvfc_fcp_rsp rsp; } ;
struct TYPE_6__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ibmvfc_cmd *VAR_3)
{
 int VAR_4;
 struct ibmvfc_fcp_rsp *VAR_5 = &VAR_3->rsp;
 int VAR_6 = VAR_5->fcp_rsp_len;

 if ((VAR_5->flags & VAR_1) &&
     ((VAR_6 && VAR_6 != 4 && VAR_6 != 8) ||
      VAR_5->data.info.rsp_code))
  return VAR_0 << 16;

 VAR_4 = FUNC_0(VAR_3->status, VAR_3->error);
 if (VAR_4 >= 0)
  return VAR_5->scsi_status | (VAR_2[VAR_4].result << 16);
 return VAR_5->scsi_status | (VAR_0 << 16);
}
