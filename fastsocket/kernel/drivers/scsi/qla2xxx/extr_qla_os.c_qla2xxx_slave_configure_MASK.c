
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ tagged_supported; int request_queue; int host; } ;
struct req_que {int max_q_depth; } ;
struct TYPE_3__ {int hw; struct req_que* req; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (struct scsi_device*,int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct scsi_device *VAR_0)
{
 scsi_qla_host_t *VAR_1 = FUNC_4(VAR_0->host);
 struct req_que *VAR_2 = VAR_1->req;

 if (FUNC_0(VAR_1->hw))
  FUNC_1(VAR_0->request_queue, 0x7);

 if (VAR_0->tagged_supported)
  FUNC_2(VAR_0, VAR_2->max_q_depth);
 else
  FUNC_3(VAR_0, VAR_2->max_q_depth);
 return 0;
}
