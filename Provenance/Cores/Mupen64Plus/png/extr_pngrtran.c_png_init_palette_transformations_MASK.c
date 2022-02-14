
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* png_structrp ;
typedef int png_byte ;
struct TYPE_6__ {size_t index; int blue; int green; int red; } ;
struct TYPE_7__ {int num_trans; int* trans_alpha; int transformations; TYPE_2__ background; TYPE_1__* palette; int flags; } ;
struct TYPE_5__ {int blue; int green; int red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(png_structrp VAR_7)
{
   int VAR_8 = 0;
   int VAR_9 = 0;

   if (VAR_7->num_trans > 0)
   {
      int VAR_10;


      for (VAR_10=0; VAR_10<VAR_7->num_trans; ++VAR_10)
      {
         if (VAR_7->trans_alpha[VAR_10] == 255)
            continue;
         else if (VAR_7->trans_alpha[VAR_10] == 0)
            VAR_9 = 1;
         else
         {
            VAR_9 = 1;
            VAR_8 = 1;
            break;
         }
      }
   }


   if (VAR_8 == 0)
   {




      VAR_7->transformations &= ~VAR_2;
      VAR_7->flags &= ~VAR_5;

      if (VAR_9 == 0)
         VAR_7->transformations &= ~(VAR_1 | VAR_0);
   }
}
