
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connections_size; int savestate_request_outstanding; TYPE_3__* connections; } ;
typedef TYPE_1__ netplay_t ;
struct TYPE_6__ {scalar_t__ mode; int active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*,int ,int *,int ) ;

bool FUNC_1(netplay_t *VAR_2)
{
   if (VAR_2->connections_size == 0 ||
       !VAR_2->connections[0].active ||
       VAR_2->connections[0].mode < VAR_1)
      return 0;
   if (VAR_2->savestate_request_outstanding)
      return 1;
   VAR_2->savestate_request_outstanding = 1;
   return FUNC_0(VAR_2, &VAR_2->connections[0],
      VAR_0, ((void*)0), 0);
}
