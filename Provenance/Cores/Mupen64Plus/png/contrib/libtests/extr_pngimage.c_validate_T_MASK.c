
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int when; int transform; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(void)

{
   unsigned int VAR_7;

   for (VAR_7=0; VAR_7<VAR_2; ++VAR_7) if (VAR_5[VAR_7].name != ((void*)0))
   {
      if (VAR_5[VAR_7].when & VAR_0)
         VAR_3 |= VAR_5[VAR_7].transform;

      if (VAR_5[VAR_7].when & VAR_1)
         VAR_6 |= VAR_5[VAR_7].transform;
   }




   VAR_4 = VAR_3 & VAR_6;
}
