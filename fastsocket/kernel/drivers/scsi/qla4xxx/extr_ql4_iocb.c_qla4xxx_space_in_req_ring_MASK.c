
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct scsi_qla_host {scalar_t__ req_q_count; scalar_t__ request_in; TYPE_1__* isp_ops; } ;
struct TYPE_2__ {scalar_t__ (* rd_shdw_req_q_out ) (struct scsi_qla_host*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;

__attribute__((used)) static int
FUNC_1(struct scsi_qla_host *VAR_1, uint16_t VAR_2)
{
 uint16_t VAR_3;


 if ((VAR_2 + 2) >= VAR_1->req_q_count) {
  VAR_3 = (uint16_t) VAR_1->isp_ops->rd_shdw_req_q_out(VAR_1);
  if (VAR_1->request_in < VAR_3)
   VAR_1->req_q_count = VAR_3 - VAR_1->request_in;
  else
   VAR_1->req_q_count = VAR_0 -
      (VAR_1->request_in - VAR_3);
 }


 if ((VAR_2 + 2) < VAR_1->req_q_count)
  return 1;
 else
  return 0;
}
