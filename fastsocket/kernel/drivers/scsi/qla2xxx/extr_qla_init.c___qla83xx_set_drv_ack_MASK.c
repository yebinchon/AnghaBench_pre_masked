
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(scsi_qla_host_t *VAR_2)
{
 int VAR_3 = VAR_1;
 struct qla_hw_data *VAR_4 = VAR_2->hw;
 uint32_t VAR_5;

 VAR_3 = FUNC_0(VAR_2, VAR_0, &VAR_5);
 if (VAR_3 == VAR_1) {
  VAR_5 |= (1 << VAR_4->portnum);
  VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_5);
 }

 return VAR_3;
}
