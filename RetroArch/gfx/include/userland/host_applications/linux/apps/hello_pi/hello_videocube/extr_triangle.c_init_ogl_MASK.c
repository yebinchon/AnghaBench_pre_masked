
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ VC_RECT_T ;
struct TYPE_10__ {scalar_t__ display; scalar_t__ context; int screen_width; int screen_height; int surface; } ;
struct TYPE_9__ {int width; int height; int element; } ;
typedef int EGLint ;
typedef TYPE_2__ EGL_DISPMANX_WINDOW_T ;
typedef int EGLConfig ;
typedef scalar_t__ EGLBoolean ;
typedef int DISPMANX_UPDATE_HANDLE_T ;
typedef int DISPMANX_ELEMENT_HANDLE_T ;
typedef int DISPMANX_DISPLAY_HANDLE_T ;
typedef TYPE_3__ CUBE_STATE_T ;


 int VAR_0 ;


 int VAR_1 ;

 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int const*,int *,int,int*) ;
 int FUNC_7 (float,float,float,float) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int*,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,TYPE_1__*,int ,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(CUBE_STATE_T *VAR_8)
{
   int32_t VAR_9 = 0;
   EGLBoolean VAR_10;
   EGLint VAR_11;

   static EGL_DISPMANX_WINDOW_T VAR_12;

   DISPMANX_ELEMENT_HANDLE_T VAR_13;
   DISPMANX_DISPLAY_HANDLE_T VAR_14;
   DISPMANX_UPDATE_HANDLE_T VAR_15;
   VC_RECT_T VAR_16;
   VC_RECT_T VAR_17;

   static const EGLint VAR_18[] =
   {
      130, 8,
      132, 8,
      134, 8,
      135, 8,
      133, 16,

      129, 128,
      131
   };

   EGLConfig VAR_19;


   VAR_8->display = FUNC_3(VAR_1);
   FUNC_0(VAR_8->display!=VAR_4);


   VAR_10 = FUNC_4(VAR_8->display, ((void*)0), ((void*)0));
   FUNC_0(VAR_2 != VAR_10);



   VAR_10 = FUNC_6(VAR_8->display, VAR_18, &VAR_19, 1, &VAR_11);
   FUNC_0(VAR_2 != VAR_10);


   VAR_8->context = FUNC_1(VAR_8->display, VAR_19, VAR_3, ((void*)0));
   FUNC_0(VAR_8->context!=VAR_3);


   VAR_9 = FUNC_10(0 , &VAR_8->screen_width, &VAR_8->screen_height);
   FUNC_0( VAR_9 >= 0 );

   VAR_16.x = 0;
   VAR_16.y = 0;
   VAR_16.width = VAR_8->screen_width;
   VAR_16.height = VAR_8->screen_height;

   VAR_17.x = 0;
   VAR_17.y = 0;
   VAR_17.width = VAR_8->screen_width << 16;
   VAR_17.height = VAR_8->screen_height << 16;

   VAR_14 = FUNC_11( 0 );
   VAR_15 = FUNC_13( 0 );

   VAR_13 = FUNC_12 ( VAR_15, VAR_14,
      0 , &VAR_16, 0 ,
      &VAR_17, VAR_0, 0 , 0 , 0 );

   VAR_12.element = VAR_13;
   VAR_12.width = VAR_8->screen_width;
   VAR_12.height = VAR_8->screen_height;
   FUNC_14( VAR_15 );

   VAR_8->surface = FUNC_2( VAR_8->display, VAR_19, &VAR_12, ((void*)0) );
   FUNC_0(VAR_8->surface != VAR_5);


   VAR_10 = FUNC_5(VAR_8->display, VAR_8->surface, VAR_8->surface, VAR_8->context);
   FUNC_0(VAR_2 != VAR_10);


   FUNC_7(0.15f, 0.25f, 0.35f, 1.0f);


   FUNC_8(VAR_6);

   FUNC_9(VAR_7);
}
