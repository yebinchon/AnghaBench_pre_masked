
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pixel_t ;
struct TYPE_5__ {int (* DisplayMessage ) (TYPE_1__*,int *,int,int) ;} ;
struct TYPE_4__ {scalar_t__ timeleft; scalar_t__ hidden; int message; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

int FUNC_2(pixel_t * VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6 = 0;
   int VAR_7 = 0;

   if (VAR_0 == ((void*)0)) return VAR_7;

   for(VAR_6 = 0;VAR_6 < VAR_1;VAR_6++)
      if (VAR_2[VAR_6].timeleft > 0)
      {
         if (VAR_2[VAR_6].hidden == 0)
         {
            VAR_7 = 1;
            VAR_0->DisplayMessage(VAR_2 + VAR_6, VAR_3, VAR_4, VAR_5);
         }
         VAR_2[VAR_6].timeleft--;
         if (VAR_2[VAR_6].timeleft == 0) FUNC_0(VAR_2[VAR_6].message);
      }

   return VAR_7;
}
