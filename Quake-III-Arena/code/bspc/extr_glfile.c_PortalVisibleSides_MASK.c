
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** nodes; int onnode; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_4__ {int contents; } ;



int FUNC_0 (portal_t *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0->onnode)
  return 0;

 VAR_1 = VAR_0->nodes[0]->contents;
 VAR_2 = VAR_0->nodes[1]->contents;


 if (VAR_1 == VAR_2)
  return 0;


 if (!VAR_1)
  return 1;
 if (!VAR_2)
  return 2;
 return 0;
}
