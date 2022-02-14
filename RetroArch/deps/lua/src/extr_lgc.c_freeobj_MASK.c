
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int lua_State ;
struct TYPE_16__ {int lnglen; } ;
struct TYPE_18__ {TYPE_1__ u; int shrlen; } ;
struct TYPE_17__ {int tt; } ;
struct TYPE_15__ {int nupvalues; } ;
typedef TYPE_2__ GCObject ;
 int FUNC_0 (int *,int ) ;
 TYPE_12__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,TYPE_2__*,int ) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17 (lua_State *VAR_0, GCObject *VAR_1) {
  switch (VAR_1->tt) {
    case 132: FUNC_9(VAR_0, FUNC_3(VAR_1)); break;
    case 134: {
      FUNC_0(VAR_0, FUNC_2(VAR_1));
      break;
    }
    case 135: {
      FUNC_11(VAR_0, VAR_1, FUNC_14(FUNC_1(VAR_1)->nupvalues));
      break;
    }
    case 130: FUNC_10(VAR_0, FUNC_4(VAR_1)); break;
    case 129: FUNC_8(VAR_0, FUNC_5(VAR_1)); break;
    case 128: FUNC_11(VAR_0, VAR_1, FUNC_16(FUNC_7(VAR_1))); break;
    case 131:
      FUNC_12(VAR_0, FUNC_6(VAR_1));
      FUNC_11(VAR_0, VAR_1, FUNC_15(FUNC_6(VAR_1)->shrlen));
      break;
    case 133: {
      FUNC_11(VAR_0, VAR_1, FUNC_15(FUNC_6(VAR_1)->u.lnglen));
      break;
    }
    default: FUNC_13(0);
  }
}
