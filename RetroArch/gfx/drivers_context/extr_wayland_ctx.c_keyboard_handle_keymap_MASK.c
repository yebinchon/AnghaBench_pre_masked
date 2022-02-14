
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void* VAR_1,
      struct wl_keyboard* VAR_2,
      uint32_t VAR_3,
      int VAR_4,
      uint32_t VAR_5)
{
   (void)VAR_1;
   if (VAR_3 != VAR_0)
   {
      FUNC_2(VAR_4);
      return;
   }





   FUNC_2(VAR_4);

   FUNC_1("[Wayland]: Loaded keymap.\n");
}
