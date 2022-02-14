
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int func_num; int request_in; int nx_db_wr_ptr; } ;


 int FUNC_0 (struct scsi_qla_host*,int ,int) ;

void FUNC_1(struct scsi_qla_host *VAR_0)
{
 uint32_t VAR_1 = 0;

 VAR_1 = 0x14 | (VAR_0->func_num << 5);
 VAR_1 = VAR_1 | (0 << 8) | (VAR_0->request_in << 16);

 FUNC_0(VAR_0, VAR_0->nx_db_wr_ptr, VAR_0->request_in);
}
