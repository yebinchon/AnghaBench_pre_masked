
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {int width; int height; int member_0; } ;
typedef TYPE_1__ VC_RECT_T ;
struct TYPE_9__ {int member_1; int member_2; int member_0; } ;
typedef TYPE_2__ VC_DISPMANX_ALPHA_T ;
struct TYPE_10__ {int width; int height; int element; } ;
typedef TYPE_3__ EGL_DISPMANX_WINDOW_T ;
typedef int DISPMANX_UPDATE_HANDLE_T ;
typedef int DISPMANX_ELEMENT_HANDLE_T ;
typedef int DISPMANX_DISPLAY_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,TYPE_1__*,int ,TYPE_1__*,int ,TYPE_2__*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(EGL_DISPMANX_WINDOW_T *VAR_3)
{
   int32_t VAR_4 = 0;
   DISPMANX_DISPLAY_HANDLE_T VAR_5;
   DISPMANX_ELEMENT_HANDLE_T VAR_6;
   DISPMANX_UPDATE_HANDLE_T VAR_7;
   VC_DISPMANX_ALPHA_T VAR_8 = {VAR_0, 255, 0};
   VC_RECT_T VAR_9 = {0};
   VC_RECT_T VAR_10 = {0};
   uint32_t VAR_11, VAR_12;
   uint32_t VAR_13 = 0;
   uint32_t VAR_14 = 0;

   VAR_4 = FUNC_0(0, &VAR_11, &VAR_12);
   if (VAR_4 != 0)
      return VAR_4;


   VAR_11 = 1280;
   VAR_12 = 720;
   VAR_10.width = VAR_11;
   VAR_10.height = VAR_12;
   VAR_9.width = VAR_11 << 16;
   VAR_9.height = VAR_12 << 16;

   VAR_5 = FUNC_1(VAR_13);
   VAR_7 = FUNC_3(0);
   VAR_6 = FUNC_2(VAR_7, VAR_5, VAR_14, &VAR_10, 0,
         &VAR_9, VAR_2, &VAR_8, ((void*)0), VAR_1);

   VAR_3->element = VAR_6;
   VAR_3->width = VAR_11;
   VAR_3->height = VAR_12;
   FUNC_4(VAR_7);

   return 0;
}
