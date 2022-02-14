
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;

__attribute__((used)) static void
FUNC_4(struct qla_hw_data *VAR_1)
{
 scsi_qla_host_t *VAR_2 = FUNC_0(VAR_1->pdev);

 if (FUNC_2(VAR_1))

  FUNC_1(VAR_0, VAR_2, 0xb022,
      "Resetting rom_lock.\n");






 FUNC_3(VAR_1);
}
