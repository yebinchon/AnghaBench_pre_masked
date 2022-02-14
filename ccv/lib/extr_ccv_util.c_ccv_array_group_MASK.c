
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ rank; struct TYPE_10__* parent; scalar_t__ element; } ;
typedef TYPE_1__ ccv_ptree_node_t ;
struct TYPE_11__ {int rnum; } ;
typedef TYPE_2__ ccv_array_t ;
typedef scalar_t__ (* ccv_array_group_f ) (scalar_t__,scalar_t__,void*) ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int,int,int ) ;
 int FUNC_5 (TYPE_2__*,int*) ;

int FUNC_6(ccv_array_t* VAR_0, ccv_array_t** VAR_1, ccv_array_group_f VAR_2, void* VAR_3)
{
 int VAR_4, VAR_5;
 ccv_ptree_node_t* VAR_6 = (ccv_ptree_node_t*)FUNC_1(VAR_0->rnum * sizeof(ccv_ptree_node_t));
 for (VAR_4 = 0; VAR_4 < VAR_0->rnum; VAR_4++)
 {
  VAR_6[VAR_4].parent = 0;
  VAR_6[VAR_4].element = FUNC_3(VAR_0, VAR_4);
  VAR_6[VAR_4].rank = 0;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0->rnum; VAR_4++)
 {
  if (!VAR_6[VAR_4].element)
   continue;
  ccv_ptree_node_t* VAR_7 = VAR_6 + VAR_4;
  while (VAR_7->parent)
   VAR_7 = VAR_7->parent;
  for (VAR_5 = 0; VAR_5 < VAR_0->rnum; VAR_5++)
  {
   if( VAR_4 != VAR_5 && VAR_6[VAR_5].element && VAR_2(VAR_6[VAR_4].element, VAR_6[VAR_5].element, VAR_3))
   {
    ccv_ptree_node_t* VAR_8 = VAR_6 + VAR_5;

    while(VAR_8->parent)
     VAR_8 = VAR_8->parent;

    if(VAR_8 != VAR_7)
    {
     if(VAR_7->rank > VAR_8->rank)
      VAR_8->parent = VAR_7;
     else
     {
      VAR_7->parent = VAR_8;
      VAR_8->rank += VAR_7->rank == VAR_8->rank;
      VAR_7 = VAR_8;
     }


     ccv_ptree_node_t* VAR_9 = VAR_6 + VAR_5;
     while(VAR_9->parent)
     {
      ccv_ptree_node_t* VAR_10 = VAR_9;
      VAR_9 = VAR_9->parent;
      VAR_10->parent = VAR_7;
     }


     VAR_9 = VAR_6 + VAR_4;
     while(VAR_9->parent)
     {
      ccv_ptree_node_t* VAR_11 = VAR_9;
      VAR_9 = VAR_9->parent;
      VAR_11->parent = VAR_7;
     }
    }
   }
  }
 }
 if (*VAR_1 == 0)
  *VAR_1 = FUNC_4(sizeof(int), VAR_0->rnum, 0);
 else
  FUNC_2(*VAR_1);
 ccv_array_t* VAR_12 = *VAR_1;

 int VAR_13 = 0;
 for(VAR_4 = 0; VAR_4 < VAR_0->rnum; VAR_4++)
 {
  VAR_5 = -1;
  ccv_ptree_node_t* VAR_14 = VAR_6 + VAR_4;
  if(VAR_14->element)
  {
   while(VAR_14->parent)
    VAR_14 = VAR_14->parent;
   if(VAR_14->rank >= 0)
    VAR_14->rank = ~VAR_13++;
   VAR_5 = ~VAR_14->rank;
  }
  FUNC_5(VAR_12, &VAR_5);
 }
 FUNC_0(VAR_6);
 return VAR_13;
}
