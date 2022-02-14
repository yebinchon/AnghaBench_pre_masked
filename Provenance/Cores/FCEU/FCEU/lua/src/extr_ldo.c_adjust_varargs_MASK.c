
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int Table ;
struct TYPE_14__ {int numparams; int is_vararg; } ;
typedef int StkId ;
typedef TYPE_2__ Proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;

__attribute__((used)) static StkId FUNC_14 (lua_State *VAR_2, Proto *VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6 = VAR_3->numparams;
  Table *VAR_7 = ((void*)0);
  StkId VAR_8, VAR_9;
  for (; VAR_4 < VAR_6; ++VAR_4)
    FUNC_10(VAR_2->top++);
  VAR_9 = VAR_2->top - VAR_4;
  VAR_8 = VAR_2->top;
  for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
    FUNC_13(VAR_2, VAR_2->top++, VAR_9+VAR_5);
    FUNC_10(VAR_9+VAR_5);
  }

  if (VAR_7) {
    FUNC_9(VAR_2, VAR_2->top++, VAR_7);
    FUNC_7(FUNC_1(FUNC_8(VAR_7)));
  }
  return VAR_8;
}
