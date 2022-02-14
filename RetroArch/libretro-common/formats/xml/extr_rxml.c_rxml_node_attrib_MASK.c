
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxml_node {struct rxml_attrib_node* attrib; } ;
struct rxml_attrib_node {char const* value; int attrib; struct rxml_attrib_node* next; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;

const char *FUNC_1(struct rxml_node *VAR_0, const char *VAR_1)
{
   struct rxml_attrib_node *VAR_2 = ((void*)0);
   for (VAR_2 = VAR_0->attrib; VAR_2; VAR_2 = VAR_2->next)
   {
      if (FUNC_0(VAR_1, VAR_2->attrib))
         return VAR_2->value;
   }

   return ((void*)0);
}
