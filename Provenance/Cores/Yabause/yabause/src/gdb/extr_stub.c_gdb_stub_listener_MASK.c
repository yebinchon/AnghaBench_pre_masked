
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int context; int server; } ;
typedef TYPE_1__ gdb_stub ;
struct TYPE_7__ {int sock; int context; } ;
typedef TYPE_2__ gdb_client ;
typedef int YabSock ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void * VAR_3)
{
   gdb_stub * VAR_4 = VAR_3;
   YabSock VAR_5;

   while(1)
   {
      gdb_client * VAR_6;

      VAR_5 = FUNC_1(VAR_4->server);
      if (VAR_5 == -1)
      {
         FUNC_4("accept");
         return;
      }

      VAR_6 = FUNC_3(sizeof(gdb_client));
      VAR_6->context = VAR_4->context;
      VAR_6->sock = VAR_5;

      FUNC_0(VAR_4->context, VAR_1, VAR_6);

      FUNC_2(VAR_0, VAR_2, VAR_6);
   }
}
