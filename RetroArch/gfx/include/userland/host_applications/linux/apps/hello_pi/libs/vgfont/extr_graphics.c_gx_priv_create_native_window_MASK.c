
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ VC_RECT_T ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_3__ VC_DISPMANX_ALPHA_T ;
struct TYPE_12__ {int width; int height; int element; } ;
struct TYPE_15__ {TYPE_1__ egl_win; } ;
typedef TYPE_4__ GX_NATIVE_WINDOW_T ;
typedef int GRAPHICS_RESOURCE_TYPE_T ;
typedef scalar_t__ DISPMANX_UPDATE_HANDLE_T ;
typedef int DISPMANX_DISPLAY_HANDLE_T ;
typedef TYPE_3__ DISPMANX_CLAMP_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (scalar_t__,int ,int ,TYPE_2__*,int ,TYPE_2__*,int ,TYPE_3__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(uint32_t VAR_2,
                                 uint32_t VAR_3, uint32_t VAR_4,
                                 GRAPHICS_RESOURCE_TYPE_T VAR_5,
                                 GX_NATIVE_WINDOW_T *VAR_6,
                                 void **VAR_7)
{
   int VAR_8;
   DISPMANX_DISPLAY_HANDLE_T VAR_9;
   VC_RECT_T VAR_10;
   VC_RECT_T VAR_11;
   DISPMANX_UPDATE_HANDLE_T VAR_12;
   *VAR_7 = ((void*)0);

   VAR_8 = FUNC_1(VAR_2, &VAR_9);
   if (VAR_8 < 0)
   {
      FUNC_0("Could not open display %d", VAR_2);
      goto fail_screen;
   }

   VAR_12 = FUNC_5(0);
   if (!VAR_12)
   {
      FUNC_0("Could not start update on screen %d", VAR_2);
      goto fail_update;
   }

   VAR_11.x = VAR_11.y = 0;
   VAR_11.width = VAR_3 << 16;
   VAR_11.height = VAR_4 << 16;

   VAR_10.x = VAR_10.y = 0;
   VAR_10.width = VAR_10.height = 1;

   VAR_6->egl_win.width = VAR_3;
   VAR_6->egl_win.height = VAR_4;
   VC_DISPMANX_ALPHA_T VAR_13;
   FUNC_3(&VAR_13, 0x0, sizeof(VC_DISPMANX_ALPHA_T));
   VAR_13.flags = VAR_0;

   DISPMANX_CLAMP_T VAR_14;
   FUNC_3(&VAR_14, 0x0, sizeof(DISPMANX_CLAMP_T));

   VAR_6->egl_win.element = FUNC_4(VAR_12, VAR_9,
      0 , &VAR_10,
      0 , &VAR_11,
      VAR_1,
      &VAR_13 ,
      &VAR_14 ,
      0 );

   if ( !VAR_6->egl_win.element )
   {
      FUNC_0("Could not add element %dx%d",VAR_3,VAR_4);
      FUNC_6(VAR_12);
      VAR_8 = -1;
   }



   *VAR_7 = (void*)VAR_12;

   return 0;

fail_update:
   FUNC_2(VAR_2);
fail_screen:
   return VAR_8;
}
