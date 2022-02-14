
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int ,int ,int *,int ,int) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_2, __u16 VAR_3)
{
 int VAR_4;
 __u8 VAR_5;
 unsigned int VAR_6;
 VAR_5 = VAR_1;
 VAR_6 = FUNC_1(VAR_2->dev, 0);
 VAR_4 = FUNC_0(VAR_2->dev, VAR_6, VAR_0,
    VAR_5, 0, VAR_3, ((void*)0), 0, 5000);
 return VAR_4;
}
