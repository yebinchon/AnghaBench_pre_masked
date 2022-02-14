
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wusbhc {int ports_max; } ;
struct wusb_dev {int addr; } ;
struct TYPE_2__ {struct wusb_dev* wusb_dev; } ;


 TYPE_1__* FUNC_0 (struct wusbhc*,int) ;

__attribute__((used)) static struct wusb_dev *FUNC_1(struct wusbhc *VAR_0, u8 VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0xff)
  return ((void*)0);

 if (VAR_1 > 0) {
  int VAR_3 = (VAR_1 & ~0x80) - 2;
  if (VAR_3 < 0 || VAR_3 >= VAR_0->ports_max)
   return ((void*)0);
  return FUNC_0(VAR_0, VAR_3)->wusb_dev;
 }


 for (VAR_2 = 0; VAR_2 < VAR_0->ports_max; VAR_2++) {
  struct wusb_dev *VAR_4 = FUNC_0(VAR_0, VAR_2)->wusb_dev;
  if (VAR_4 && VAR_4->addr == VAR_1)
   return VAR_4;
 }
 return ((void*)0);
}
