
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {void* sensor; int invert_led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sd*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 FUNC_0(VAR_1, "starting OV7xx0 configuration");


 VAR_12 = FUNC_2(VAR_11, VAR_2);



 if (VAR_12 < 0) {
  FUNC_0(VAR_0, "Error detecting sensor type");
  return;
 }
 if ((VAR_12 & 3) == 3) {

  VAR_13 = FUNC_2(VAR_11, 0x0a);
  VAR_14 = FUNC_2(VAR_11, 0x0b);

  if (VAR_13 == 0x76 && (VAR_14 & 0xf0) == 0x70) {
   FUNC_0(VAR_1, "Sensor is an OV76%02x", VAR_14);
   VAR_11->sensor = VAR_9;
  } else {
   FUNC_0(VAR_1, "Sensor is an OV7610");
   VAR_11->sensor = VAR_3;
  }
 } else if ((VAR_12 & 3) == 1) {

  if (FUNC_2(VAR_11, 0x15) & 1) {
   FUNC_0(VAR_1, "Sensor is an OV7620AE");
   VAR_11->sensor = VAR_5;
  } else {
   FUNC_0(VAR_1, "Sensor is an OV76BE");
   VAR_11->sensor = VAR_10;
  }
 } else if ((VAR_12 & 3) == 0) {

  VAR_13 = FUNC_2(VAR_11, 0x0a);
  if (VAR_13 < 0) {
   FUNC_0(VAR_0, "Error detecting camera chip PID");
   return;
  }
  VAR_14 = FUNC_2(VAR_11, 0x0b);
  if (VAR_14 < 0) {
   FUNC_0(VAR_0, "Error detecting camera chip VER");
   return;
  }
  if (VAR_13 == 0x76) {
   switch (VAR_14) {
   case 0x30:
    FUNC_1("Sensor is an OV7630/OV7635");
    FUNC_1("7630 is not supported by this driver");
    return;
   case 0x40:
    FUNC_0(VAR_1, "Sensor is an OV7645");
    VAR_11->sensor = VAR_6;
    break;
   case 0x45:
    FUNC_0(VAR_1, "Sensor is an OV7645B");
    VAR_11->sensor = VAR_6;
    break;
   case 0x48:
    FUNC_0(VAR_1, "Sensor is an OV7648");
    VAR_11->sensor = VAR_7;
    break;
   case 0x60:
    FUNC_0(VAR_1, "Sensor is a OV7660");
    VAR_11->sensor = VAR_8;
    VAR_11->invert_led = 0;
    break;
   default:
    FUNC_0(VAR_1, "Unknown sensor: 0x76%x", VAR_14);
    return;
   }
  } else {
   FUNC_0(VAR_1, "Sensor is an OV7620");
   VAR_11->sensor = VAR_4;
  }
 } else {
  FUNC_1("Unknown image sensor version: %d", VAR_12 & 3);
 }
}
