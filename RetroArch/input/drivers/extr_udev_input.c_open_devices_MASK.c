
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int udev; } ;
typedef TYPE_1__ udev_input_t ;
struct udev_list_entry {int dummy; } ;
struct udev_enumerate {int dummy; } ;
struct udev_device {int dummy; } ;
typedef enum udev_input_dev_type { ____Placeholder_udev_input_dev_type } udev_input_dev_type ;
typedef int device_handle_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (char*,char*,int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (struct udev_device*) ;
 struct udev_device* FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct udev_device*) ;
 int FUNC_8 (struct udev_enumerate*,char const*,char*) ;
 struct udev_list_entry* FUNC_9 (struct udev_enumerate*) ;
 struct udev_enumerate* FUNC_10 (int ) ;
 int FUNC_11 (struct udev_enumerate*) ;
 int FUNC_12 (struct udev_enumerate*) ;
 int FUNC_13 (TYPE_1__*,int,char const*,int ) ;
 char* FUNC_14 (struct udev_list_entry*) ;
 struct udev_list_entry* FUNC_15 (struct udev_list_entry*) ;

__attribute__((used)) static bool FUNC_16(udev_input_t *VAR_5,
      enum udev_input_dev_type VAR_6, device_handle_cb VAR_7)
{
   const char *VAR_8 = VAR_4[VAR_6];
   struct udev_list_entry *VAR_9 = ((void*)0);
   struct udev_list_entry *VAR_10 = ((void*)0);
   struct udev_enumerate *VAR_11 = FUNC_10(VAR_5->udev);
   int VAR_12 = 0;

   if (!VAR_11)
      return 0;

   FUNC_8(VAR_11, VAR_8, "1");
   FUNC_11(VAR_11);
   VAR_9 = FUNC_9(VAR_11);

   for (VAR_10 = VAR_9; VAR_10; VAR_10 = FUNC_15(VAR_10))
   {
      const char *VAR_13 = FUNC_14(VAR_10);



      struct udev_device *VAR_14 = FUNC_6(VAR_5->udev, VAR_13);
      const char *VAR_15 = FUNC_5(VAR_14);

      if (VAR_15)
      {
         int VAR_16 = FUNC_3(VAR_15, VAR_1 | VAR_0);

         if (VAR_16 != -1)
         {
            if (!FUNC_13(VAR_5, VAR_6, VAR_15, VAR_7))
               FUNC_0("[udev] Failed to open device: %s (%s).\n",
                     VAR_15, FUNC_4(VAR_3));
            else
               FUNC_1("[udev]: %s #%d (%s).\n",
                     VAR_6 == VAR_2 ? "Keyboard" : "Mouse",
                     VAR_12++, VAR_15);
            FUNC_2(VAR_16);
         }
      }

      FUNC_7(VAR_14);
   }

   FUNC_12(VAR_11);
   return 1;
}
