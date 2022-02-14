
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {struct List* head; } ;


 struct List** FUNC_0 (struct List*,struct List*) ;
 int FUNC_1 (struct List*,int,char*,...) ;

__attribute__((used)) static int FUNC_2(var VAR_0, var VAR_1, int VAR_2) {
  struct List* VAR_3 = VAR_0;
  VAR_2 = FUNC_1(VAR_1, VAR_2, "<'List' At 0x%p [", VAR_0);
  var VAR_4 = VAR_3->head;
  while (VAR_4) {
    VAR_2 = FUNC_1(VAR_1, VAR_2, "%$", VAR_4);
    VAR_4 = *FUNC_0(VAR_3, VAR_4);
    if (VAR_4) { VAR_2 = FUNC_1(VAR_1, VAR_2, ", "); }
  }
  return FUNC_1(VAR_1, VAR_2, "]>");
}
