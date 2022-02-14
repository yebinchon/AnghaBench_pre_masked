
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_14__ {scalar_t__ code; int offset; } ;
struct TYPE_15__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;
typedef int CharsetTag ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*,int,int,int*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static Instruction *FUNC_7 (lua_State *VAR_2, Instruction *VAR_3, int VAR_4,
                                   int VAR_5, int *VAR_6, CharsetTag *VAR_7) {
  int VAR_8 = FUNC_2(VAR_3, VAR_4);
  if (VAR_8 == 0)
    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  else if ((VAR_3 + VAR_8 - 1)->i.code == VAR_1 || !FUNC_3(VAR_3, VAR_8, VAR_7)) {
    Instruction *VAR_9;
    int VAR_10 = *VAR_6;
    int VAR_11 = VAR_10 + VAR_8;
    *VAR_6 = VAR_11;
    VAR_9 = FUNC_7(VAR_2, VAR_3 + VAR_8, VAR_4 - VAR_8, VAR_5, VAR_6, VAR_7);
    FUNC_1(VAR_9 + VAR_10, VAR_3, VAR_8);
    (VAR_9 + VAR_11 - 1)->i.offset = *VAR_6 - (VAR_11 - 1);
    return VAR_9;
  }
  else {
    Instruction *VAR_12;
    int VAR_13 = *VAR_6;
    int VAR_14 = VAR_13 + VAR_8 + 1;
    int VAR_15 = FUNC_6(VAR_3);
    *VAR_6 = VAR_14;
    VAR_12 = FUNC_7(VAR_2, VAR_3 + VAR_8, VAR_4 - VAR_8, VAR_5, VAR_6, VAR_7);
    FUNC_1(VAR_12 + VAR_13, VAR_3, VAR_15);
    (VAR_12 + VAR_13)->i.offset++;
    VAR_13 += VAR_15;
    FUNC_5(VAR_12 + VAR_13, VAR_0, VAR_8 - VAR_15 + 1, 1); VAR_13++;
    FUNC_1(VAR_12 + VAR_13, VAR_3 + VAR_15, VAR_8 - VAR_15 - 1);
    VAR_13 += VAR_8 - VAR_15 - 1;
    FUNC_4(VAR_12 + VAR_13, VAR_1, *VAR_6 - (VAR_14 - 1));
    return VAR_12;
  }
}
