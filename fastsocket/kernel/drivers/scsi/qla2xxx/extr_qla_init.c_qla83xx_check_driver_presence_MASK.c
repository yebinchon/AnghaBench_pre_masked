
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(scsi_qla_host_t *VAR_3)
{
 uint32_t VAR_4 = 0;
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_4 & (1 << VAR_5->portnum))
  return VAR_1;
 else
  return VAR_2;
}
