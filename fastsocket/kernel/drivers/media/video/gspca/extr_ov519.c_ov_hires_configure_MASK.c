
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; int sensor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sd*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4->bridge != VAR_0) {
  FUNC_1("error hires sensors only supported with ovfx2");
  return;
 }

 FUNC_0(VAR_1, "starting ov hires configuration");


 VAR_5 = FUNC_2(VAR_4, 0x0a);
 VAR_6 = FUNC_2(VAR_4, 0x0b);

 if (VAR_5 == 0x96 && VAR_6 == 0x40) {
  FUNC_0(VAR_1, "Sensor is an OV2610");
  VAR_4->sensor = VAR_2;
 } else if (VAR_5 == 0x36 && (VAR_6 & 0x0f) == 0x00) {
  FUNC_0(VAR_1, "Sensor is an OV3610");
  VAR_4->sensor = VAR_3;
 } else {
  FUNC_1("Error unknown sensor type: %02x%02x",
   VAR_5, VAR_6);
 }
}
