
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {int disp; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

int32_t FUNC_6( void )
{
   int VAR_5;
   FUNC_4(VAR_4);

   FUNC_3();

   for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
      if (VAR_2[VAR_5])
         FUNC_0(VAR_1.disp,VAR_2[VAR_5]);

   FUNC_1(VAR_1.disp);
   FUNC_2();
   FUNC_5(&VAR_3);
   VAR_4 = 0;
   return 0;
}
