
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbdevfs_hub_portinfo {int nports; int * port; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int maxchild; TYPE_1__** children; int devnum; } ;
struct TYPE_2__ {int devnum; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct usb_interface *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_0 (VAR_2);


 switch (VAR_3) {
 case 128: {
  struct usbdevfs_hub_portinfo *VAR_6 = VAR_4;
  int VAR_7;

  FUNC_1(&VAR_1);
  if (VAR_5->devnum <= 0)
   VAR_6->nports = 0;
  else {
   VAR_6->nports = VAR_5->maxchild;
   for (VAR_7 = 0; VAR_7 < VAR_6->nports; VAR_7++) {
    if (VAR_5->children[VAR_7] == ((void*)0))
     VAR_6->port[VAR_7] = 0;
    else
     VAR_6->port[VAR_7] =
      VAR_5->children[VAR_7]->devnum;
   }
  }
  FUNC_2(&VAR_1);

  return VAR_6->nports + 1;
  }

 default:
  return -VAR_0;
 }
}
