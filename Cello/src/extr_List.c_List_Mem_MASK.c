
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {struct List* head; } ;


 struct List** FUNC_0 (struct List*,struct List*) ;
 scalar_t__ FUNC_1 (struct List*,struct List*) ;

__attribute__((used)) static bool FUNC_2(var VAR_0, var VAR_1) {
  struct List* VAR_2 = VAR_0;
  var VAR_3 = VAR_2->head;
  while (VAR_3) {
    if (FUNC_1(VAR_3, VAR_1)) { return 1; }
    VAR_3 = *FUNC_0(VAR_2, VAR_3);
  }
  return 0;
}
