
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int last_error; int ifaceAltInactive; int iface; int * dev; int remove_pending; TYPE_1__* sbuf; scalar_t__ user_data; scalar_t__ streaming; } ;
struct konicawc {int * sts_urb; int * last_data_urb; } ;
struct TYPE_2__ {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct uvd *VAR_1)
{
 int VAR_2, VAR_3;
 struct konicawc *VAR_4;

 if ((VAR_1 == ((void*)0)) || (!VAR_1->streaming) || (VAR_1->dev == ((void*)0)))
  return;

 FUNC_1(VAR_1);
 VAR_1->streaming = 0;
 VAR_4 = (struct konicawc *)VAR_1->user_data;
 VAR_4->last_data_urb = ((void*)0);


 for (VAR_2=0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(VAR_1->sbuf[VAR_2].urb);
  FUNC_2(VAR_4->sts_urb[VAR_2]);
 }

 if (!VAR_1->remove_pending) {

  VAR_3 = FUNC_3(VAR_1->dev, VAR_1->iface, VAR_1->ifaceAltInactive);
  if (VAR_3 < 0) {
   FUNC_0("usb_set_interface() error %d.", VAR_3);
   VAR_1->last_error = VAR_3;
  }
 }
}
