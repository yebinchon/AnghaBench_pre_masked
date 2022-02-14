
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ weight; struct TYPE_11__* parent; struct TYPE_11__** head; struct TYPE_11__* prev; TYPE_1__* next; } ;
typedef TYPE_2__ node_t ;
typedef int huff_t ;
struct TYPE_10__ {scalar_t__ weight; TYPE_2__** head; } ;


 int FUNC_0 (int *,TYPE_2__**) ;
 TYPE_2__** FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(huff_t* VAR_0, node_t *VAR_1) {
 node_t *VAR_2;

 if (!VAR_1) {
  return;
 }

 if (VAR_1->next != ((void*)0) && VAR_1->next->weight == VAR_1->weight) {
     VAR_2 = *VAR_1->head;
  if (VAR_2 != VAR_1->parent) {
   FUNC_2(VAR_0, VAR_2, VAR_1);
  }
  FUNC_3(VAR_2, VAR_1);
 }
 if (VAR_1->prev && VAR_1->prev->weight == VAR_1->weight) {
  *VAR_1->head = VAR_1->prev;
 } else {
     *VAR_1->head = ((void*)0);
  FUNC_0(VAR_0, VAR_1->head);
 }
 VAR_1->weight++;
 if (VAR_1->next && VAR_1->next->weight == VAR_1->weight) {
  VAR_1->head = VAR_1->next->head;
 } else {
  VAR_1->head = FUNC_1(VAR_0);
  *VAR_1->head = VAR_1;
 }
 if (VAR_1->parent) {
  FUNC_4(VAR_0, VAR_1->parent);
  if (VAR_1->prev == VAR_1->parent) {
   FUNC_3(VAR_1, VAR_1->parent);
   if (*VAR_1->head == VAR_1) {
    *VAR_1->head = VAR_1->parent;
   }
  }
 }
}
