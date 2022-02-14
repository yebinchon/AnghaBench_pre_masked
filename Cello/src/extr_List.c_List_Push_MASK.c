
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {int nitems; int tail; } ;


 struct List* FUNC_0 (struct List*) ;
 int FUNC_1 (struct List*,struct List*,int ,int *) ;
 int FUNC_2 (struct List*,struct List*) ;

__attribute__((used)) static void FUNC_3(var VAR_0, var VAR_1) {
  struct List* VAR_2 = VAR_0;
  var VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_3, VAR_1);
  FUNC_1(VAR_2, VAR_3, VAR_2->tail, ((void*)0));
  VAR_2->nitems++;
}
