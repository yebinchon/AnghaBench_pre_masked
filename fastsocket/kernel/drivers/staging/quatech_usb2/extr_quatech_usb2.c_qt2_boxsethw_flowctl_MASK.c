
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int,unsigned int,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_3,
  unsigned int VAR_4, bool VAR_5)
{
 __u8 VAR_6 = 0;
 __u8 VAR_7 = 0;
 __u16 VAR_8 = 0;

 if (VAR_5 == 1) {
  VAR_6 = VAR_1;


 } else {

  VAR_6 = 0;
 }
 VAR_8 = VAR_6 << 8;

 if (VAR_5 == 1) {
  VAR_7 = VAR_2;


 } else {

  VAR_7 = 0;
 }
 VAR_8 |= VAR_7;
 return FUNC_0(VAR_3->dev, FUNC_1(VAR_3->dev, 0),
   VAR_0, 0x40, VAR_8, VAR_4,
   ((void*)0), 0, 300);
}
