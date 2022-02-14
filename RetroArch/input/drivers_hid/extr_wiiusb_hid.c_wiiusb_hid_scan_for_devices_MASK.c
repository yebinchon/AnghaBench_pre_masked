
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wiiusb_hid_t ;
struct TYPE_5__ {scalar_t__ vid; scalar_t__ pid; int device_id; } ;
typedef TYPE_1__ usb_device_entry ;
typedef unsigned int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(wiiusb_hid_t *VAR_2)
{
   unsigned VAR_3;
   u8 VAR_4;
   usb_device_entry *VAR_5 = (usb_device_entry *)
      FUNC_1(VAR_0, sizeof(*VAR_5));

   if (!VAR_5)
      goto error;

   if (FUNC_0(VAR_5, VAR_0, VAR_1, &VAR_4) < 0)
      goto error;

   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   {

      if (!FUNC_4(VAR_2, VAR_5[VAR_3].device_id))
         continue;

      if (VAR_5[VAR_3].vid > 0 && VAR_5[VAR_3].pid > 0)
         FUNC_3(VAR_2, &VAR_5[VAR_3]);
   }

error:
   if (VAR_5)
      FUNC_2(VAR_5);
}
