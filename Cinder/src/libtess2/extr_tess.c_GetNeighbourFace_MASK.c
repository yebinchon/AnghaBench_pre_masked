
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Rface; } ;
struct TYPE_4__ {int n; int inside; } ;
typedef int TESSindex ;
typedef TYPE_2__ TESShalfEdge ;


 int VAR_0 ;

__attribute__((used)) static TESSindex FUNC_0(TESShalfEdge* VAR_1)
{
 if (!VAR_1->Rface)
  return VAR_0;
 if (!VAR_1->Rface->inside)
  return VAR_0;
 return VAR_1->Rface->n;
}
