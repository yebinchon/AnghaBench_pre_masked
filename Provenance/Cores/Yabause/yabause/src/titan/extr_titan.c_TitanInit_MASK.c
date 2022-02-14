
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct PixelData {int dummy; } ;
typedef struct PixelData u32 ;
struct TYPE_4__ {int* draw_finished; scalar_t__* need_draw; } ;
struct TYPE_3__ {int inited; struct PixelData** linescreen; struct PixelData** vdp2framebuffer; struct PixelData* backscreen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct PixelData*,int ,int) ;
 TYPE_2__ VAR_10 ;
 TYPE_1__ VAR_11 ;

int FUNC_3()
{
   int VAR_12;

   if (! VAR_11.inited)
   {
      for(VAR_12 = 0;VAR_12 < 6;VAR_12++)
      {
         if ((VAR_11.vdp2framebuffer[VAR_12] = (struct PixelData *)FUNC_1(sizeof(struct PixelData), 704 * 256)) == ((void*)0))
            return -1;
      }


      for(VAR_12 = 1;VAR_12 < 4;VAR_12++)
      {
         if ((VAR_11.linescreen[VAR_12] = (u32 *)FUNC_1(sizeof(u32), 512)) == ((void*)0))
            return -1;
      }

      if ((VAR_11.backscreen = (struct PixelData *)FUNC_1(sizeof(struct PixelData), 704 * 512)) == ((void*)0))
         return -1;

      for (VAR_12 = 0; VAR_12 < 5; VAR_12++)
      {
         VAR_10.draw_finished[VAR_12] = 1;
         VAR_10.need_draw[VAR_12] = 0;
      }

      FUNC_0(VAR_5, VAR_0, ((void*)0));
      FUNC_0(VAR_6, VAR_1, ((void*)0));
      FUNC_0(VAR_7, VAR_2, ((void*)0));
      FUNC_0(VAR_8, VAR_3, ((void*)0));
      FUNC_0(VAR_9, VAR_4, ((void*)0));

      VAR_11.inited = 1;
   }

   for(VAR_12 = 0;VAR_12 < 6;VAR_12++)
      FUNC_2(VAR_11.vdp2framebuffer[VAR_12], 0, sizeof(u32) * 704 * 256);

   for(VAR_12 = 1;VAR_12 < 4;VAR_12++)
      FUNC_2(VAR_11.linescreen[VAR_12], 0, sizeof(u32) * 512);

   return 0;
}
