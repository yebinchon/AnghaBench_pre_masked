
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usb_gadget {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb_param; } ;
struct TYPE_3__ {int frame_n; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_0(&VAR_1->usb_param->frame_n);
 if (VAR_3 & 0x8000)
  VAR_3 = VAR_3 & 0x07ff;
 else
  VAR_3 = -VAR_0;

 return (int)VAR_3;
}
