
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct stk_camera*,int ,int ) ;
 scalar_t__ FUNC_4 (struct stk_camera*,int ,int*) ;
 scalar_t__ FUNC_5 (struct stk_camera*,int ,int ) ;
 int FUNC_6 (struct stk_camera*,int ) ;

int FUNC_7(struct stk_camera *VAR_12)
{
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;

 if (FUNC_3(VAR_12, VAR_9, VAR_10)
  || FUNC_3(VAR_12, VAR_8, VAR_7)
  || FUNC_5(VAR_12, VAR_2, VAR_0)) {
  FUNC_0("Sensor resetting failed\n");
  return -VAR_1;
 }
 FUNC_2(10);

 if (FUNC_4(VAR_12, VAR_3, &VAR_14)
     || FUNC_4(VAR_12, VAR_4, &VAR_13)) {
  FUNC_0("Strange error reading sensor ID\n");
  return -VAR_1;
 }
 if (VAR_14 != 0x7f || VAR_13 != 0xa2) {
  FUNC_0("Huh? you don't have a sensor from ovt\n");
  return -VAR_1;
 }
 if (FUNC_4(VAR_12, VAR_5, &VAR_14)
     || FUNC_4(VAR_12, VAR_6, &VAR_13)) {
  FUNC_0("Could not read sensor model\n");
  return -VAR_1;
 }
 FUNC_6(VAR_12, VAR_11);
 FUNC_2(10);
 FUNC_1("OmniVision sensor detected, id %02X%02X"
  " at address %x\n", VAR_14, VAR_13, VAR_7);
 return 0;
}
