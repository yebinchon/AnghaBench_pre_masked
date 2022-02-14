
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct usb_serial *VAR_0,
         __u8 VAR_1, __u8 VAR_2,
         __u16 VAR_3, __u16 VAR_4, char *VAR_5)
{
 FUNC_0(VAR_0->dev,
   FUNC_1(VAR_0->dev, 0),
   VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5, 0x0000001, 1000);
}
