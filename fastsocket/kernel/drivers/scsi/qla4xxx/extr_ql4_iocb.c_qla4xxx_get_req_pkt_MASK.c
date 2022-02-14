
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int req_q_count; struct queue_entry* request_ptr; } ;
struct queue_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct queue_entry*,int ,int) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_2,
          struct queue_entry **VAR_3)
{
 uint16_t VAR_4 = 1;

 if (FUNC_2(VAR_2, VAR_4)) {
  *VAR_3 = VAR_2->request_ptr;
  FUNC_0(*VAR_3, 0, sizeof(**VAR_3));

  FUNC_1(VAR_2);
  VAR_2->req_q_count -= VAR_4;
  return VAR_1;
 }

 return VAR_0;
}
