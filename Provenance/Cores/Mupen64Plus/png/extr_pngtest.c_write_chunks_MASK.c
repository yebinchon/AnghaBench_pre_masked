
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_structp ;
struct TYPE_2__ {int* location; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(png_structp VAR_3, int VAR_4)
{
   int VAR_5;







   for (VAR_5=0; VAR_5<2; ++VAR_5)
   {
      if (VAR_2.location[VAR_5] == (VAR_4 | VAR_0))
         FUNC_0(VAR_3);

      else if (VAR_2.location[VAR_5] == (VAR_4 | VAR_1))
         FUNC_1(VAR_3);
   }
}
