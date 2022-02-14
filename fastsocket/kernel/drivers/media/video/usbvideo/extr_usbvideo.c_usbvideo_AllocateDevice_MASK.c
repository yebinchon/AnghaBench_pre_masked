
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct uvd {int lock; TYPE_2__ vdev; int dp; scalar_t__ last_error; scalar_t__ remove_pending; scalar_t__ user; scalar_t__ uvd_used; TYPE_1__* sbuf; } ;
struct usbvideo {char* drvName; struct uvd* cam; } ;
struct TYPE_3__ {int * urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,struct uvd*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char*) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (struct uvd*) ;
 int FUNC_8 (struct uvd*) ;
 int FUNC_9 (struct usbvideo*) ;
 TYPE_2__ VAR_3 ;

struct uvd *FUNC_10(struct usbvideo *VAR_4)
{
 int VAR_5, VAR_6;
 struct uvd *VAR_7 = ((void*)0);

 if (VAR_4 == ((void*)0)) {
  FUNC_2("No usbvideo handle?");
  return ((void*)0);
 }

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6 == -1) {
  FUNC_2("IBM USB camera driver: Too many devices!");
  return ((void*)0);
 }
 VAR_7 = &VAR_4->cam[VAR_6];
 FUNC_1("Device entry #%d. at $%p", VAR_6, VAR_7);


 FUNC_8(VAR_7);

 FUNC_3(&VAR_7->lock);
 for (VAR_5=0; VAR_5 < VAR_2; VAR_5++) {
  VAR_7->sbuf[VAR_5].urb = FUNC_6(VAR_0, VAR_1);
  if (VAR_7->sbuf[VAR_5].urb == ((void*)0)) {
   FUNC_2("usb_alloc_urb(%d.) failed.", VAR_0);
   VAR_7->uvd_used = 0;
   VAR_7 = ((void*)0);
   goto allocate_done;
  }
 }
 VAR_7->user=0;
 VAR_7->remove_pending = 0;
 VAR_7->last_error = 0;
 FUNC_0(&VAR_7->dp);


 VAR_7->vdev = VAR_3;
 FUNC_5(VAR_7->vdev.name, "%.20s USB Camera", VAR_4->drvName);




allocate_done:
 FUNC_4(&VAR_7->lock);
 FUNC_7(VAR_7);
 return VAR_7;
}
