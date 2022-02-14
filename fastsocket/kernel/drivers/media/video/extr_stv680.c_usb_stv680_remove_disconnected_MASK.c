
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_stv {int camera_name; TYPE_3__* scratch; TYPE_2__* sbuf; int ** urb; int wq; scalar_t__ streaming; TYPE_1__* frame; int * udev; } ;
struct TYPE_6__ {struct usb_stv* data; } ;
struct TYPE_5__ {struct usb_stv* data; } ;
struct TYPE_4__ {void* grabstate; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_stv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5 (struct usb_stv *VAR_3)
{
 int VAR_4;

 VAR_3->udev = ((void*)0);
 VAR_3->frame[0].grabstate = VAR_0;
 VAR_3->frame[1].grabstate = VAR_0;
 VAR_3->streaming = 0;

 FUNC_4 (&VAR_3->wq);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->urb[VAR_4]) {
   FUNC_3 (VAR_3->urb[VAR_4]);
   FUNC_2 (VAR_3->urb[VAR_4]);
   VAR_3->urb[VAR_4] = ((void*)0);
   FUNC_1(VAR_3->sbuf[VAR_4].data);
  }
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(VAR_3->scratch[VAR_4].data);
 FUNC_0 (0, "STV(i): %s disconnected", VAR_3->camera_name);


 FUNC_1(VAR_3);
}
