
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ fw_major_version; scalar_t__ fw_minor_version; scalar_t__ fw_subminor_version; int fw_dumped; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(scsi_qla_host_t *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_3->hw;
 uint16_t VAR_5, VAR_6, VAR_7;
 int VAR_8 = VAR_0;

 VAR_5 = VAR_4->fw_major_version;
 VAR_6 = VAR_4->fw_minor_version;
 VAR_7 = VAR_4->fw_subminor_version;

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 != VAR_0)
  return VAR_8;

 if (VAR_1) {
  if (!VAR_4->fw_dumped) {
   if (VAR_5 != VAR_4->fw_major_version ||
       VAR_6 != VAR_4->fw_minor_version ||
       VAR_7 != VAR_4->fw_subminor_version) {
    FUNC_0(VAR_2, VAR_3, 0xb02d,
        "Firmware version differs "
        "Previous version: %d:%d:%d - "
        "New version: %d:%d:%d\n",
        VAR_5, VAR_6,
        VAR_7,
        VAR_4->fw_major_version,
        VAR_4->fw_minor_version,
        VAR_4->fw_subminor_version);

    FUNC_2(VAR_3);

    FUNC_3(VAR_3);
   }
  } else
   FUNC_0(VAR_2, VAR_3, 0xb02e,
       "Firmware dump available to retrieve\n");
 }
 return VAR_8;
}
