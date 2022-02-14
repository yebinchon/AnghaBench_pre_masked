
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(scsi_qla_host_t *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;
 struct qla_hw_data *VAR_4 = VAR_1->hw;

 if (!FUNC_2(VAR_4) && !FUNC_3(VAR_4) &&
     !FUNC_0(VAR_4) && !FUNC_1(VAR_4))
  return VAR_0;

 VAR_2 = FUNC_4(VAR_1, &VAR_3);
 if (VAR_2 != VAR_0)
  return VAR_2;

 FUNC_6(VAR_1, VAR_3);
 FUNC_5(VAR_1);
 FUNC_7(VAR_1);

 return VAR_0;
}
