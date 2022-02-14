
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*,int*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct scsi_qla_host *VAR_2, uint8_t *VAR_3,
 uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6;


 FUNC_1(VAR_2->host);
 VAR_6 = FUNC_0(VAR_2, (uint32_t *)VAR_3, VAR_4,
  VAR_5 >> 2);
 FUNC_2(VAR_2->host);


 if (VAR_6)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;
 return VAR_6;
}
