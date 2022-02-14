
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct PixelData {int priority; int linescreen; int pixel; scalar_t__ shadow_type; scalar_t__ shadow_enabled; } ;
struct TYPE_4__ {int SPCTL; } ;
struct TYPE_3__ {int (* blend ) (int,int) ;int** linescreen; scalar_t__ (* trans ) (int) ;struct PixelData* backscreen; struct PixelData** vdp2framebuffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static u32 FUNC_6(int VAR_5, int VAR_6)
{
   struct PixelData VAR_7[2] = { 0 };

   int VAR_8 = 0;

   int VAR_9;


   for (VAR_9 = 7; VAR_9 > 0; VAR_9--)
   {
      int VAR_10;

      for (VAR_10 = VAR_2; VAR_10 >= 0; VAR_10--)
      {
         if (VAR_4.vdp2framebuffer[VAR_10][VAR_5].priority == VAR_9)
         {
            VAR_7[VAR_8] = VAR_4.vdp2framebuffer[VAR_10][VAR_5];
            VAR_8++;

            if (VAR_8 == 2)
               goto finished;
         }
      }
   }

   VAR_7[VAR_8] = VAR_4.backscreen[VAR_5];

finished:

   if (VAR_7[0].linescreen)
   {
      VAR_7[0].pixel = VAR_4.blend(VAR_7[0].pixel, VAR_4.linescreen[VAR_7[0].linescreen][VAR_6]);
   }

   if ((VAR_7[0].shadow_type == VAR_0) && ((VAR_7[0].pixel & 0xFFFFFF) == 0))
   {

      if (VAR_7[1].shadow_enabled)
      {
         VAR_7[0].pixel = FUNC_0(0x20000000, VAR_7[1].pixel);
      }
      else
      {
         VAR_7[0].pixel = VAR_7[1].pixel;
      }
   }
   else if (VAR_7[0].shadow_type == VAR_0 && ((VAR_7[0].pixel & 0xFFFFFF) != 0))
   {
      if (VAR_4.trans(VAR_7[0].pixel))
      {
         u32 VAR_11 = VAR_7[1].pixel;
         VAR_7[0].pixel = VAR_4.blend(VAR_7[0].pixel, VAR_11);
      }


      if (!(VAR_3->SPCTL & 0x10))
         VAR_7[0].pixel = FUNC_0(0x20000000, VAR_7[0].pixel);
   }
   else if (VAR_7[0].shadow_type == VAR_1)
   {
      if (VAR_7[1].shadow_enabled)
      {
         VAR_7[0].pixel = FUNC_0(0x20000000, VAR_7[1].pixel);
      }
      else
      {
         VAR_7[0].pixel = VAR_7[1].pixel;
      }
   }
   else
   {
      if (VAR_4.trans(VAR_7[0].pixel))
      {
         u32 VAR_12 = VAR_7[1].pixel;
         VAR_7[0].pixel = VAR_4.blend(VAR_7[0].pixel, VAR_12);
      }
   }

   return VAR_7[0].pixel;
}
