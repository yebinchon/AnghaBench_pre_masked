
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*,int ) ;

uint32_t
FUNC_4(scsi_qla_host_t *VAR_1, uint32_t VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_1->hw;
 uint32_t VAR_4;

 do {
  FUNC_0(1000);
  FUNC_1(VAR_3);
  VAR_4 = FUNC_3(VAR_3, VAR_0);
  FUNC_2(VAR_3);
 } while (VAR_4 == VAR_2);

 return VAR_4;
}
