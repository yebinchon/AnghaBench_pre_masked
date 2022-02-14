
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {scalar_t__ nitems; struct List* head; int * tail; } ;


 int FUNC_0 (struct List*,struct List*) ;
 struct List** FUNC_1 (struct List*,struct List*) ;
 int FUNC_2 (struct List*) ;

__attribute__((used)) static void FUNC_3(var VAR_0) {
  struct List* VAR_1 = VAR_0;
  var VAR_2 = VAR_1->head;
  while (VAR_2) {
    var VAR_3 = *FUNC_1(VAR_1, VAR_2);
   FUNC_2(VAR_2);
    FUNC_0(VAR_1, VAR_2);
    VAR_2 = VAR_3;
  }
  VAR_1->tail = ((void*)0);
  VAR_1->head = ((void*)0);
  VAR_1->nitems = 0;
}
