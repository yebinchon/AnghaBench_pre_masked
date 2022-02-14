
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,unsigned short,unsigned char,void*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1,
  unsigned char VAR_2, unsigned short VAR_3,
  __u8 *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_1->dev, FUNC_1(VAR_1->dev, 0),
   VAR_0, 0xC0, VAR_3,
   VAR_2, (void *)VAR_4, sizeof(*VAR_4), 300);
 return VAR_5;
}
