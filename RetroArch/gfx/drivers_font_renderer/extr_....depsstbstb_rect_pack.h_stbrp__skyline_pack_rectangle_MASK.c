
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; struct TYPE_8__* next; void* y; } ;
typedef TYPE_1__ stbrp_node ;
typedef void* stbrp_coord ;
struct TYPE_9__ {scalar_t__ height; TYPE_1__* free_head; } ;
typedef TYPE_2__ stbrp_context ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; TYPE_1__** prev_link; } ;
typedef TYPE_3__ stbrp__findresult ;


 TYPE_3__ FUNC_0 (TYPE_2__*,int,int) ;

__attribute__((used)) static stbrp__findresult FUNC_1(stbrp_context *VAR_0, int VAR_1, int VAR_2)
{

   stbrp_node *VAR_3, *VAR_4;
   stbrp__findresult VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);






   if (VAR_5.prev_link == ((void*)0) || VAR_5.y + VAR_2 > VAR_0->height || VAR_0->free_head == ((void*)0))
   {
      VAR_5.prev_link = ((void*)0);
      return VAR_5;
   }


   VAR_3 = VAR_0->free_head;
   VAR_3->x = (stbrp_coord) VAR_5.x;
   VAR_3->y = (stbrp_coord) (VAR_5.y + VAR_2);

   VAR_0->free_head = VAR_3->next;






   VAR_4 = *VAR_5.prev_link;
   if (VAR_4->x < VAR_5.x)
   {

      stbrp_node *VAR_6 = VAR_4->next;
      VAR_4->next = VAR_3;
      VAR_4 = VAR_6;
   }
   else
      *VAR_5.prev_link = VAR_3;



   while (VAR_4->next && VAR_4->next->x <= VAR_5.x + VAR_1)
   {
      stbrp_node *VAR_7 = VAR_4->next;


      VAR_4->next = VAR_0->free_head;
      VAR_0->free_head = VAR_4;
      VAR_4 = VAR_7;
   }


   VAR_3->next = VAR_4;

   if (VAR_4->x < VAR_5.x + VAR_1)
      VAR_4->x = (stbrp_coord) (VAR_5.x + VAR_1);

   return VAR_5;
}
