
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef void* u16 ;
struct cx231xx {int dummy; } ;
struct VENDOR_REQUEST_IN {int direction; scalar_t__ wLength; scalar_t__* pBuff; scalar_t__ bData; void* wIndex; int bRequest; void* wValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cx231xx*,struct VENDOR_REQUEST_IN*) ;
 int FUNC_2 (scalar_t__*,int,scalar_t__) ;

int FUNC_3(struct cx231xx *VAR_6, u32 VAR_7, u8 *VAR_8,
     u8 VAR_9, u8 VAR_10, u8 VAR_11)
{
 int VAR_12 = 0;
 struct VENDOR_REQUEST_IN VAR_13;


 VAR_13.wValue = (u16) (VAR_7 >> 16 & 0xffff);


 if (!VAR_10) {
  if (VAR_11)
   VAR_13.bRequest = VAR_3;
  else
   VAR_13.bRequest = VAR_5;
 } else {
  if (VAR_11)
   VAR_13.bRequest = VAR_2;
  else
   VAR_13.bRequest = VAR_4;
 }


 VAR_13.wIndex = (u16) (VAR_7 & 0xffff);


 VAR_13.wLength = VAR_9;


 VAR_13.bData = 0;


 VAR_13.pBuff = VAR_8;


 if (VAR_11) {
  VAR_13.direction = VAR_0;
  FUNC_2(VAR_13.pBuff, 0x00, VAR_13.wLength);
 } else
  VAR_13.direction = VAR_1;



 VAR_12 = FUNC_1(VAR_6, &VAR_13);
 if (VAR_12 < 0) {
  FUNC_0
      ("UsbInterface::sendCommand, failed with status -%d\n",
       VAR_12);
 }

 return VAR_12;
}
