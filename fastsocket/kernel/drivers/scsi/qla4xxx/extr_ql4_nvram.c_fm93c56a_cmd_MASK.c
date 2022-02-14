
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int eeprom_cmd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host * VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;


 FUNC_0(VAR_5->eeprom_cmd_data | VAR_3, VAR_5);

 FUNC_0(VAR_5->eeprom_cmd_data | VAR_3 |
        VAR_1, VAR_5);
 FUNC_0(VAR_5->eeprom_cmd_data | VAR_3 |
        VAR_0, VAR_5);

 VAR_9 = 1 << (VAR_4 - 1);


 VAR_11 = 0xffff;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_10 =
   (VAR_6 & VAR_9) ? VAR_3 : VAR_2;
  if (VAR_11 != VAR_10) {





   FUNC_0(VAR_5->eeprom_cmd_data | VAR_10, VAR_5);
   VAR_11 = VAR_10;
  }
  FUNC_0(VAR_5->eeprom_cmd_data | VAR_10 |
         VAR_1, VAR_5);
  FUNC_0(VAR_5->eeprom_cmd_data | VAR_10 |
         VAR_0, VAR_5);

  VAR_6 = VAR_6 << 1;
 }
 VAR_9 = 1 << (FUNC_1(VAR_5) - 1);


 VAR_11 = 0xffff;
 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5); VAR_8++) {
  VAR_10 = VAR_7 & VAR_9 ? VAR_3 :
   VAR_2;
  if (VAR_11 != VAR_10) {




   FUNC_0(VAR_5->eeprom_cmd_data | VAR_10, VAR_5);

   VAR_11 = VAR_10;
  }
  FUNC_0(VAR_5->eeprom_cmd_data | VAR_10 |
         VAR_1, VAR_5);
  FUNC_0(VAR_5->eeprom_cmd_data | VAR_10 |
         VAR_0, VAR_5);

  VAR_7 = VAR_7 << 1;
 }
 return 1;
}
