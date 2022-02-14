
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * var ;
struct Exception {int msg; int * obj; } ;


 int VAR_0 ;
 int * FUNC_0 (struct Exception*) ;
 int FUNC_1 (struct Exception*) ;
 int FUNC_2 (struct Exception*) ;
 struct Exception* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,char const*,int *) ;

var FUNC_6(var VAR_1, const char* VAR_2, var VAR_3) {

  struct Exception* VAR_4 = FUNC_3(VAR_0);

  VAR_4->obj = VAR_1;
  FUNC_5(VAR_4->msg, 0, VAR_2, VAR_3);

  if (FUNC_2(VAR_4) >= 1) {
    FUNC_4(*FUNC_0(VAR_4), 1);
  } else {
    FUNC_1(VAR_4);
  }

  return ((void*)0);

}
