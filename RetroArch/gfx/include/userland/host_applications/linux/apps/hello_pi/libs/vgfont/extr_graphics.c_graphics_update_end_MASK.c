
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {scalar_t__ current_update; scalar_t__ dispman_start_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

int32_t FUNC_4( void )
{
   int32_t VAR_2 = -1;


   if(FUNC_3(VAR_1.current_update != VAR_0))
   {

      if(FUNC_3(VAR_1.dispman_start_count > 0))
      {

         VAR_1.dispman_start_count--;

         VAR_2 = 0;


         if( 0 == VAR_1.dispman_start_count )
         {
            FUNC_0();
            if( FUNC_2( VAR_1.current_update ) != 0 )
            {

               VAR_2 = -1;
               FUNC_1( 0 );
            }
         }
      }
   }

   return VAR_2;
}
