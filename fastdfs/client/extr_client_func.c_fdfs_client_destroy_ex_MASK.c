
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ server_index; scalar_t__ server_count; int * servers; } ;
typedef TYPE_1__ TrackerServerGroup ;


 int FUNC_0 (int *) ;

void FUNC_1(TrackerServerGroup *VAR_0)
{
 if (VAR_0->servers != ((void*)0))
 {
  FUNC_0(VAR_0->servers);
  VAR_0->servers = ((void*)0);

  VAR_0->server_count = 0;
  VAR_0->server_index = 0;
 }
}
