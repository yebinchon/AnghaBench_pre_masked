
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* children; } ;
typedef TYPE_1__ rxml_node_t ;



__attribute__((used)) static int FUNC_0(rxml_node_t *VAR_0)
{
   rxml_node_t *VAR_1;
   int VAR_2 = 0;

   for (VAR_1 = VAR_0->children; VAR_1; VAR_1 = VAR_1->next)
      ++VAR_2;

   return VAR_2;
}
