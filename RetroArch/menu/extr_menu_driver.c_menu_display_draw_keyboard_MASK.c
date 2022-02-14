
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ font_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int *) ;
 int FUNC_3 (TYPE_2__ const*,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,float,int,int ,int) ;
 int FUNC_4 (TYPE_1__*,unsigned int,unsigned int,int,int,unsigned int,unsigned int,float*,uintptr_t) ;
 int * VAR_1 ;

void FUNC_5(
      uintptr_t VAR_2,
      const font_data_t *VAR_3,
      video_frame_info_t *VAR_4,
      char *VAR_5[], unsigned VAR_6,
      unsigned VAR_7)
{
   unsigned VAR_8;
   int VAR_9, VAR_10;
   unsigned VAR_11 = VAR_4->width;
   unsigned VAR_12 = VAR_4->height;

   float VAR_13[16]= {
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
   };

   FUNC_2(
         VAR_4,
         0, VAR_12/2.0, VAR_11, VAR_12/2.0,
         VAR_11, VAR_12,
         &VAR_1[0]);

   VAR_9 = VAR_11 / 11;
   VAR_10 = VAR_12 / 10;

   if (VAR_9 >= VAR_10)
      VAR_9 = VAR_10;

   for (VAR_8 = 0; VAR_8 < 44; VAR_8++)
   {
      int VAR_14 = (VAR_8 / 11) * VAR_12 / 10.0;
      unsigned VAR_15 = 0xffffffff;

      if (VAR_8 == VAR_6)
      {
         FUNC_0(VAR_4);

         FUNC_4(
               VAR_4,
               VAR_11/2.0 - (11*VAR_9)/2.0 + (VAR_8 % 11) * VAR_9,
               VAR_12/2.0 + VAR_10*1.5 + VAR_14,
               VAR_9, VAR_10,
               VAR_11, VAR_12,
               &VAR_13[0],
               VAR_2);

         FUNC_1(VAR_4);

         VAR_15 = VAR_7;
      }

      FUNC_3(VAR_3, VAR_5[VAR_8],
            VAR_11/2.0 - (11*VAR_9)/2.0 + (VAR_8 % 11)
            * VAR_9 + VAR_9/2.0,
            VAR_12/2.0 + VAR_10 + VAR_14 + VAR_3->size / 3,
            VAR_11, VAR_12, VAR_15, VAR_0, 1.0f,
            0, 0, 0);
   }
}
