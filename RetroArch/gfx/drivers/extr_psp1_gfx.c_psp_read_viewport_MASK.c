
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int x; int y; int width; int height; } ;
struct TYPE_4__ {TYPE_1__ vp; } ;
typedef TYPE_2__ psp1_video_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int*,int*,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_2, uint8_t *VAR_3, bool VAR_4)
{
   void* VAR_5;
   int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   uint8_t* VAR_14 = VAR_3;
   psp1_video_t *VAR_15 = (psp1_video_t*)VAR_2;

   (void)VAR_2;
   (void)VAR_3;

   FUNC_0(&VAR_5, &VAR_8, &VAR_9, VAR_0);

   VAR_10 = (VAR_15->vp.x > 0)? VAR_15->vp.x : 0;
   VAR_11 = (VAR_15->vp.y > 0)? VAR_15->vp.y : 0;
   VAR_12 = ((VAR_15->vp.x + VAR_15->vp.width) < VAR_8)? (VAR_15->vp.x + VAR_15->vp.width): VAR_8;
   VAR_13 = ((VAR_15->vp.y + VAR_15->vp.height) < VAR_1)? (VAR_15->vp.y + VAR_15->vp.height): VAR_1;

   switch(VAR_9)
   {
   case 129:
      for (VAR_7 = (VAR_13 - 1); VAR_7 >= VAR_11 ; VAR_7--)
      {
         uint16_t* VAR_16 = (uint16_t*)VAR_5 + VAR_8 * VAR_7 + VAR_10;
         for (VAR_6 = VAR_10; VAR_6 < VAR_12; VAR_6++)
         {

            *(VAR_14++) = ((*VAR_16) >> 11) << 3;
            *(VAR_14++) = (((*VAR_16) >> 5) << 2) &0xFF;
            *(VAR_14++) = ((*VAR_16) & 0x1F) << 3;
            VAR_16++;
         }
      }
      return 1;

   case 130:
      for (VAR_7 = (VAR_13 - 1); VAR_7 >= VAR_11 ; VAR_7--)
      {
         uint16_t* VAR_17 = (uint16_t*)VAR_5 + VAR_8 * VAR_7 + VAR_10;
         for (VAR_6 = VAR_10; VAR_6 < VAR_12; VAR_6++)
         {

            *(VAR_14++) = (((*VAR_17) >> 10) << 3) &0xFF;
            *(VAR_14++) = (((*VAR_17) >> 5) << 3) &0xFF;
            *(VAR_14++) = ((*VAR_17) & 0x1F) << 3;
            VAR_17++;
         }
      }
      return 1;

   case 131:
      for (VAR_7 = (VAR_13 - 1); VAR_7 >= VAR_11 ; VAR_7--)
      {
         uint16_t* VAR_18 = (uint16_t*)VAR_5 + VAR_8 * VAR_7 + VAR_10;
         for (VAR_6 = VAR_10; VAR_6 < VAR_12; VAR_6++)
         {

            *(VAR_14++) = ((*VAR_18) >> 4) & 0xF0;
            *(VAR_14++) = (*VAR_18) & 0xF0;
            *(VAR_14++) = ((*VAR_18) << 4) & 0xF0;
            VAR_18++;
         }
      }
      return 1;

   case 128:
      for (VAR_7 = (VAR_13 - 1); VAR_7 >= VAR_11 ; VAR_7--)
      {
         uint32_t* VAR_19 = (uint32_t*)VAR_5 + VAR_8 * VAR_7 + VAR_10;
         for (VAR_6 = VAR_10; VAR_6 < VAR_12; VAR_6++)
         {

            *(VAR_14++) = ((*VAR_19) >> 16) & 0xFF;
            *(VAR_14++) = ((*VAR_19) >> 8 ) & 0xFF;
            *(VAR_14++) = (*VAR_19) & 0xFF;
            VAR_19++;
         }
      }
      return 1;
   }

   return 0;
}
