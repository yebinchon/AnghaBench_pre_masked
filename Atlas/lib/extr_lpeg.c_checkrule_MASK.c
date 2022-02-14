
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ code; scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_4, Instruction *VAR_5, int VAR_6, int VAR_7,
                       int VAR_8, int VAR_9) {
  int VAR_10;
  int VAR_11 = 0;
  for (VAR_10 = VAR_6; VAR_10 < VAR_7; VAR_10 += FUNC_3(VAR_5 + VAR_10)) {
    if (VAR_5[VAR_10].i.code == VAR_2 && VAR_5[VAR_10].i.offset < 0) {
      int VAR_12 = FUNC_1(VAR_5, VAR_10);
      FUNC_0(VAR_5[VAR_12 - 1].i.code == VAR_0 && FUNC_1(VAR_5, VAR_12 - 1) == VAR_10 + 1);
      if (VAR_12 <= VAR_11) {
        if (!FUNC_5(VAR_4, VAR_5, VAR_5 + VAR_12, VAR_5 + VAR_10, VAR_8, VAR_9))
          FUNC_2(VAR_4, "possible infinite loop in %s", FUNC_4(VAR_4, VAR_9));
      }
    }
    else if (VAR_5[VAR_10].i.code == VAR_1)
      VAR_11 = VAR_10;
  }
  FUNC_0(VAR_5[VAR_10 - 1].i.code == VAR_3);
  FUNC_5(VAR_4, VAR_5, VAR_5 + VAR_6, VAR_5 + VAR_7 - 1, VAR_8, VAR_9);
}
