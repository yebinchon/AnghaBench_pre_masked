
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int eeprom_cmd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct scsi_qla_host*) ;

__attribute__((used)) static int FUNC_1(struct scsi_qla_host * VAR_1)
{
 VAR_1->eeprom_cmd_data = VAR_0 | 0x000f0000;
 FUNC_0(VAR_1->eeprom_cmd_data, VAR_1);
 return 1;
}
