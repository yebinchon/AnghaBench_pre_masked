
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ctrlrequest {int wLength; int wIndex; int wValue; int bRequest; int bRequestType; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(u8 VAR_1, const struct usb_ctrlrequest *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_3, sizeof(VAR_3),
     "%02X %02X %04X %04X %d", VAR_2->bRequestType,
     VAR_2->bRequest, FUNC_1(VAR_2->wValue),
     FUNC_1(VAR_2->wIndex), FUNC_1(VAR_2->wLength));
  FUNC_0(VAR_1, "SETUP", 0, VAR_3);
 }
}
