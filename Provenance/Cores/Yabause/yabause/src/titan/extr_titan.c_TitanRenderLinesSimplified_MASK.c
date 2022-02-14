
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct PixelData {scalar_t__ priority; scalar_t__ pixel; } ;
typedef scalar_t__ pixel_t ;
struct TYPE_4__ {int* layer_priority; int vdp2width; struct PixelData** vdp2framebuffer; TYPE_1__* backscreen; int trans; int inited; } ;
struct TYPE_3__ {scalar_t__ pixel; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int,int*) ;
 TYPE_2__ VAR_3 ;

void FUNC_3(pixel_t * VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
   int VAR_13, VAR_14;
   int VAR_15[8] = { 0 };
   int VAR_16 = 0;

   if (!VAR_3.inited || (!VAR_3.trans))
   {
      return;
   }

   FUNC_1(&VAR_14, &VAR_13);


   for (VAR_9 = 7; VAR_9 >= 0; VAR_9--)
   {
      for (VAR_10 = VAR_1; VAR_10 >= 0; VAR_10--)
      {
         if (VAR_3.layer_priority[VAR_10] > 0 && VAR_3.layer_priority[VAR_10] == VAR_9)
            VAR_15[VAR_16++] = VAR_10;
      }
   }


   VAR_15[VAR_16++] = VAR_0;

   FUNC_2(VAR_5, &VAR_12);

   for (VAR_8 = VAR_5 + VAR_14; VAR_8 < VAR_6; VAR_8 += VAR_13)
   {
      for (VAR_7 = 0; VAR_7 < VAR_3.vdp2width; VAR_7++)
      {
         int VAR_17 = (VAR_12 * VAR_3.vdp2width) + VAR_7;
         VAR_9 = (VAR_8 * VAR_3.vdp2width) + VAR_7;

         VAR_4[VAR_9] = 0;

         for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++)
         {
            struct PixelData VAR_18 = VAR_3.vdp2framebuffer[VAR_2][VAR_17];

            int VAR_19 = VAR_15[VAR_11];


            if (VAR_19 == VAR_0)
            {

               if (VAR_18.pixel)
               {
                  VAR_4[VAR_9] = FUNC_0(VAR_18.pixel);
                  break;
               }
               else
               {

                  VAR_4[VAR_9] = FUNC_0(VAR_3.backscreen[VAR_8].pixel);
                  break;
               }
            }

            else if (VAR_18.priority >= VAR_3.layer_priority[VAR_19])
            {

               if (VAR_18.pixel)
               {
                  VAR_4[VAR_9] = FUNC_0(VAR_18.pixel);
                  break;
               }
            }
            else
            {

               if (VAR_3.vdp2framebuffer[VAR_19][VAR_17].pixel)
               {
                  VAR_4[VAR_9] = FUNC_0(VAR_3.vdp2framebuffer[VAR_19][VAR_17].pixel);
                  break;
               }
            }
         }
      }
      VAR_12++;
   }
}
