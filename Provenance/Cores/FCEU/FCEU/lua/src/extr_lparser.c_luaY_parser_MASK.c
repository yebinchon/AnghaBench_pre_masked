
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct LexState {int * fs; int * buff; } ;
struct FuncState {TYPE_1__* f; int * prev; } ;
typedef int lua_State ;
typedef int ZIO ;
struct TYPE_3__ {scalar_t__ nups; int is_vararg; } ;
typedef TYPE_1__ Proto ;
typedef int Mbuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct LexState*,int ) ;
 int FUNC_1 (struct LexState*) ;
 int FUNC_2 (struct LexState*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct LexState*) ;
 int FUNC_5 (int *,struct LexState*,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct LexState*,struct FuncState*) ;

Proto *FUNC_8 (lua_State *VAR_2, ZIO *VAR_3, Mbuffer *VAR_4, const char *VAR_5) {
  struct LexState VAR_6;
  struct FuncState VAR_7;
  VAR_6.buff = VAR_4;
  FUNC_5(VAR_2, &VAR_6, VAR_3, FUNC_3(VAR_2, VAR_5));
  FUNC_7(&VAR_6, &VAR_7);
  VAR_7.f->is_vararg = VAR_1;
  FUNC_4(&VAR_6);
  FUNC_1(&VAR_6);
  FUNC_0(&VAR_6, VAR_0);
  FUNC_2(&VAR_6);
  FUNC_6(VAR_7.prev == ((void*)0));
  FUNC_6(VAR_7.f->nups == 0);
  FUNC_6(VAR_6.fs == ((void*)0));
  return VAR_7.f;
}
