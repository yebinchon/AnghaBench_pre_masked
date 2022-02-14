
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int port; char const* server; int domain; } ;
typedef TYPE_1__ socket_target_t ;


 char* VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_6 ;

void FUNC_4 (void)
{
   socket_target_t VAR_7;
   const char *VAR_8 = VAR_0;
   unsigned VAR_9 = VAR_1;

   if (!FUNC_0())
   {
      FUNC_1("Could not initialize network logger interface.\n");
      return;
   }

   VAR_5 = FUNC_2(
         "ra_netlogger",
         VAR_2,
         VAR_4,
         VAR_3);

   VAR_7.port = VAR_9;
   VAR_7.server = VAR_8;
   VAR_7.domain = VAR_2;

   FUNC_3(&VAR_6, &VAR_7);
}
