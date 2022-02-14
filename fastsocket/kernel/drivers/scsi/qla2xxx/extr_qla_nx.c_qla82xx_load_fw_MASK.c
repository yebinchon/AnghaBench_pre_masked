
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {struct fw_blob* hablob; } ;
struct fw_blob {int * fw; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fw_blob* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct qla_hw_data*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct qla_hw_data*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(scsi_qla_host_t *VAR_9)
{
 int VAR_10;
 struct fw_blob *VAR_11;
 struct qla_hw_data *VAR_12 = VAR_9->hw;

 if (FUNC_4(VAR_9) != VAR_4) {
  FUNC_0(VAR_6, VAR_9, 0x009f,
      "Error during CRB initialization.\n");
  return VAR_3;
 }
 FUNC_8(500);


 VAR_10 = FUNC_5(VAR_12, VAR_1);
 VAR_10 &= ~((1 << 28) | (1 << 24));
 FUNC_7(VAR_12, VAR_1, VAR_10);






 if (VAR_5 == 2)
  goto try_blob_fw;

 FUNC_0(VAR_7, VAR_9, 0x00a0,
     "Attempting to load firmware from flash.\n");

 if (FUNC_3(VAR_12) == VAR_4) {
  FUNC_0(VAR_7, VAR_9, 0x00a1,
      "Firmware loaded successfully from flash.\n");
  return VAR_4;
 } else {
  FUNC_0(VAR_8, VAR_9, 0x0108,
      "Firmware load from flash failed.\n");
 }
try_blob_fw:
 FUNC_0(VAR_7, VAR_9, 0x00a2,
     "Attempting to load firmware from blob.\n");


 VAR_11 = VAR_12->hablob = FUNC_1(VAR_9);
 if (!VAR_11) {
  FUNC_0(VAR_6, VAR_9, 0x00a3,
      "Firmware image not present.\n");
  goto fw_load_failed;
 }


 if (FUNC_6(VAR_9,
  VAR_0)) {

  if (FUNC_6(VAR_9,
   VAR_2)) {
   FUNC_0(VAR_6, VAR_9, 0x00a4,
       "No valid firmware image found.\n");
   return VAR_3;
  }
 }

 if (FUNC_2(VAR_12) == VAR_4) {
  FUNC_0(VAR_7, VAR_9, 0x00a5,
      "Firmware loaded successfully from binary blob.\n");
  return VAR_4;
 } else {
  FUNC_0(VAR_6, VAR_9, 0x00a6,
      "Firmware load failed for binary blob.\n");
  VAR_11->fw = ((void*)0);
  VAR_11 = ((void*)0);
  goto fw_load_failed;
 }
 return VAR_4;

fw_load_failed:
 return VAR_3;
}
