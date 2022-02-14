
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int,unsigned char) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,unsigned char*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(__u16 VAR_2, __u16 VAR_3,
  struct usb_serial *VAR_4, unsigned char *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4->dev, FUNC_2(VAR_4->dev, 0),
   VAR_0, VAR_1,
   VAR_2, VAR_3, VAR_5, 1, 100);
 FUNC_0("0x%x:0x%x:0x%x:0x%x  %d - %x", VAR_1,
   VAR_0, VAR_2, VAR_3, VAR_6, VAR_5[0]);
 return VAR_6;
}
