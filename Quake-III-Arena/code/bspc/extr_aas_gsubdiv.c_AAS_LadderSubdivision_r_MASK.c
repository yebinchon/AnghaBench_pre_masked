
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** children; scalar_t__ tmparea; } ;
typedef TYPE_1__ tmp_node_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

tmp_node_t *FUNC_1(tmp_node_t *VAR_0)
{

 if (!VAR_0) return 0;

 if (VAR_0->tmparea) return FUNC_0(VAR_0);

 VAR_0->children[0] = FUNC_1(VAR_0->children[0]);
 VAR_0->children[1] = FUNC_1(VAR_0->children[1]);
 return VAR_0;
}
