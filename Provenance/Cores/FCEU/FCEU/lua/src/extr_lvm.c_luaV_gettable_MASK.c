
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int metatable; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int const*,int const*,int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int const*,char*) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *,int ,int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;

void FUNC_11 (lua_State *VAR_2, const TValue *VAR_3, TValue *VAR_4, StkId VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    const TValue *VAR_7;
    if (FUNC_10(VAR_3)) {
      Table *VAR_8 = FUNC_2(VAR_3);
      const TValue *VAR_9 = FUNC_5(VAR_8, VAR_4);
      if (!FUNC_9(VAR_9) ||
          (VAR_7 = FUNC_1(VAR_2, VAR_8->metatable, VAR_1)) == ((void*)0)) {
        FUNC_7(VAR_2, VAR_5, VAR_9);
        return;
      }

    }
    else if (FUNC_9(VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_1)))
      FUNC_4(VAR_2, VAR_3, "index");
    if (FUNC_8(VAR_7)) {
      FUNC_0(VAR_2, VAR_5, VAR_7, VAR_3, VAR_4);
      return;
    }
    VAR_3 = VAR_7;
  }
  FUNC_3(VAR_2, "loop in gettable");
}
