
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hookmask; scalar_t__ hookcount; int ci; int const* savedpc; } ;
typedef TYPE_2__ lua_State ;
typedef int lu_byte ;
struct TYPE_7__ {int * p; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
typedef int Proto ;
typedef int const Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_4, const Instruction *VAR_5) {
  lu_byte VAR_6 = VAR_4->hookmask;
  const Instruction *VAR_7 = VAR_4->savedpc;
  VAR_4->savedpc = VAR_5;
  if ((VAR_6 & VAR_2) && VAR_4->hookcount == 0) {
    FUNC_4(VAR_4);
    FUNC_2(VAR_4, VAR_0, -1);
  }
  if (VAR_6 & VAR_3) {
    Proto *VAR_8 = FUNC_0(VAR_4->ci)->l.p;
    int VAR_9 = FUNC_3(VAR_5, VAR_8);
    int VAR_10 = FUNC_1(VAR_8, VAR_9);


    if (VAR_9 == 0 || VAR_5 <= VAR_7 || VAR_10 != FUNC_1(VAR_8, FUNC_3(VAR_7, VAR_8)))
      FUNC_2(VAR_4, VAR_1, VAR_10);
  }
}
