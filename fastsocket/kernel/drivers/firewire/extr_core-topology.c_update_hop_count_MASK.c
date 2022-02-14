
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_node {int port_count; int max_depth; int max_hops; TYPE_1__** ports; } ;
struct TYPE_2__ {int max_hops; int max_depth; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct fw_node *VAR_0)
{
 int VAR_1[2] = { -1, -1 };
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->port_count; VAR_3++) {
  if (VAR_0->ports[VAR_3] == ((void*)0))
   continue;

  if (VAR_0->ports[VAR_3]->max_hops > VAR_2)
   VAR_2 = VAR_0->ports[VAR_3]->max_hops;

  if (VAR_0->ports[VAR_3]->max_depth > VAR_1[0]) {
   VAR_1[1] = VAR_1[0];
   VAR_1[0] = VAR_0->ports[VAR_3]->max_depth;
  } else if (VAR_0->ports[VAR_3]->max_depth > VAR_1[1])
   VAR_1[1] = VAR_0->ports[VAR_3]->max_depth;
 }

 VAR_0->max_depth = VAR_1[0] + 1;
 VAR_0->max_hops = FUNC_0(VAR_2, VAR_1[0] + VAR_1[1] + 2);
}
