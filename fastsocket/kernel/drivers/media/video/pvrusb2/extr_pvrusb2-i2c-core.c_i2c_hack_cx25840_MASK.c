
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pvr2_hdw {int i2c_cx25840_hack_state; int ** i2c_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*,int,int*,int,int*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_3,
       u8 VAR_4,u8 *VAR_5,u16 VAR_6,u8 *VAR_7,u16 VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 u8 VAR_11[2];
 int VAR_12 = VAR_3->i2c_cx25840_hack_state;

 if (!(VAR_8 || VAR_6)) {



  return 0;
 }

 if (VAR_12 == 3) {
  return FUNC_1(VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8);
 }
 if (VAR_6 == 0) {
  switch (VAR_12) {
  case 1: VAR_10 = 0x0100; break;
  case 2: VAR_10 = 0x0101; break;
  default: goto fail;
  }
 } else if (VAR_6 == 2) {
  VAR_10 = (VAR_5[0] << 8) | VAR_5[1];
  switch (VAR_10) {
  case 0x0100: VAR_12 = 1; break;
  case 0x0101: VAR_12 = 2; break;
  default: goto fail;
  }
 } else {
  goto fail;
 }
 if (!VAR_8) goto success;
 VAR_12 = 0;
 if (VAR_8 != 1) goto fail;



 VAR_11[0] = VAR_10 >> 8;
 VAR_11[1] = VAR_10;
 VAR_9 = FUNC_1(VAR_3,VAR_4,VAR_11,2,VAR_7,VAR_8);

 if ((VAR_9 != 0) || (*VAR_7 == 0x04) || (*VAR_7 == 0x0a)) {
  FUNC_2(VAR_2,
      "WARNING: Detected a wedged cx25840 chip;"
      " the device will not work.");
  FUNC_2(VAR_2,
      "WARNING: Try power cycling the pvrusb2 device.");
  FUNC_2(VAR_2,
      "WARNING: Disabling further access to the device"
      " to prevent other foul-ups.");

  VAR_3->i2c_func[0x44] = ((void*)0);
  FUNC_0(VAR_3);
  goto fail;
 }


 FUNC_2(VAR_1,"cx25840 appears to be OK.");
 VAR_12 = 3;

 success:
 VAR_3->i2c_cx25840_hack_state = VAR_12;
 return 0;

 fail:
 VAR_3->i2c_cx25840_hack_state = VAR_12;
 return -VAR_0;
}
