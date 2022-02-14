
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
typedef int uint64_t ;
struct List {size_t nitems; struct List* head; } ;


 struct List** FUNC_0 (struct List*,struct List*) ;
 int FUNC_1 (struct List*) ;

__attribute__((used)) static uint64_t FUNC_2(var VAR_0) {
  struct List* VAR_1 = VAR_0;
  uint64_t VAR_2 = 0;

  var VAR_3 = VAR_1->head;
  for (size_t VAR_4 = 0; VAR_4 < VAR_1->nitems; VAR_4++) {
    VAR_2 ^= FUNC_1(VAR_3);
    VAR_3 = *FUNC_0(VAR_1, VAR_3);
  }

  return VAR_2;
}
