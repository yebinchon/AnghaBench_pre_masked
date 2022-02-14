
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {int num_connections; int command_buffer; int * open_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int,int ,int *) ;
 int FUNC_5 (int ,int,char const*,int ) ;

int FUNC_6 ( const char *VAR_3, va_list VAR_4 )
{
   int VAR_5 = -1;


   if(FUNC_0() == 0)
   {
      int VAR_6 = FUNC_5( VAR_2.command_buffer, VAR_0, VAR_3, VAR_4 );

      if (VAR_6 >= 0 && VAR_6 < VAR_0)
      {
         int VAR_7;
         FUNC_3();
         for( VAR_7=0; VAR_7<VAR_2.num_connections; VAR_7++ ) {
            VAR_5 = FUNC_4( VAR_2.open_handle[VAR_7],
                                           VAR_2.command_buffer,
                                           VAR_6+1,
                                           VAR_1, ((void*)0) );

            if(VAR_5 == 0)
            {
               break;
            }
         }
         FUNC_2();
      }

      FUNC_1();
   }

   return VAR_5;
}
