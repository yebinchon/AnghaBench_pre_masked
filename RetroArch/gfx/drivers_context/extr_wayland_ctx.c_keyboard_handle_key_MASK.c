
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_keyboard {int dummy; } ;
struct TYPE_3__ {int key_state; } ;
struct TYPE_4__ {TYPE_1__ input; } ;
typedef TYPE_2__ gfx_ctx_wayland_data_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_3,
      struct wl_keyboard *VAR_4,
      uint32_t VAR_5,
      uint32_t VAR_6,
      uint32_t VAR_7,
      uint32_t VAR_8)
{
   (void)VAR_5;
   (void)VAR_6;
   (void)VAR_4;

   int VAR_9 = 1;
   gfx_ctx_wayland_data_t *VAR_10 = (gfx_ctx_wayland_data_t*)VAR_3;

   if (VAR_8 == VAR_1)
   {
      FUNC_1(VAR_10->input.key_state, VAR_7);
      VAR_9 = 1;
   }
   else if (VAR_8 == VAR_2)
   {
      FUNC_0(VAR_10->input.key_state, VAR_7);
      VAR_9 = 0;
   }





   FUNC_3(VAR_9,
   FUNC_4(VAR_7),
         0, 0, VAR_0);
}
