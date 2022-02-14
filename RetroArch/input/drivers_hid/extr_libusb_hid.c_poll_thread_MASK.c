
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int member_0; } ;
struct TYPE_2__ {int quit; } ;
typedef TYPE_1__ libusb_hid_t ;


 int FUNC_0 (int *,struct timeval*,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   libusb_hid_t *VAR_1 = (libusb_hid_t*)VAR_0;

   while (!VAR_1->quit)
   {
      struct timeval VAR_2 = {0};
      FUNC_0(((void*)0),
            &VAR_2, &VAR_1->quit);
   }
}
