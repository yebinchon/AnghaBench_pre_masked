
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct qla_hw_data*,int ) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct qla_hw_data *VAR_4, uint32_t *VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_0(VAR_4->pdev);
 FUNC_5(VAR_4, VAR_1, VAR_0);
 FUNC_3(VAR_4);
 if (FUNC_4(VAR_4)) {
  FUNC_1(VAR_3, VAR_6, 0xb00c,
      "Error waiting for rom done.\n");
  return -1;
 }
 *VAR_5 = FUNC_2(VAR_4, VAR_2);
 return 0;
}
