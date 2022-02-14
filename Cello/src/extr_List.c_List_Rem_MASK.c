
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {int nitems; struct List* head; } ;


 int FUNC_0 (struct List*,struct List*) ;
 struct List** FUNC_1 (struct List*,struct List*) ;
 int FUNC_2 (struct List*,struct List*) ;
 int VAR_0 ;
 int FUNC_3 (struct List*) ;
 scalar_t__ FUNC_4 (struct List*,struct List*) ;
 int FUNC_5 (int ,char*,struct List*) ;

__attribute__((used)) static void FUNC_6(var VAR_1, var VAR_2) {
  struct List* VAR_3 = VAR_1;
  var VAR_4 = VAR_3->head;
  while (VAR_4) {
    if (FUNC_4(VAR_4, VAR_2)) {
      FUNC_2(VAR_3, VAR_4);
      FUNC_3(VAR_4);
      FUNC_0(VAR_3, VAR_4);
      VAR_3->nitems--;
      return;
    }
    VAR_4 = *FUNC_1(VAR_3, VAR_4);
  }

  FUNC_5(VAR_0, "Object %$ not in List!", VAR_2);
}
