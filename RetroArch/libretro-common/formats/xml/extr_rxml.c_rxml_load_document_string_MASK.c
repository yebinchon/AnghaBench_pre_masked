
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* elem; char* data; char* attr; } ;
typedef TYPE_1__ yxml_t ;
typedef int yxml_ret_t ;
struct rxml_parse_buffer {char* val; TYPE_2__** stack; int xml; } ;
struct rxml_attrib_node {void* value; void* attrib; struct rxml_attrib_node* next; } ;
struct TYPE_9__ {struct rxml_attrib_node* attrib; void* data; void* name; struct TYPE_9__* next; struct TYPE_9__* children; } ;
typedef TYPE_2__ rxml_node_t ;
struct TYPE_10__ {TYPE_2__* root_node; } ;
typedef TYPE_3__ rxml_document_t ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct rxml_parse_buffer*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char const) ;

rxml_document_t *FUNC_7(const char *VAR_1)
{
   rxml_document_t *VAR_2 = ((void*)0);
   struct rxml_parse_buffer *VAR_3 = ((void*)0);
   size_t VAR_4 = 0;
   size_t VAR_5 = 0;
   int VAR_6 = 0;
   char *VAR_7 = ((void*)0);
   yxml_t VAR_8;

   rxml_node_t *VAR_9 = ((void*)0);
   struct rxml_attrib_node *VAR_10 = ((void*)0);

   VAR_3 = (struct rxml_parse_buffer*)FUNC_2(sizeof(*VAR_3));
   if (!VAR_3)
      goto error;

   VAR_7 = VAR_3->val;

   VAR_2 = (rxml_document_t*)FUNC_0(1, sizeof(*VAR_2));
   if (!VAR_2)
      goto error;

   FUNC_5(&VAR_8, VAR_3->xml, VAR_0);

   for (; *VAR_1; ++VAR_1) {
      yxml_ret_t VAR_11 = FUNC_6(&VAR_8, *VAR_1);

      if (VAR_11 < 0)
         goto error;

      switch (VAR_11) {

      case 128:
         if (VAR_9) {
            if (VAR_5 > VAR_4) {
               VAR_3->stack[VAR_4] = VAR_9;
               ++VAR_4;

               VAR_9->children = (rxml_node_t*)FUNC_0(1, sizeof(*VAR_9));
               VAR_9 = VAR_9->children;
            }
            else {
               VAR_9->next = (rxml_node_t*)FUNC_0(1, sizeof(*VAR_9));
               VAR_9 = VAR_9->next;
            }
         }
         else {
            VAR_9 = VAR_2->root_node = (rxml_node_t*)FUNC_0(1, sizeof(*VAR_9));
         }

         VAR_9->name = FUNC_4(VAR_8.elem);
         VAR_10 = ((void*)0);

         ++VAR_5;
         break;

      case 129:
         --VAR_5;

         if (VAR_7 > VAR_3->val) {
            *VAR_7 = '\0';
            VAR_9->data = FUNC_4(VAR_3->val);
            VAR_7 = VAR_3->val;
         }

         if (VAR_5 < VAR_4) {
            --VAR_4;
            VAR_9 = VAR_3->stack[VAR_4];
         }
         break;

      case 130:
         for (VAR_6 = 0; VAR_6 < sizeof(VAR_8.data) && VAR_8.data[VAR_6]; ++VAR_6) {
            *VAR_7 = VAR_8.data[VAR_6];
            ++VAR_7;
         }
         break;

      case 132:
         if (VAR_10)
            VAR_10 = VAR_10->next = (struct rxml_attrib_node*)FUNC_0(1, sizeof(*VAR_10));
         else
            VAR_10 = VAR_9->attrib = (struct rxml_attrib_node*)FUNC_0(1, sizeof(*VAR_10));

         VAR_10->attrib = FUNC_4(VAR_8.attr);
         VAR_7 = VAR_3->val;
         break;

      case 131:
         for(VAR_6 = 0; VAR_6 < sizeof(VAR_8.data) && VAR_8.data[VAR_6]; ++VAR_6) {
            *VAR_7 = VAR_8.data[VAR_6];
            ++VAR_7;
         }
         break;

      case 133:
         if (VAR_7 > VAR_3->val) {
            *VAR_7 = '\0';
            VAR_10->value = FUNC_4(VAR_3->val);
            VAR_7 = VAR_3->val;
         }
         break;

      default:
         break;
      }
   }

   FUNC_1(VAR_3);
   return VAR_2;

error:
   FUNC_3(VAR_2);
   FUNC_1(VAR_3);
   return ((void*)0);
}
