
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct cmd_firmware_vers_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int ,int ,void*,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static bool FUNC_5(struct usb_device *VAR_8, int *VAR_9)
{
 void *VAR_10;
 int VAR_11;
 struct cmd_firmware_vers_s *VAR_12;

 VAR_10 = FUNC_2(sizeof(*VAR_12) + sizeof(u32), VAR_2);
 if (!VAR_10)
  return -VAR_0;
 VAR_11 = FUNC_3(VAR_8,
    FUNC_4(VAR_8, 0),
    VAR_3 | VAR_1,
    VAR_5 | VAR_7 | VAR_6,
    0,
    0,
    VAR_10,
    sizeof(*VAR_12) + sizeof(u32),
    VAR_4);
 FUNC_1(VAR_10);

 if (VAR_11 < 0) {
  *VAR_9 = 1;
  return FUNC_0(VAR_8);
 }
 return VAR_11;
}
