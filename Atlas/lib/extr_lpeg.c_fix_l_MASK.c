
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {scalar_t__ code; int offset; } ;
struct TYPE_12__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*,int,int,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 TYPE_2__* FUNC_20 (int *,int) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 size_t FUNC_25 (TYPE_2__*,int) ;
 int FUNC_26 (int *,int) ;

__attribute__((used)) static Instruction *FUNC_27 (lua_State *VAR_6, int VAR_7) {
  Instruction *VAR_8;
  int VAR_9;
  int VAR_10 = 2;
  int VAR_11 = 0;
  int VAR_12 = FUNC_7(VAR_6);
  FUNC_10(VAR_6);
  FUNC_13(VAR_6, 1);

  FUNC_14(VAR_6);
  while (FUNC_11(VAR_6, VAR_7) != 0) {
    int VAR_13;
    if (FUNC_19(VAR_6, -2) == 1 && FUNC_9(VAR_6, -1)) {
      FUNC_16(VAR_6, VAR_12 + 2);
      continue;
    }
    if (!FUNC_26(VAR_6, -1))
      FUNC_5(VAR_6, "invalid field in grammar");
    VAR_13 = FUNC_22(VAR_6, -1) + 1;
    if (VAR_10 >= VAR_5 - VAR_13)
      FUNC_5(VAR_6, "grammar too large");
    FUNC_4(VAR_6, VAR_4, "grammar has too many rules");
    FUNC_8(VAR_6, -2);
    FUNC_15(VAR_6, -1);
    FUNC_15(VAR_6, -1);
    FUNC_13(VAR_6, VAR_10);
    FUNC_17(VAR_6, VAR_12 + 1);
    VAR_10 += VAR_13;
    VAR_11++;
  }
  FUNC_3(VAR_6, VAR_11 > 0, VAR_7, "empty grammar");
  VAR_8 = FUNC_20(VAR_6, VAR_10);
  VAR_8++;
  FUNC_23(VAR_8++, VAR_1, VAR_10 - 1);
  for (VAR_9 = 1; VAR_9 <= VAR_11; VAR_9++) {
    VAR_8 += FUNC_0(VAR_6, VAR_8, VAR_12 + 1 + VAR_9*2);
    FUNC_23(VAR_8++, VAR_3, 0);
  }
  VAR_8 -= VAR_10;
  VAR_10 = 2;
  for (VAR_9 = 1; VAR_9 <= VAR_11; VAR_9++) {
    int VAR_14 = FUNC_22(VAR_6, VAR_12 + 1 + VAR_9*2) + 1;
    FUNC_1(VAR_6, VAR_8, VAR_10, VAR_10 + VAR_14, VAR_12 + 1, VAR_12 + 2 + VAR_9*2);
    VAR_10 += VAR_14;
  }
  FUNC_15(VAR_6, VAR_12 + 2);
  FUNC_6(VAR_6, VAR_12 + 1);
  VAR_9 = FUNC_19(VAR_6, -1);
  FUNC_12(VAR_6, 1);
  if (VAR_9 == 0)
    FUNC_5(VAR_6, "initial rule not defined in given grammar");
  FUNC_23(VAR_8, VAR_0, VAR_9);

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9 += FUNC_24(VAR_8 + VAR_9)) {
    if (VAR_8[VAR_9].i.code == VAR_2) {
      int VAR_15 = FUNC_2(VAR_6, VAR_12 + 1, VAR_8[VAR_9].i.offset);
      VAR_8[VAR_9].i.code = (VAR_8[FUNC_25(VAR_8, VAR_9 + 1)].i.code == VAR_3) ? VAR_1 : VAR_0;
      VAR_8[VAR_9].i.offset = VAR_15 - VAR_9;
    }
  }
  FUNC_21(VAR_8);
  FUNC_16(VAR_6, VAR_7);
  FUNC_18(VAR_6, VAR_12);
  return VAR_8;
}
