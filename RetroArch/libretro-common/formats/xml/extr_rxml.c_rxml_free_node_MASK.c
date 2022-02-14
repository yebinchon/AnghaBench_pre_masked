
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxml_node {struct rxml_node* data; struct rxml_node* name; struct rxml_node* value; struct rxml_node* attrib; scalar_t__ next; struct rxml_node* children; } ;
struct rxml_attrib_node {struct rxml_attrib_node* data; struct rxml_attrib_node* name; struct rxml_attrib_node* value; struct rxml_attrib_node* attrib; scalar_t__ next; struct rxml_attrib_node* children; } ;


 int FUNC_0 (struct rxml_node*) ;

__attribute__((used)) static void FUNC_1(struct rxml_node *VAR_0)
{
   struct rxml_node *VAR_1 = ((void*)0);
   struct rxml_attrib_node *VAR_2 = ((void*)0);

   if (!VAR_0)
      return;

   for (VAR_1 = VAR_0->children; VAR_1; )
   {
      struct rxml_node *VAR_3 = (struct rxml_node*)VAR_1->next;
      FUNC_1(VAR_1);
      VAR_1 = VAR_3;
   }

   for (VAR_2 = VAR_0->attrib; VAR_2; )
   {
      struct rxml_attrib_node *VAR_4 = ((void*)0);

      VAR_4 = (struct rxml_attrib_node*)VAR_2->next;

      if (VAR_4)
      {
         if (VAR_2->attrib)
            FUNC_0(VAR_2->attrib);
         if (VAR_2->value)
            FUNC_0(VAR_2->value);
         if (VAR_2)
            FUNC_0(VAR_2);
      }

      VAR_2 = VAR_4;
   }

   if (VAR_0->name)
      FUNC_0(VAR_0->name);
   if (VAR_0->data)
      FUNC_0(VAR_0->data);
   if (VAR_0)
      FUNC_0(VAR_0);
}
