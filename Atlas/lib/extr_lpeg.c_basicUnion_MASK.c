
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_21__ {scalar_t__ tag; int* cs; } ;
struct TYPE_20__ {int* buff; } ;
typedef TYPE_1__ Instruction ;
typedef TYPE_2__ CharsetTag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__**,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 size_t VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (size_t,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static Instruction *FUNC_11 (lua_State *VAR_7, Instruction *VAR_8, int VAR_9,
                                int VAR_10, int *VAR_11, CharsetTag *VAR_12) {
  Instruction *VAR_13;
  CharsetTag VAR_14;
  FUNC_10(VAR_8, &VAR_14);
  if (VAR_14 == VAR_4 && VAR_12->tag == VAR_4) {
    Instruction *VAR_15 = FUNC_1(VAR_7, &VAR_13, VAR_11, VAR_0);
    FUNC_9(VAR_15, VAR_5, 0);
    FUNC_7(VAR_6, VAR_15[1].buff[VAR_6] = VAR_14[VAR_6] | VAR_12->cs[VAR_6]);
    FUNC_4(VAR_15);
  }
  else if (FUNC_5(&VAR_14, VAR_12) || FUNC_6(VAR_8)) {
    Instruction *VAR_16 = FUNC_1(VAR_7, &VAR_13, VAR_11, VAR_9 + 1 + VAR_10);
    FUNC_3(VAR_16, VAR_8, VAR_9);
    FUNC_2(VAR_16, VAR_9 + 1);
    VAR_16 += VAR_9;
    FUNC_9(VAR_16++, VAR_3, VAR_10 + 1);
    FUNC_0(VAR_7, VAR_16, 2);
  }
  else {

    Instruction *VAR_17 = FUNC_1(VAR_7, &VAR_13, VAR_11, 1 + VAR_9 + 1 + VAR_10);
    FUNC_9(VAR_17++, VAR_1, 1 + VAR_9 + 1);
    FUNC_3(VAR_17, VAR_8, VAR_9); VAR_17 += VAR_9;
    FUNC_9(VAR_17++, VAR_2, 1 + VAR_10);
    FUNC_0(VAR_7, VAR_17, 2);
    FUNC_8(VAR_17 - (1 + VAR_9 + 1));
  }
  return VAR_13;
}
