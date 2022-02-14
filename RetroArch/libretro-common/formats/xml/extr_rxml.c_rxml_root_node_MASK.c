
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rxml_node {int dummy; } ;
struct TYPE_3__ {struct rxml_node* root_node; } ;
typedef TYPE_1__ rxml_document_t ;



struct rxml_node *FUNC_0(rxml_document_t *VAR_0)
{
   if (VAR_0)
      return VAR_0->root_node;
   return ((void*)0);
}
