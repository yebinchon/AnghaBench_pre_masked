
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int luaL_Buffer ;
struct TYPE_9__ {char* s; } ;
struct TYPE_8__ {TYPE_5__* cap; int L; } ;
typedef TYPE_1__ CapState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 char* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_13 (CapState *VAR_1) {
  luaL_Buffer VAR_2;
  const char *VAR_3 = (VAR_1->cap - 1)->s;
  FUNC_5(VAR_1->L, &VAR_2);
  while (!FUNC_2(VAR_1->cap)) {
    int VAR_4;
    const char *VAR_5 = VAR_1->cap->s;
    FUNC_3(&VAR_2, VAR_3, VAR_5 - VAR_3);
    if (FUNC_0(VAR_1->cap) == VAR_0)
      FUNC_12(&VAR_2, VAR_1);
    else if ((VAR_4 = FUNC_11(VAR_1)) == 0) {
      VAR_3 = VAR_5;
      continue;
    }
    else {
      if (VAR_4 > 1) FUNC_10(VAR_1->L, VAR_4 - 1);
      if (!FUNC_9(VAR_1->L, -1))
        FUNC_6(VAR_1->L, "invalid replacement value (a %s)",
                          FUNC_8(VAR_1->L, -1));
      FUNC_4(&VAR_2);
    }

    VAR_3 = FUNC_1(VAR_1->cap - 1);
  }
  FUNC_3(&VAR_2, VAR_3, VAR_1->cap->s - VAR_3);
  FUNC_7(&VAR_2);
  VAR_1->cap++;
}
