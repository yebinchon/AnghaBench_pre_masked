
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,unsigned short,unsigned short,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1, unsigned short VAR_2,
        unsigned short VAR_3, unsigned char VAR_4)
{
 int VAR_5;
 unsigned short VAR_6;

 VAR_6 = (VAR_4 << 8) + VAR_2;

 VAR_5 =
     FUNC_0(VAR_1->dev, FUNC_1(VAR_1->dev, 0),
       VAR_0, 0x40, VAR_3,
       VAR_6, ((void*)0), 0, 300);

 return VAR_5;
}
