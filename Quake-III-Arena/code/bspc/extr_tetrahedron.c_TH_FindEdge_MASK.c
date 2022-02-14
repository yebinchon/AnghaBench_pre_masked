
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* v; struct TYPE_3__* hashnext; } ;
typedef TYPE_1__ th_edge_t ;
struct TYPE_4__ {TYPE_1__* edges; TYPE_1__** edgehash; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4;
 th_edge_t *VAR_5;

 VAR_4 = (VAR_2 + VAR_3) & (VAR_0-1);

 for (VAR_5 = VAR_1.edgehash[VAR_4]; VAR_5; VAR_5 = VAR_5->hashnext)
 {
  if (VAR_5->v[0] == VAR_2 && VAR_5->v[1] == VAR_3) return VAR_5 - VAR_1.edges;
  if (VAR_5->v[1] == VAR_2 && VAR_5->v[0] == VAR_3) return -(VAR_5 - VAR_1.edges);
 }
 return 0;
}
