
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {int host; } ;


 int FUNC_0 (struct scsi_qla_host*,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

uint8_t *
FUNC_3(struct scsi_qla_host *VAR_0, uint8_t *VAR_1,
 uint32_t VAR_2, uint32_t VAR_3)
{
 FUNC_1(VAR_0->host);
 FUNC_0(VAR_0, (uint32_t *)VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0->host);
 return VAR_1;
}
