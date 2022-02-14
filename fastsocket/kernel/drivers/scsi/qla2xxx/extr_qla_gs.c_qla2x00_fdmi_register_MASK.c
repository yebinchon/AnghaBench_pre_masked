
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(scsi_qla_host_t *VAR_2)
{
 int VAR_3;
       struct qla_hw_data *VAR_4 = VAR_2->hw;

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4) ||
     FUNC_2(VAR_4))
  return VAR_1;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  if (VAR_3 != VAR_0)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3)
   return VAR_3;
 }
 VAR_3 = FUNC_5(VAR_2);

 return VAR_3;
}
