
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct req_que {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_1 (struct scsi_qla_host*,struct req_que*) ;

int
FUNC_2(struct scsi_qla_host *VAR_2, struct req_que *VAR_3)
{
 int VAR_4 = -1;

 if (VAR_3) {
  VAR_3->options |= VAR_0;
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 }
 if (VAR_4 == VAR_1)
  FUNC_0(VAR_2, VAR_3);

 return VAR_4;
}
