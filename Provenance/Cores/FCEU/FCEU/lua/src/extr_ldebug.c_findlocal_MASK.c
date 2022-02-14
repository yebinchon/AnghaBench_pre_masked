
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {int func; int base; } ;
typedef int StkId ;
typedef int Proto ;
typedef TYPE_2__ CallInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int *,int,int ) ;

__attribute__((used)) static const char *FUNC_3 (lua_State *VAR_0, CallInfo *VAR_1, int VAR_2) {
  const char *VAR_3;
  Proto *VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 && (VAR_3 = FUNC_2(VAR_4, VAR_2, FUNC_0(VAR_0, VAR_1))) != ((void*)0))
    return VAR_3;
  else {
    StkId VAR_5 = (VAR_1 == VAR_0->ci) ? VAR_0->top : (VAR_1+1)->func;
    if (VAR_5 - VAR_1->base >= VAR_2 && VAR_2 > 0)
      return "(*temporary)";
    else
      return ((void*)0);
  }
}
