
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pci_attr; int pdev; } ;
typedef int lwstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static char *
FUNC_5(struct scsi_qla_host *VAR_12, char *VAR_13)
{
 static char *VAR_14[] = { "33", "66", "100", "133", };
 struct qla_hw_data *VAR_15 = VAR_12->hw;
 uint32_t VAR_16;
 int VAR_17;

 VAR_17 = FUNC_0(VAR_15->pdev);
 if (VAR_17) {
  char VAR_18[6];
  uint16_t VAR_19, VAR_20, VAR_21;

  VAR_17 += VAR_11;
  FUNC_1(VAR_15->pdev, VAR_17, &VAR_19);
  VAR_20 = VAR_19 & (VAR_0 | VAR_1 | VAR_2 | VAR_3);
  VAR_21 = (VAR_19 &
      (VAR_4 | VAR_5 | VAR_6 | VAR_7 | VAR_8 | VAR_9)) >> 4;

  FUNC_4(VAR_13, "PCIe (");
  switch (VAR_20) {
  case 1:
   FUNC_3(VAR_13, "2.5GT/s ");
   break;
  case 2:
   FUNC_3(VAR_13, "5.0GT/s ");
   break;
  case 3:
   FUNC_3(VAR_13, "8.0GT/s ");
   break;
  default:
   FUNC_3(VAR_13, "<unknown> ");
   break;
  }
  FUNC_2(VAR_18, sizeof(VAR_18), "x%d)", VAR_21);
  FUNC_3(VAR_13, VAR_18);

  return VAR_13;
 }

 FUNC_4(VAR_13, "PCI");
 VAR_16 = (VAR_15->pci_attr & VAR_10) >> 8;
 if (VAR_16 == 0 || VAR_16 == 8) {
  FUNC_3(VAR_13, " (");
  FUNC_3(VAR_13, VAR_14[VAR_16 >> 3]);
 } else {
  FUNC_3(VAR_13, "-X ");
  if (VAR_16 & VAR_2)
   FUNC_3(VAR_13, "Mode 2");
  else
   FUNC_3(VAR_13, "Mode 1");
  FUNC_3(VAR_13, " (");
  FUNC_3(VAR_13, VAR_14[VAR_16 & ~VAR_2]);
 }
 FUNC_3(VAR_13, " MHz)");

 return VAR_13;
}
