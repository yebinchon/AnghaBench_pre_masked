
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ pixel_t ;
struct TYPE_2__ {int vdp2width; int trans; int inited; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int,int*) ;
 TYPE_1__ VAR_0 ;

void FUNC_4(pixel_t * VAR_1, int VAR_2, int VAR_3)
{
   int VAR_4, VAR_5, VAR_6;
   u32 VAR_7;
   int VAR_8, VAR_9;

   if (!VAR_0.inited || (!VAR_0.trans))
   {
      return;
   }

   FUNC_2(&VAR_9, &VAR_8);

   FUNC_3(VAR_2, &VAR_6);

   for (VAR_5 = VAR_2 + VAR_9; VAR_5 < VAR_3; VAR_5 += VAR_8)
   {
      for (VAR_4 = 0; VAR_4 < VAR_0.vdp2width; VAR_4++)
      {
         int VAR_10 = (VAR_5 * VAR_0.vdp2width) + VAR_4;
         int VAR_11 = (VAR_6 * VAR_0.vdp2width) + VAR_4;

         VAR_1[VAR_10] = 0;

         VAR_7 = FUNC_0(VAR_11, VAR_5);

         if (VAR_7)
         {
            VAR_1[VAR_10] = FUNC_1(VAR_7);
         }
      }

      VAR_6++;
   }
}
