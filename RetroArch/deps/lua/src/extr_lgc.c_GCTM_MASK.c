
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ top; int allowhook; TYPE_1__* ci; } ;
typedef TYPE_2__ lua_State ;
typedef int lu_byte ;
struct TYPE_17__ {int gcrunning; } ;
typedef TYPE_3__ global_State ;
struct TYPE_15__ {int callstatus; } ;
typedef int const TValue ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,char*,char const*) ;
 int const* FUNC_4 (TYPE_2__*,int const*,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int const*,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int const*) ;
 char* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12 (lua_State *VAR_6, int VAR_7) {
  global_State *VAR_8 = FUNC_0(VAR_6);
  const TValue *VAR_9;
  TValue VAR_10;
  FUNC_6(VAR_6, &VAR_10, FUNC_11(VAR_8));
  VAR_9 = FUNC_4(VAR_6, &VAR_10, VAR_4);
  if (VAR_9 != ((void*)0) && FUNC_9(VAR_9)) {
    int VAR_11;
    lu_byte VAR_12 = VAR_6->allowhook;
    int VAR_13 = VAR_8->gcrunning;
    VAR_6->allowhook = 0;
    VAR_8->gcrunning = 0;
    FUNC_7(VAR_6, VAR_6->top, VAR_9);
    FUNC_7(VAR_6, VAR_6->top + 1, &VAR_10);
    VAR_6->top += 2;
    VAR_6->ci->callstatus |= VAR_0;
    VAR_11 = FUNC_1(VAR_6, VAR_5, ((void*)0), FUNC_5(VAR_6, VAR_6->top - 2), 0);
    VAR_6->ci->callstatus &= ~VAR_0;
    VAR_6->allowhook = VAR_12;
    VAR_8->gcrunning = VAR_13;
    if (VAR_11 != VAR_3 && VAR_7) {
      if (VAR_11 == VAR_2) {
        const char *VAR_14 = (FUNC_10(VAR_6->top - 1))
                            ? FUNC_8(VAR_6->top - 1)
                            : "no message";
        FUNC_3(VAR_6, "error in __gc metamethod (%s)", VAR_14);
        VAR_11 = VAR_1;
      }
      FUNC_2(VAR_6, VAR_11);
    }
  }
}
