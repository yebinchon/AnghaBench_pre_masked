
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * v; } ;
typedef TYPE_1__ aas_edge_t ;
struct TYPE_4__ {TYPE_1__* edges; } ;


 int FUNC_0 (int ,int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_1(int VAR_3)
{
 int VAR_4;
 aas_edge_t *VAR_5;

 VAR_5 = &VAR_2.edges[VAR_3];

 VAR_4 = FUNC_0(VAR_5->v[0], VAR_5->v[1]);

 VAR_0[VAR_3] = VAR_1[VAR_4];
 VAR_1[VAR_4] = VAR_3;
}
