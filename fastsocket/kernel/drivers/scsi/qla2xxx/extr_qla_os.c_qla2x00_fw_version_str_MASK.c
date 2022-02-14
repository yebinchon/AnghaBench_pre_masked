
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int fw_major_version; int fw_minor_version; int fw_subminor_version; int fw_attributes; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2(struct scsi_qla_host *VAR_1, char *VAR_2)
{
 char VAR_3[10];
 struct qla_hw_data *VAR_4 = VAR_1->hw;

 FUNC_0(VAR_2, "%d.%02d.%02d ", VAR_4->fw_major_version,
     VAR_4->fw_minor_version,
     VAR_4->fw_subminor_version);

 if (VAR_4->fw_attributes & VAR_0) {
  FUNC_1(VAR_2, "FLX");
  return (VAR_2);
 }

 switch (VAR_4->fw_attributes & 0xFF) {
 case 0x7:
  FUNC_1(VAR_2, "EF");
  break;
 case 0x17:
  FUNC_1(VAR_2, "TP");
  break;
 case 0x37:
  FUNC_1(VAR_2, "IP");
  break;
 case 0x77:
  FUNC_1(VAR_2, "VI");
  break;
 default:
  FUNC_0(VAR_3, "(%x)", VAR_4->fw_attributes);
  FUNC_1(VAR_2, VAR_3);
  break;
 }
 if (VAR_4->fw_attributes & 0x100)
  FUNC_1(VAR_2, "X");

 return (VAR_2);
}
