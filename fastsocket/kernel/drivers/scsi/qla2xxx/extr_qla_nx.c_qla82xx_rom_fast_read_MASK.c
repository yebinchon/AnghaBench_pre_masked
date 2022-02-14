
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct qla_hw_data*,int,int*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct qla_hw_data *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 scsi_qla_host_t *VAR_6 = FUNC_0(VAR_1->pdev);

 while ((FUNC_3(VAR_1) != 0) && (VAR_5 < 50000)) {
  FUNC_6(100);
  FUNC_5();
  VAR_5++;
 }
 if (VAR_5 >= 50000) {
  FUNC_1(VAR_0, VAR_6, 0x00b9,
      "Failed to acquire SEM2 lock.\n");
  return -1;
 }
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_1);
 return VAR_4;
}
