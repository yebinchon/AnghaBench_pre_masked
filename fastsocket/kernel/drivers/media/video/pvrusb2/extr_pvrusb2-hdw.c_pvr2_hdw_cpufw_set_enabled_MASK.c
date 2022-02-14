
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pvr2_hdw {int fw_size; int fw_cpu_flag; scalar_t__ fw_buffer; int big_lock; int usb_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,unsigned int,int,int,scalar_t__,int ,scalar_t__,int,int ) ;
 unsigned int FUNC_8 (int ,int ) ;

void FUNC_9(struct pvr2_hdw *VAR_4,
    int VAR_5,
    int VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 unsigned int VAR_9;
 FUNC_1(VAR_4->big_lock); do {
  if ((VAR_4->fw_buffer == ((void*)0)) == !VAR_6) break;

  if (!VAR_6) {
   FUNC_6(VAR_3,
       "Cleaning up after CPU firmware fetch");
   FUNC_2(VAR_4->fw_buffer);
   VAR_4->fw_buffer = ((void*)0);
   VAR_4->fw_size = 0;
   if (VAR_4->fw_cpu_flag) {


    FUNC_5(VAR_4,0);
   }
   break;
  }

  VAR_4->fw_cpu_flag = (VAR_5 != 2);
  if (VAR_4->fw_cpu_flag) {
   VAR_4->fw_size = (VAR_5 == 1) ? 0x4000 : 0x2000;
   FUNC_6(VAR_3,
       "Preparing to suck out CPU firmware"
       " (size=%u)", VAR_4->fw_size);
   VAR_4->fw_buffer = FUNC_3(VAR_4->fw_size,VAR_1);
   if (!VAR_4->fw_buffer) {
    VAR_4->fw_size = 0;
    break;
   }


   FUNC_5(VAR_4,1);




   FUNC_6(VAR_3,
       "Grabbing CPU firmware");
   VAR_9 = FUNC_8(VAR_4->usb_dev, 0);
   for(VAR_8 = 0; VAR_8 < VAR_4->fw_size;
       VAR_8 += 0x800) {
    VAR_7 = FUNC_7(VAR_4->usb_dev,VAR_9,
            0xa0,0xc0,
            VAR_8,0,
            VAR_4->fw_buffer+VAR_8,
            0x800,VAR_2);
    if (VAR_7 < 0) break;
   }

   FUNC_6(VAR_3,
       "Done grabbing CPU firmware");
  } else {
   FUNC_6(VAR_3,
       "Sucking down EEPROM contents");
   VAR_4->fw_buffer = FUNC_4(VAR_4);
   if (!VAR_4->fw_buffer) {
    FUNC_6(VAR_3,
        "EEPROM content suck failed.");
    break;
   }
   VAR_4->fw_size = VAR_0;
   FUNC_6(VAR_3,
       "Done sucking down EEPROM contents");
  }

 } while (0); FUNC_0(VAR_4->big_lock);
}
