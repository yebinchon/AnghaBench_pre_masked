
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int info; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_10__ {int k; void* t; int f; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;





 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void*) ;

void FUNC_6 (FuncState *VAR_1, expdesc *VAR_2) {
  int VAR_3;
  FUNC_3(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 130: case 129: case 128: {
      VAR_3 = VAR_0;
      break;
    }
    case 132: {
      VAR_3 = FUNC_4(VAR_1);
      break;
    }
    case 131: {
      FUNC_0(VAR_1, VAR_2);
      VAR_3 = VAR_2->u.s.info;
      break;
    }
    default: {
      VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
      break;
    }
  }
  FUNC_2(VAR_1, &VAR_2->f, VAR_3);
  FUNC_5(VAR_1, VAR_2->t);
  VAR_2->t = VAR_0;
}
