
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_10__ {int L; int ptop; TYPE_1__* cap; } ;
struct TYPE_9__ {scalar_t__ s; scalar_t__ e; } ;
struct TYPE_8__ {int idx; } ;
typedef TYPE_2__ StrAux ;
typedef TYPE_3__ CapState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,char const) ;
 char* FUNC_4 (int ,int ,size_t*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7 (luaL_Buffer *VAR_1, CapState *VAR_2) {
  StrAux VAR_3[VAR_0];
  int VAR_4;
  size_t VAR_5, VAR_6;
  const char *VAR_7;
  FUNC_6(VAR_2, VAR_2->cap->idx);
  VAR_7 = FUNC_4(VAR_2->L, FUNC_5(VAR_2->ptop), &VAR_5);
  VAR_4 = FUNC_0(VAR_2, VAR_3, 0) - 1;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_7[VAR_6] != '%' || VAR_7[++VAR_6] < '0' || VAR_7[VAR_6] > '9')
      FUNC_1(VAR_1, VAR_7[VAR_6]);
    else {
      int VAR_8 = VAR_7[VAR_6] - '0';
      if (VAR_8 > VAR_4)
        FUNC_3(VAR_2->L, "invalid capture index (%c)", VAR_7[VAR_6]);
      FUNC_2(VAR_1, VAR_3[VAR_8].s, VAR_3[VAR_8].e - VAR_3[VAR_8].s);
    }
  }
}
