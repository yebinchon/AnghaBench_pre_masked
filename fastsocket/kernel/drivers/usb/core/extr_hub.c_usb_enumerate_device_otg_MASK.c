
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_otg_descriptor {int bmAttributes; } ;
struct usb_device {scalar_t__ parent; unsigned int portnum; int dev; struct usb_bus* bus; TYPE_2__* config; int * rawdescriptors; } ;
struct usb_bus {scalar_t__ root_hub; unsigned int otg_port; int b_hnp_enable; scalar_t__ is_b_host; } ;
struct TYPE_3__ {int wTotalLength; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ,void**) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_8)
{
 int VAR_9 = 0;
 return VAR_9;
}
