
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fullpath; } ;
typedef TYPE_1__ stripes_node_t ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static stripes_node_t *FUNC_2(const stripes_node_t *VAR_0)
{
   stripes_node_t *VAR_1 = (stripes_node_t*)FUNC_0(sizeof(*VAR_1));

   *VAR_1 = *VAR_0;
   VAR_1->fullpath = VAR_0->fullpath ? FUNC_1(VAR_0->fullpath) : ((void*)0);

   return VAR_1;
}
