
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*,int ) ;
 int FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(scsi_qla_host_t *VAR_9)
{
 int VAR_10 = VAR_6;
 int VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;
 struct qla_hw_data *VAR_15 = VAR_9->hw;
 int VAR_16 = 0, VAR_17 = 1;

 VAR_16 = FUNC_5(VAR_15);

 VAR_13 = FUNC_6(VAR_15, VAR_1);

 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  VAR_12 = FUNC_0(200);
  if (VAR_12) {
   FUNC_9(VAR_15, VAR_0,
    VAR_2);
   return VAR_5;
  }

  VAR_14 = FUNC_6(VAR_15, VAR_1);
  if (VAR_14 != VAR_13)
   VAR_17 = 0;
 }

 if (VAR_16) {

  if (VAR_17)
   FUNC_7(VAR_15);
  goto dev_initialize;
 } else {

  if (VAR_17) {

   FUNC_7(VAR_15);
   goto dev_initialize;
  } else

   goto dev_ready;
 }

 return VAR_10;

dev_initialize:

 FUNC_1(VAR_8, VAR_9, 0x009e,
     "HW State: INITIALIZING.\n");
 FUNC_9(VAR_15, VAR_0, VAR_3);

 FUNC_4(VAR_15);
 VAR_10 = FUNC_8(VAR_9);
 FUNC_3(VAR_15);

 if (VAR_10 != VAR_6) {
  FUNC_1(VAR_7, VAR_9, 0x00ad,
      "HW State: FAILED.\n");
  FUNC_2(VAR_15);
  FUNC_9(VAR_15, VAR_0, VAR_2);
  return VAR_10;
 }

dev_ready:
 FUNC_1(VAR_8, VAR_9, 0x00ae,
     "HW State: READY.\n");
 FUNC_9(VAR_15, VAR_0, VAR_4);

 return VAR_6;
}
