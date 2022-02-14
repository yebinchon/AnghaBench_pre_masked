
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {unsigned int width; unsigned int height; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_11__ {uintptr_t* list; } ;
struct TYPE_13__ {TYPE_7__* font; TYPE_1__ textures; } ;
typedef TYPE_3__ stripes_handle_t ;
struct TYPE_14__ {int size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,float*) ;
 int FUNC_3 (TYPE_7__*,char*,unsigned int,unsigned int,unsigned int,unsigned int,int,int ,float,int,int ,int) ;
 int FUNC_4 (TYPE_2__*,unsigned int,unsigned int,int,int,unsigned int,unsigned int,float*,uintptr_t) ;

__attribute__((used)) static void FUNC_5(
      stripes_handle_t *VAR_2,
      video_frame_info_t *VAR_3,
      char **VAR_4, unsigned VAR_5)
{
   unsigned VAR_6;
   int VAR_7, VAR_8;
   unsigned VAR_9 = VAR_3->width;
   unsigned VAR_10 = VAR_3->height;
   float VAR_11[16] = {
      0.00, 0.00, 0.00, 0.85,
      0.00, 0.00, 0.00, 0.85,
      0.00, 0.00, 0.00, 0.85,
      0.00, 0.00, 0.00, 0.85,
   };

   float VAR_12[16]= {
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
      1.00, 1.00, 1.00, 1.00,
   };

   FUNC_2(
         VAR_3,
         0, VAR_10/2.0, VAR_9, VAR_10/2.0,
         VAR_9, VAR_10,
         &VAR_11[0]);

   VAR_7 = VAR_9 / 11;
   VAR_8 = VAR_10 / 10;

   if (VAR_7 >= VAR_8)
      VAR_7 = VAR_8;

   for (VAR_6 = 0; VAR_6 < 44; VAR_6++)
   {
      int VAR_13 = (VAR_6 / 11) * VAR_10 / 10.0;

      if (VAR_6 == VAR_5)
      {
         uintptr_t VAR_14 = VAR_2->textures.list[VAR_0];

         FUNC_0(VAR_3);

         FUNC_4(
               VAR_3,
               VAR_9/2.0 - (11*VAR_7)/2.0 + (VAR_6 % 11) * VAR_7,
               VAR_10/2.0 + VAR_8*1.5 + VAR_13,
               VAR_7, VAR_8,
               VAR_9, VAR_10,
               &VAR_12[0],
               VAR_14);

         FUNC_1(VAR_3);
      }

      FUNC_3(VAR_2->font, VAR_4[VAR_6],
            VAR_9/2.0 - (11*VAR_7)/2.0 + (VAR_6 % 11) * VAR_7 + VAR_7/2.0,
            VAR_10/2.0 + VAR_8 + VAR_13 + VAR_2->font->size / 3,
            VAR_9, VAR_10, 0xffffffff, VAR_1, 1.0f,
            0, 0, 0);
   }
}
