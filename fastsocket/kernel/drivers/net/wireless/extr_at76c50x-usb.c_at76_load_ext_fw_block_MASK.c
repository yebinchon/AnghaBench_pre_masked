
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int,void*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct usb_device *VAR_4, int VAR_5,
      void *VAR_6, int VAR_7)
{
 return FUNC_0(VAR_4, FUNC_1(VAR_4, 0), 0x0e,
          VAR_3 | VAR_1 | VAR_2,
          0x0802, VAR_5, VAR_6, VAR_7,
          VAR_0);
}
