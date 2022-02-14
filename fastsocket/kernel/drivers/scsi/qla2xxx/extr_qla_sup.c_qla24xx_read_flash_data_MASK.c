
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct qla_hw_data*,size_t) ;
 int FUNC_2 (struct qla_hw_data*,int ) ;

uint32_t *
FUNC_3(scsi_qla_host_t *VAR_0, uint32_t *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{
 uint32_t VAR_4;
 struct qla_hw_data *VAR_5 = VAR_0->hw;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++)
  VAR_1[VAR_4] = FUNC_0(FUNC_2(VAR_5,
      FUNC_1(VAR_5, VAR_2)));

 return VAR_1;
}
