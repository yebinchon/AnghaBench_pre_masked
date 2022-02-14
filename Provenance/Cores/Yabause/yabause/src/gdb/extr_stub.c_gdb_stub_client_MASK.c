
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* client; scalar_t__ state; } ;
typedef TYPE_1__ gdb_packet ;
struct TYPE_5__ {int sock; } ;
typedef TYPE_2__ gdb_client ;


 size_t FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(void * VAR_0)
{
   gdb_client * VAR_1 = VAR_0;
   char VAR_2[1024];
   size_t VAR_3;
   gdb_packet VAR_4;

   VAR_4.state = 0;
   VAR_4.client = VAR_1;


   while(-1 != (VAR_3 = FUNC_0(VAR_1->sock, VAR_2, 1024, 0)))
   {
      FUNC_1(&VAR_4, VAR_2, VAR_3);
   }
}
