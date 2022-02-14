
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;

char *
FUNC_2(struct scsi_qla_host *VAR_1, char *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_1->hw;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->pdev, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_2, "PCIe iSA");
  return VAR_2;
 }
 return VAR_2;
}
