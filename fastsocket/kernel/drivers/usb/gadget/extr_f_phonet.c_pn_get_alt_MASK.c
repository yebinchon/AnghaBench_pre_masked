
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_function {int dummy; } ;
struct phonet_port {int lock; int * usb; } ;
struct f_phonet {int dev; } ;
struct TYPE_4__ {unsigned int bInterfaceNumber; } ;
struct TYPE_3__ {unsigned int bInterfaceNumber; } ;


 int VAR_0 ;
 struct f_phonet* FUNC_0 (struct usb_function*) ;
 struct phonet_port* FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_function *VAR_3, unsigned VAR_4)
{
 struct f_phonet *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1.bInterfaceNumber)
  return 0;

 if (VAR_4 == VAR_2.bInterfaceNumber) {
  struct phonet_port *VAR_6 = FUNC_1(VAR_5->dev);
  u8 VAR_7;

  FUNC_2(&VAR_6->lock);
  VAR_7 = VAR_6->usb != ((void*)0);
  FUNC_3(&VAR_6->lock);
  return VAR_7;
 }

 return -VAR_0;
}
