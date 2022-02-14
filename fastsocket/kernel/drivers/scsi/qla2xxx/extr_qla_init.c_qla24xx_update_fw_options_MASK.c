
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int * fw_seriallink_options24; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;

void
FUNC_4(scsi_qla_host_t *VAR_3)
{
 int VAR_4;
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 if (FUNC_0(VAR_5))
  return;


 if ((FUNC_1(VAR_5->fw_seriallink_options24[0]) & VAR_0) == 0)
  return;

 VAR_4 = FUNC_3(VAR_3,
     FUNC_1(VAR_5->fw_seriallink_options24[1]),
     FUNC_1(VAR_5->fw_seriallink_options24[2]),
     FUNC_1(VAR_5->fw_seriallink_options24[3]));
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2, VAR_3, 0x0104,
      "Unable to update Serial Link options (%x).\n", VAR_4);
 }
}
