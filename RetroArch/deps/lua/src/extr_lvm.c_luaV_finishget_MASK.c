
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int metatable; } ;
typedef int TValue ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int const*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int const*,int const*,int *,int ,int) ;
 int * FUNC_5 (int *,int const*,int ) ;
 scalar_t__ FUNC_6 (int *,int const*,int *,int const*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;

void FUNC_13 (lua_State *VAR_3, const TValue *VAR_4, TValue *VAR_5, StkId VAR_6,
                      const TValue *VAR_7) {
  int VAR_8;
  const TValue *VAR_9;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    if (VAR_7 == ((void*)0)) {
      FUNC_7(!FUNC_12(VAR_4));
      VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_1);
      if (FUNC_11(VAR_9))
        FUNC_3(VAR_3, VAR_4, "index");

    }
    else {
      FUNC_7(FUNC_11(VAR_7));
      VAR_9 = FUNC_0(VAR_3, FUNC_1(VAR_4)->metatable, VAR_1);
      if (VAR_9 == ((void*)0)) {
        FUNC_8(VAR_6);
        return;
      }

    }
    if (FUNC_10(VAR_9)) {
      FUNC_4(VAR_3, VAR_9, VAR_4, VAR_5, VAR_6, 1);
      return;
    }
    VAR_4 = VAR_9;
    if (FUNC_6(VAR_3,VAR_4,VAR_5,VAR_7,VAR_2)) {
      FUNC_9(VAR_3, VAR_6, VAR_7);
      return;
    }

  }
  FUNC_2(VAR_3, "'__index' chain too long; possible loop");
}
