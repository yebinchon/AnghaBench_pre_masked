
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct usb_serial *VAR_0, int VAR_1,
          __u8 VAR_2, __u8 VAR_3,
          __u16 VAR_4, __u16 VAR_5, __u8 VAR_6,
          char *VAR_7)
{
 int VAR_8;
 VAR_8 = FUNC_1(VAR_0->dev,
     FUNC_2(VAR_0->dev, 0),
     VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_7, 0x0000001, 1000);
 if (VAR_8)
  FUNC_0("%03d < %d bytes [0x%02X]", VAR_1, VAR_8,
      ((unsigned char *)VAR_7)[0]);
 else
  FUNC_0("%03d < 0 bytes", VAR_1);
}
