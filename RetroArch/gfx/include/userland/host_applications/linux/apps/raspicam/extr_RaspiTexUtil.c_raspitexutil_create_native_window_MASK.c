
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int width; int height; int y; int x; int member_0; } ;
typedef TYPE_2__ VC_RECT_T ;
struct TYPE_11__ {int member_1; int opacity; int member_2; int member_0; } ;
typedef TYPE_3__ VC_DISPMANX_ALPHA_T ;
struct TYPE_9__ {int width; int height; scalar_t__ element; } ;
struct TYPE_12__ {int width; int height; scalar_t__ disp; TYPE_1__ win; int * native_window; int y; int x; int opacity; } ;
typedef TYPE_4__ RASPITEX_STATE ;
typedef int EGLNativeWindowType ;
typedef scalar_t__ DISPMANX_UPDATE_HANDLE_T ;
typedef scalar_t__ DISPMANX_ELEMENT_HANDLE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,TYPE_2__*,int ,TYPE_2__*,int ,TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ,int ,int,int,int ,int ,int,int) ;

int FUNC_6(RASPITEX_STATE *VAR_5)
{
   VC_DISPMANX_ALPHA_T VAR_6 = {VAR_0, 255, 0};
   VC_RECT_T VAR_7 = {0};
   VC_RECT_T VAR_8 = {0};
   uint32_t VAR_9 = 0;
   uint32_t VAR_10 = 0;
   DISPMANX_ELEMENT_HANDLE_T VAR_11;
   DISPMANX_UPDATE_HANDLE_T VAR_12;

   VAR_6.opacity = VAR_5->opacity;
   VAR_8.x = VAR_5->x;
   VAR_8.y = VAR_5->y;
   VAR_8.width = VAR_5->width;
   VAR_8.height = VAR_5->height;

   FUNC_5("%s: %d,%d,%d,%d %d,%d,0x%x,0x%x", VAR_4,
                  VAR_7.x, VAR_7.y, VAR_7.width, VAR_7.height,
                  VAR_8.x, VAR_8.y, VAR_8.width, VAR_8.height);

   VAR_7.width = VAR_8.width << 16;
   VAR_7.height = VAR_8.height << 16;

   VAR_5->disp = FUNC_0(VAR_9);
   if (VAR_5->disp == VAR_1)
   {
      FUNC_4("Failed to open display handle");
      goto error;
   }

   VAR_12 = FUNC_2(0);
   if (VAR_12 == VAR_1)
   {
      FUNC_4("Failed to open update handle");
      goto error;
   }

   VAR_11 = FUNC_1(VAR_12, VAR_5->disp, VAR_10,
                                  &VAR_8, 0, &VAR_7, VAR_3, &VAR_6, ((void*)0),
                                  VAR_2);
   if (VAR_11 == VAR_1)
   {
      FUNC_4("Failed to create element handle");
      goto error;
   }

   VAR_5->win.element = VAR_11;
   VAR_5->win.width = VAR_5->width;
   VAR_5->win.height = VAR_5->height;
   FUNC_3(VAR_12);

   VAR_5->native_window = (EGLNativeWindowType*) &VAR_5->win;

   return 0;
error:
   return -1;
}
