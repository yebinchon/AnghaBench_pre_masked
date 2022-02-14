
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int TString ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,int *,int const*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int const*,scalar_t__,scalar_t__,int const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_1, const TValue *VAR_2, const char *VAR_3) {
  const TValue *VAR_4;
  TString *VAR_5 = FUNC_2(VAR_1, VAR_3);
  FUNC_0(VAR_1, 1);
  if (FUNC_3(VAR_1, VAR_2, VAR_5, VAR_4, VAR_0, VAR_1->top - 1))
    VAR_1->top--;
  else {
    FUNC_6(VAR_1, VAR_1->top, VAR_5);
    FUNC_1(VAR_1);
    FUNC_4(VAR_1, VAR_2, VAR_1->top - 1, VAR_1->top - 2, VAR_4);
    VAR_1->top -= 2;
  }
  FUNC_5(VAR_1);
}
