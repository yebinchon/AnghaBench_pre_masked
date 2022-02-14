
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t connections_size; int * connections; } ;
typedef TYPE_1__ netplay_t ;
struct TYPE_7__ {int status; } ;
typedef TYPE_2__ discord_userdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_3(netplay_t *VAR_3)
{
   size_t VAR_4;

   if (!VAR_3)
      return 1;
   for (VAR_4 = 0; VAR_4 < VAR_3->connections_size; VAR_4++)
      FUNC_2(VAR_3, &VAR_3->connections[VAR_4]);

   FUNC_1();
   return 1;
}
