
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int const*,int *,int,int*) ;
 int FUNC_7 (float,float,float,float) ;
 int FUNC_8 (double) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,float*) ;
 scalar_t__ FUNC_12 (int ,int*,int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,TYPE_1__*,int ,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(CUBE_STATE_T *VAR_12)
{
   int32_t VAR_13 = 0;
   EGLBoolean VAR_14;
   EGLint VAR_15;

   static EGL_DISPMANX_WINDOW_T VAR_16;

   DISPMANX_ELEMENT_HANDLE_T VAR_17;
   DISPMANX_DISPLAY_HANDLE_T VAR_18;
   DISPMANX_UPDATE_HANDLE_T VAR_19;
   VC_RECT_T VAR_20;
   VC_RECT_T VAR_21;

   static const EGLint VAR_22[] =
   {
      131, 8,
      133, 8,
      135, 8,
      136, 8,
      134, 16,
      130, 4,
      129, 128,
      132
   };

   EGLConfig VAR_23;


   VAR_12->display = FUNC_3(VAR_1);
   FUNC_0(VAR_12->display!=VAR_4);


   VAR_14 = FUNC_4(VAR_12->display, ((void*)0), ((void*)0));
   FUNC_0(VAR_2 != VAR_14);



   VAR_14 = FUNC_6(VAR_12->display, VAR_22, &VAR_23, 1, &VAR_15);
   FUNC_0(VAR_2 != VAR_14);


   VAR_12->context = FUNC_1(VAR_12->display, VAR_23, VAR_3, ((void*)0));
   FUNC_0(VAR_12->context!=VAR_3);


   VAR_13 = FUNC_12(0 , &VAR_12->screen_width, &VAR_12->screen_height);
   FUNC_0( VAR_13 >= 0 );

   VAR_20.x = 0;
   VAR_20.y = 0;
   VAR_20.width = VAR_12->screen_width;
   VAR_20.height = VAR_12->screen_height;

   VAR_21.x = 0;
   VAR_21.y = 0;
   VAR_21.width = VAR_12->screen_width << 16;
   VAR_21.height = VAR_12->screen_height << 16;

   VAR_18 = FUNC_13( 0 );
   VAR_19 = FUNC_15( 0 );

   VAR_17 = FUNC_14 ( VAR_19, VAR_18,
      0 , &VAR_20, 0 ,
      &VAR_21, VAR_0, 0 , 0 , 0 );

   VAR_16.element = VAR_17;
   VAR_16.width = VAR_12->screen_width;
   VAR_16.height = VAR_12->screen_height;
   FUNC_16( VAR_19 );

   VAR_12->surface = FUNC_2( VAR_12->display, VAR_23, &VAR_16, ((void*)0) );
   FUNC_0(VAR_12->surface != VAR_5);


   VAR_14 = FUNC_5(VAR_12->display, VAR_12->surface, VAR_12->surface, VAR_12->context);
   FUNC_0(VAR_2 != VAR_14);


   FUNC_7((0.3922f+7*0.5f)/8, (0.1176f+7*0.5f)/8, (0.5882f+7*0.5f)/8, 1.0f);


   FUNC_10(VAR_7);

   FUNC_10(VAR_8);
   FUNC_8(1.0);
   FUNC_9(VAR_9);

   float VAR_24[] = {1.0f, 1.0f, 1.0f, 1.0f};
   FUNC_11(VAR_10, VAR_6, VAR_24);
   FUNC_10(VAR_10);
   FUNC_10(VAR_11);
}
