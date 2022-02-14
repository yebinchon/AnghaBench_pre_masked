
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int opts; int num_swaps; int surface; int display; TYPE_2__* slots; int texture; } ;
typedef TYPE_1__ VIDTEX_T ;
struct TYPE_10__ {void* video_frame; void* image; } ;
typedef TYPE_2__ VIDTEX_IMAGE_SLOT_T ;
typedef int GLfloat ;
typedef int EGLenum ;
typedef void* EGLImageKHR ;
typedef int EGLClientBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int,double,double,double) ;
 int FUNC_13 (int,int ,int ,TYPE_2__*) ;
 int FUNC_14 (int,int ,int ,int ) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,void*,void*) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_2__* VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_20(VIDTEX_T *VAR_20, void *VAR_21)
{
   EGLImageKHR VAR_22;
   VIDTEX_IMAGE_SLOT_T *VAR_23;
   static uint32_t VAR_24 = 0;

   FUNC_15(VAR_21);

   FUNC_5(0, 0, 0, 0);
   FUNC_6(1);
   FUNC_4(VAR_7 | VAR_8);
   FUNC_11();

   FUNC_3(VAR_11, VAR_20->texture);
   FUNC_0(VAR_20);




   VAR_22 = VAR_5;

   for (VAR_23 = VAR_20->slots; VAR_23 < VAR_20->slots + FUNC_16(VAR_20->slots); VAR_23++)
   {
      if (VAR_23->video_frame == VAR_21)
      {
         FUNC_15(VAR_23->image);
         VAR_22 = VAR_23->image;
         break;
      }

      if (VAR_23->video_frame == ((void*)0))
      {
         EGLenum VAR_25;
         FUNC_15(VAR_23->image == ((void*)0));

         if (VAR_20->opts & VAR_17)
            VAR_25 = VAR_3;
         else if (VAR_20->opts & VAR_15)
            VAR_25 = VAR_1;
         else if (VAR_20->opts & VAR_16)
            VAR_25 = VAR_2;
         else
            VAR_25 = VAR_0;

         VAR_22 = FUNC_1(VAR_20->display, VAR_4, VAR_25,
               (EGLClientBuffer)VAR_21, ((void*)0));
         if (VAR_22 == VAR_5)
         {
            FUNC_17("EGL image conversion error");
         }
         else
         {
            FUNC_18("Created EGL image %p for buf %p", VAR_22, VAR_21);
            VAR_23->video_frame = VAR_21;
            VAR_23->image = VAR_22;
         }
         FUNC_0(VAR_20);

         break;
      }
   }

   if (VAR_23 == VAR_20->slots + FUNC_16(VAR_20->slots))
   {
      FUNC_17("Exceeded configured max number of EGL images");
   }


   if (VAR_22 != VAR_5)
   {

      int VAR_26 = 30 * 15;
      GLfloat VAR_27 = (VAR_24 * 360) / (GLfloat) VAR_26;
      VAR_24 = (VAR_24 + 1) % VAR_26;

      FUNC_9(VAR_11, VAR_22);
      FUNC_0(VAR_20);

      FUNC_12(VAR_27, 0.0, 0.0, 1.0);
      FUNC_10(VAR_13);
      FUNC_14(3, VAR_9, 0, VAR_19);
      FUNC_7(VAR_6);
      FUNC_10(VAR_10);
      FUNC_13(2, VAR_9, 0, VAR_18);

      FUNC_8(VAR_12, 0, FUNC_16(VAR_18) / 2);

      FUNC_2(VAR_20->display, VAR_20->surface);

      if (VAR_20->opts & VAR_14)
      {
         FUNC_19(VAR_20);
      }

      VAR_20->num_swaps++;
   }

   FUNC_0(VAR_20);
}
