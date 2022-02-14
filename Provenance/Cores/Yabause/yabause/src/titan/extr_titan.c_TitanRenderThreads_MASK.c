
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pixel_t ;
struct TYPE_6__ {int use_simplified; TYPE_1__* lines; int * dispbuffer; } ;
struct TYPE_5__ {int vdp2height; } ;
struct TYPE_4__ {int start; int end; } ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void FUNC_3(pixel_t * VAR_3, int VAR_4)
{
   int VAR_5;
   int VAR_6 = VAR_2 + 1;
   int VAR_7 = VAR_1.vdp2height / VAR_6;
   int VAR_8 = VAR_1.vdp2height % VAR_6;
   int VAR_9[6] = { 0 };
   int VAR_10[6] = { 0 };

   VAR_0.dispbuffer = VAR_3;
   VAR_0.use_simplified = VAR_4;

   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   {
      VAR_9[VAR_5] = VAR_7 * VAR_5;
      VAR_10[VAR_5] = ((VAR_5 + 1) * VAR_7);
   }

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      VAR_0.lines[VAR_5].start = VAR_9[VAR_5+1];
      VAR_0.lines[VAR_5].end = VAR_10[VAR_5+1];
   }


   VAR_0.lines[VAR_2 - 1].end += VAR_8;

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      FUNC_1(VAR_5);
   }

   FUNC_0(VAR_3, VAR_9[0], VAR_10[0], VAR_4);

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      FUNC_2(VAR_5);
   }
}
