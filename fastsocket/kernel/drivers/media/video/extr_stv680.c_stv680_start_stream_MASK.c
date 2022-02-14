
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_stv {int streaming; int maxframesize; TYPE_3__* scratch; TYPE_2__* sbuf; struct urb** urb; scalar_t__ framecount; int rawbufsize; int bulk_in_endpointAddr; int udev; scalar_t__ scratch_overflow; scalar_t__ scratch_use; scalar_t__ scratch_next; TYPE_1__* frame; scalar_t__ fbuf; } ;
struct urb {int dummy; } ;
struct TYPE_6__ {int * data; int state; } ;
struct TYPE_5__ {int * data; } ;
struct TYPE_4__ {scalar_t__ curpix; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ) ;
 int VAR_6 ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int ,int ,int *,int ,int ,struct usb_stv*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_9 (struct usb_stv *VAR_7)
{
 struct urb *VAR_8;
 int VAR_9 = 0, VAR_10;

 VAR_7->streaming = 1;


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_7->frame[VAR_10].data = VAR_7->fbuf + VAR_10 * VAR_7->maxframesize;
  VAR_7->frame[VAR_10].curpix = 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_7->sbuf[VAR_10].data = FUNC_2 (VAR_7->rawbufsize, VAR_2);
  if (VAR_7->sbuf[VAR_10].data == ((void*)0)) {
   FUNC_0 (0, "STV(e): Could not kmalloc raw data buffer %i", VAR_10);
   goto nomem_err;
  }
 }

 VAR_7->scratch_next = 0;
 VAR_7->scratch_use = 0;
 VAR_7->scratch_overflow = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_7->scratch[VAR_10].data = FUNC_2 (VAR_7->rawbufsize, VAR_2);
  if (VAR_7->scratch[VAR_10].data == ((void*)0)) {
   FUNC_0 (0, "STV(e): Could not kmalloc raw scratch buffer %i", VAR_10);
   goto nomem_err;
  }
  VAR_7->scratch[VAR_10].state = VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = FUNC_3 (0, VAR_2);
  if (!VAR_8)
   goto nomem_err;


  FUNC_4 (VAR_8, VAR_7->udev,
       FUNC_7 (VAR_7->udev, VAR_7->bulk_in_endpointAddr),
       VAR_7->sbuf[VAR_10].data, VAR_7->rawbufsize,
       VAR_6, VAR_7);
  VAR_7->urb[VAR_10] = VAR_8;
  VAR_9 = FUNC_8 (VAR_7->urb[VAR_10], VAR_2);
  if (VAR_9) {
   FUNC_0 (0, "STV(e): urb burned down with err "
       "%d in start stream %d", VAR_9, VAR_10);
   goto nomem_err;
  }
 }

 VAR_7->framecount = 0;
 return 0;

 nomem_err:
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_6(VAR_7->urb[VAR_10]);
  FUNC_5(VAR_7->urb[VAR_10]);
  VAR_7->urb[VAR_10] = ((void*)0);
  FUNC_1(VAR_7->sbuf[VAR_10].data);
  VAR_7->sbuf[VAR_10].data = ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_1(VAR_7->scratch[VAR_10].data);
  VAR_7->scratch[VAR_10].data = ((void*)0);
 }
 return -VAR_1;

}
