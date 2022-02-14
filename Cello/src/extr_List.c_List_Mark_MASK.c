
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* var ;
struct List {void* head; } ;


 void** FUNC_0 (struct List*,void*) ;

__attribute__((used)) static void FUNC_1(var VAR_0, var VAR_1, void(*VAR_2)(var,void*)) {
  struct List* VAR_3 = VAR_0;
  var VAR_4 = VAR_3->head;
  while (VAR_4) {
    VAR_2(VAR_1, VAR_4);
    VAR_4 = *FUNC_0(VAR_3, VAR_4);
  }
}
