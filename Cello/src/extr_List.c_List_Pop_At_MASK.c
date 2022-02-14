
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct List* var ;
struct List {int nitems; } ;
typedef int int64_t ;


 struct List* FUNC_0 (struct List*,int ) ;
 int FUNC_1 (struct List*,struct List*) ;
 int FUNC_2 (struct List*,struct List*) ;
 int FUNC_3 (struct List*) ;
 int FUNC_4 (struct List*) ;

__attribute__((used)) static void FUNC_5(var VAR_0, var VAR_1) {

  struct List* VAR_2 = VAR_0;
  int64_t VAR_3 = FUNC_3(VAR_1);

  var VAR_4 = FUNC_0(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_4);
  FUNC_4(VAR_4);
  FUNC_1(VAR_2, VAR_4);
  VAR_2->nitems--;
}
