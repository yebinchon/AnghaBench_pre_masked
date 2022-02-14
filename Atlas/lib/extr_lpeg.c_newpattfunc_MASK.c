
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int offset; int code; } ;
struct TYPE_5__ {int buff; int f; TYPE_1__ i; } ;
typedef int PattFunc ;
typedef TYPE_2__ Instruction ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,void const*,size_t) ;
 TYPE_2__* FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_1, PattFunc VAR_2, const void *VAR_3, size_t VAR_4) {
  int VAR_5 = FUNC_0(VAR_4) + 1;
  Instruction *VAR_6 = FUNC_2(VAR_1, VAR_5);
  VAR_6[0].i.code = VAR_0;
  VAR_6[0].i.offset = VAR_5;
  VAR_6[1].f = VAR_2;
  FUNC_1(VAR_6[2].buff, VAR_3, VAR_4);
}
