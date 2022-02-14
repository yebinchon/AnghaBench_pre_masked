
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct qla_hw_data *VAR_1)
{
 int VAR_2 = 0;
 scsi_qla_host_t *VAR_3 = FUNC_1(VAR_1->pdev);

 while ((FUNC_3(VAR_1) != 0) && (VAR_2 < 50000)) {
  FUNC_4(100);
  FUNC_0();
  VAR_2++;
 }
 if (VAR_2 >= 50000) {
  FUNC_2(VAR_0, VAR_3, 0xb010,
      "ROM lock failed.\n");
  return -1;
 }
 return 0;
}
