
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_stv {TYPE_3__* udev; } ;
struct TYPE_7__ {TYPE_2__* actconfig; } ;
struct TYPE_5__ {int bConfigurationValue; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_3 (struct usb_stv *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{

 if (VAR_1 != VAR_0->udev->actconfig->desc.bConfigurationValue
   || FUNC_1 (VAR_0->udev) < 0) {
  FUNC_0 (1, "STV(e): FAILED to reset configuration %i", VAR_1);
  return -1;
 }
 if (FUNC_2 (VAR_0->udev, VAR_2, VAR_3) < 0) {
  FUNC_0 (1, "STV(e): FAILED to set alternate interface %i", VAR_3);
  return -1;
 }
 return 0;
}
