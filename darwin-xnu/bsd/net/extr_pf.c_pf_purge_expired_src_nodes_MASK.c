
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* ptr; } ;
struct pf_src_node {scalar_t__ states; scalar_t__ expire; TYPE_1__ rule; } ;
struct TYPE_6__ {scalar_t__ states; scalar_t__ max_src_nodes; int src_nodes; } ;
struct TYPE_5__ {int src_nodes; int * scounters; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct pf_src_node* FUNC_1 (int ,int *) ;
 struct pf_src_node* FUNC_2 (int ,int *,struct pf_src_node*) ;
 int FUNC_3 (int ,int *,struct pf_src_node*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,struct pf_src_node*) ;
 int VAR_6 ;

void
FUNC_7(void)
{
 struct pf_src_node *VAR_7, *VAR_8;

 FUNC_0(VAR_2, VAR_0);

 for (VAR_7 = FUNC_1(VAR_3, &VAR_6); VAR_7; VAR_7 = VAR_8) {
  VAR_8 = FUNC_2(VAR_3, &VAR_6, VAR_7);

  if (VAR_7->states <= 0 && VAR_7->expire <= FUNC_5()) {
   if (VAR_7->rule.ptr != ((void*)0)) {
    VAR_7->rule.ptr->src_nodes--;
    if (VAR_7->rule.ptr->states <= 0 &&
        VAR_7->rule.ptr->max_src_nodes <= 0)
     FUNC_4(((void*)0), VAR_7->rule.ptr);
   }
   FUNC_3(VAR_3, &VAR_6, VAR_7);
   VAR_5.scounters[VAR_1]++;
   VAR_5.src_nodes--;
   FUNC_6(&VAR_4, VAR_7);
  }
 }
}
