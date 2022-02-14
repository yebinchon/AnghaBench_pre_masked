
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int removal_cb; int device_detected; } ;
typedef TYPE_1__ wiiusb_hid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int (*) (int,void*),void*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, void *VAR_2)
{
   wiiusb_hid_t *VAR_3 = (wiiusb_hid_t*)VAR_2;

   if (!VAR_3)
      return -1;



  if (!VAR_3->removal_cb)
    VAR_3->device_detected = 1;
  else
    VAR_3->removal_cb = 0;


   FUNC_0(VAR_0, FUNC_1, VAR_2);

   return 0;
}
