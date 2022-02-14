
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int fw_dumped; int fw_dump; } ;
struct TYPE_5__ {int host_no; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(scsi_qla_host_t *VAR_4, int VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_4->hw;

 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_3, VAR_4, 0xd000,
      "Failed to dump firmware (%x).\n", VAR_5);
  VAR_6->fw_dumped = 0;
 } else {
  FUNC_0(VAR_2, VAR_4, 0xd001,
      "Firmware dump saved to temp buffer (%ld/%p).\n",
      VAR_4->host_no, VAR_6->fw_dump);
  VAR_6->fw_dumped = 1;
  FUNC_1(VAR_4, VAR_1);
 }
}
