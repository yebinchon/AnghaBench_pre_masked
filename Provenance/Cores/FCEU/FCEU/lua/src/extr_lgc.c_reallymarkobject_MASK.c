
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_26__ ;
typedef struct TYPE_32__ TYPE_24__ ;
typedef struct TYPE_31__ TYPE_22__ ;
typedef struct TYPE_30__ TYPE_20__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;


struct TYPE_36__ {TYPE_6__* gray; } ;
typedef TYPE_4__ global_State ;
struct TYPE_34__ {int value; } ;
struct TYPE_37__ {TYPE_2__ u; int * v; } ;
typedef TYPE_5__ UpVal ;
typedef int Table ;
struct TYPE_29__ {int tt; } ;
struct TYPE_38__ {TYPE_1__ gch; } ;
struct TYPE_35__ {TYPE_6__* gclist; } ;
struct TYPE_33__ {TYPE_3__ c; } ;
struct TYPE_32__ {TYPE_6__* gclist; } ;
struct TYPE_31__ {TYPE_6__* gclist; } ;
struct TYPE_30__ {TYPE_6__* gclist; } ;
struct TYPE_28__ {int * env; int * metatable; } ;
typedef TYPE_6__ GCObject ;
 TYPE_26__* FUNC_0 (TYPE_6__*) ;
 TYPE_24__* FUNC_1 (TYPE_6__*) ;
 TYPE_22__* FUNC_2 (TYPE_6__*) ;
 TYPE_20__* FUNC_3 (TYPE_6__*) ;
 TYPE_18__* FUNC_4 (TYPE_6__*) ;
 TYPE_5__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_13 (global_State *VAR_0, GCObject *VAR_1) {
  FUNC_9(FUNC_8(VAR_1) && !FUNC_7(VAR_0, VAR_1));
  FUNC_12(VAR_1);
  switch (VAR_1->gch.tt) {
    case 132: {
      return;
    }
    case 128: {
      Table *VAR_2 = FUNC_4(VAR_1)->metatable;
      FUNC_6(VAR_1);
      if (VAR_2) FUNC_10(VAR_0, VAR_2);
      FUNC_10(VAR_0, FUNC_4(VAR_1)->env);
      return;
    }
    case 129: {
      UpVal *VAR_3 = FUNC_5(VAR_1);
      FUNC_11(VAR_0, VAR_3->v);
      if (VAR_3->v == &VAR_3->u.value)
        FUNC_6(VAR_1);
      return;
    }
    case 134: {
      FUNC_0(VAR_1)->c.gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 131: {
      FUNC_1(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 130: {
      FUNC_3(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 133: {
      FUNC_2(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    default: FUNC_9(0);
  }
}
