
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int monitor; } ;
typedef TYPE_1__ udev_input_t ;
struct udev_device {int dummy; } ;
typedef enum udev_input_dev_type { ____Placeholder_udev_input_dev_type } udev_input_dev_type ;
typedef int device_handle_cb ;


 int FUNC_0 (char*,int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (struct udev_device*) ;
 char* FUNC_3 (struct udev_device*) ;
 char* FUNC_4 (struct udev_device*,char*) ;
 int FUNC_5 (struct udev_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int,char const*,int ) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 struct udev_device* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(udev_input_t *VAR_6)
{
   device_handle_cb VAR_7;
   enum udev_input_dev_type VAR_8 = VAR_0;
   const char *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   const char *VAR_11 = ((void*)0);
   const char *VAR_12 = ((void*)0);
   const char *VAR_13 = ((void*)0);
   struct udev_device *VAR_14 = FUNC_8(
         VAR_6->monitor);

   if (!VAR_14)
      return;

   VAR_9 = FUNC_4(VAR_14, "ID_INPUT_KEY");
   VAR_10 = FUNC_4(VAR_14, "ID_INPUT_MOUSE");
   VAR_11 = FUNC_4(VAR_14, "ID_INPUT_TOUCHPAD");
   VAR_12 = FUNC_2(VAR_14);
   VAR_13 = FUNC_3(VAR_14);

   if (VAR_9 && FUNC_1(VAR_9, "1") && VAR_13)
   {

      VAR_8 = VAR_0;
      VAR_7 = VAR_4;
   }
   else if (VAR_10 && FUNC_1(VAR_10, "1") && VAR_13)
   {
      VAR_8 = VAR_1;
      VAR_7 = VAR_5;
   }
   else if (VAR_11 && FUNC_1(VAR_11, "1") && VAR_13)
   {
      VAR_8 = VAR_2;
      VAR_7 = VAR_5;
   }
   else
      goto end;

   if (FUNC_1(VAR_12, "add"))
   {
      FUNC_0("[udev]: Hotplug add %s: %s.\n",
            VAR_3[VAR_8], VAR_13);
      FUNC_6(VAR_6, VAR_8, VAR_13, VAR_7);
   }
   else if (FUNC_1(VAR_12, "remove"))
   {
      FUNC_0("[udev]: Hotplug remove %s: %s.\n",
            VAR_3[VAR_8], VAR_13);
      FUNC_7(VAR_6, VAR_13);
   }

end:
   FUNC_5(VAR_14);
}
