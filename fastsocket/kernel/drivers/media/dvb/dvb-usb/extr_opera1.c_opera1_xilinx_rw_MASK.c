
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct usb_device*,unsigned int,int,int,int,int,int*,int,int) ;
 unsigned int FUNC_2 (struct usb_device*,int ) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_6, u8 VAR_7, u16 VAR_8,
       u8 * VAR_9, u16 VAR_10, int VAR_11)
{
 int VAR_12;
 u8 VAR_13;
 u8 VAR_14[VAR_10];

 unsigned int VAR_15 = (VAR_11 == VAR_0) ?
  FUNC_2(VAR_6,0) : FUNC_3(VAR_6, 0);
 u8 VAR_16 = (VAR_11 == VAR_0) ? VAR_3 : VAR_4;

 if (VAR_11 == VAR_2)
  FUNC_0(VAR_14, VAR_9, VAR_10);
 VAR_12 =
  FUNC_1(VAR_6, VAR_15, VAR_7, VAR_16 | VAR_5,
   VAR_8, 0x0, VAR_14, VAR_10, 2000);

 if (VAR_7 == VAR_1) {
  if (FUNC_1(VAR_6, FUNC_2(VAR_6, 0),
    VAR_1, VAR_3 | VAR_5,
    0x01, 0x0, &VAR_13, 1, 2000)<1 || VAR_13!=0x08)
     return 0;
 }
 if (VAR_11 == VAR_0)
  FUNC_0(VAR_9, VAR_14, VAR_10);
 return VAR_12;
}
