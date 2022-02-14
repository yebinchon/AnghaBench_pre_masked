
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {scalar_t__ dispman_start_count; scalar_t__ current_update; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

int32_t FUNC_2(void)
{
   int32_t VAR_2 = 0;


   if ( 0 == VAR_1.dispman_start_count )
   {
      VAR_1.current_update = FUNC_1( 10 );
      if( VAR_1.current_update == VAR_0 )
      {

         VAR_2 = -1;
         FUNC_0( 0 );
      }
   }

   if( VAR_2 == 0 )
   {

      VAR_1.dispman_start_count++;
   }

   return VAR_2;
}
