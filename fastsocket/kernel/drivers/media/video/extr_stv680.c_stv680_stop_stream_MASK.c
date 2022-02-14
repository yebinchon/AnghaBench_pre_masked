
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_stv {TYPE_2__* scratch; TYPE_1__* sbuf; int ** urb; scalar_t__ streaming; int udev; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (struct usb_stv *VAR_2)
{
 int VAR_3;

 if (!VAR_2->streaming || !VAR_2->udev)
  return 1;

 VAR_2->streaming = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->urb[VAR_3]) {
   FUNC_2 (VAR_2->urb[VAR_3]);
   FUNC_1 (VAR_2->urb[VAR_3]);
   VAR_2->urb[VAR_3] = ((void*)0);
   FUNC_0(VAR_2->sbuf[VAR_3].data);
  }
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_2->scratch[VAR_3].data);
  VAR_2->scratch[VAR_3].data = ((void*)0);
 }

 return 0;
}
