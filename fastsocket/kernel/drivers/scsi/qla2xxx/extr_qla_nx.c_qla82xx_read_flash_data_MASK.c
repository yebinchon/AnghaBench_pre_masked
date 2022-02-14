
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*,int,int*) ;

__attribute__((used)) static uint32_t *
FUNC_3(scsi_qla_host_t *VAR_1, uint32_t *VAR_2, uint32_t VAR_3,
 uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 struct qla_hw_data *VAR_7 = VAR_1->hw;


 for (VAR_5 = 0; VAR_5 < VAR_4/4; VAR_5++, VAR_3 += 4) {
  if (FUNC_2(VAR_7, VAR_3, &VAR_6)) {
   FUNC_1(VAR_0, VAR_1, 0x0106,
       "Do ROM fast read failed.\n");
   goto done_read;
  }
  VAR_2[VAR_5] = FUNC_0(VAR_6);
 }
done_read:
 return VAR_2;
}
