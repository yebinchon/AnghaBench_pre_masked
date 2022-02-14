
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pci_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2(struct scsi_qla_host *VAR_3, char *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_3->hw;
 static char *VAR_6[] = {
  "33", "66", "100", "133",
 };
 uint16_t VAR_7;

 FUNC_1(VAR_4, "PCI");
 VAR_7 = (VAR_5->pci_attr & (VAR_2 | VAR_0)) >> 9;
 if (VAR_7) {
  FUNC_0(VAR_4, "-X (");
  FUNC_0(VAR_4, VAR_6[VAR_7]);
 } else {
  VAR_7 = (VAR_5->pci_attr & VAR_1) >> 8;
  FUNC_0(VAR_4, " (");
  FUNC_0(VAR_4, VAR_6[VAR_7]);
 }
 FUNC_0(VAR_4, " MHz)");

 return (VAR_4);
}
