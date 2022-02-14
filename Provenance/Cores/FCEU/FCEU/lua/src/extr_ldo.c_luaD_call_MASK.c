
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nCcalls; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5 (lua_State *VAR_3, StkId VAR_4, int VAR_5) {
  if (++VAR_3->nCcalls >= VAR_0) {
    if (VAR_3->nCcalls == VAR_0)
      FUNC_3(VAR_3, "C stack overflow");
    else if (VAR_3->nCcalls >= (VAR_0 + (VAR_0>>3)))
      FUNC_2(VAR_3, VAR_1);
  }
  if (FUNC_1(VAR_3, VAR_4, VAR_5) == VAR_2)
    FUNC_4(VAR_3, 1);
  VAR_3->nCcalls--;
  FUNC_0(VAR_3);
}
