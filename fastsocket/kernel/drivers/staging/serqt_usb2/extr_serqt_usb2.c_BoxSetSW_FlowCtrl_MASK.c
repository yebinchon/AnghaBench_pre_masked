
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef unsigned char __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,unsigned char,unsigned char,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1, __u16 VAR_2,
        unsigned char VAR_3, unsigned char VAR_4)
{
 __u16 VAR_5;
 int VAR_6;

 VAR_5 = VAR_4 << 8;
 VAR_5 = (unsigned short)VAR_3;

 VAR_6 =
     FUNC_0(VAR_1->dev, FUNC_1(VAR_1->dev, 0),
       VAR_0, 0x40, VAR_5,
       VAR_2, ((void*)0), 0, 300);
 return VAR_6;

}
