
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int request_in; int request_ptr; int request_ring; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct scsi_qla_host *VAR_1)
{

 if (VAR_1->request_in == (VAR_0 - 1)) {
  VAR_1->request_in = 0;
  VAR_1->request_ptr = VAR_1->request_ring;
 } else {
  VAR_1->request_in++;
  VAR_1->request_ptr++;
 }
}
