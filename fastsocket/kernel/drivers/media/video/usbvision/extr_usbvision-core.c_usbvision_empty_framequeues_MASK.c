
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct usb_usbvision {TYPE_1__* frame; int outqueue; int inqueue; } ;
struct TYPE_2__ {scalar_t__ bytes_read; int grabstate; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct usb_usbvision *VAR_2)
{
 u32 VAR_3;

 FUNC_0(&(VAR_2->inqueue));
 FUNC_0(&(VAR_2->outqueue));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->frame[VAR_3].grabstate = VAR_1;
  VAR_2->frame[VAR_3].bytes_read = 0;
 }
}
