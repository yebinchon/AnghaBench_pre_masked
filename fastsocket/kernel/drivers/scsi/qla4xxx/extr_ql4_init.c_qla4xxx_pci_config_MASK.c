
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*) ;

void FUNC_5(struct scsi_qla_host *VAR_5)
{
 uint16_t VAR_6;
 int VAR_7;

 FUNC_4(VAR_0, VAR_5, "Configuring PCI space...\n");

 FUNC_1(VAR_5->pdev);
 VAR_7 = FUNC_2(VAR_5->pdev);





 FUNC_0(VAR_5->pdev, VAR_1, &VAR_6);
 VAR_6 |= VAR_3 | VAR_4;
 VAR_6 &= ~VAR_2;
 FUNC_3(VAR_5->pdev, VAR_1, VAR_6);
}
