
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* info; int nval; int ival; } ;
struct TYPE_7__ {int k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;






 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 void* FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *) ;

int FUNC_7 (FuncState *VAR_1, expdesc *VAR_2) {
  FUNC_3(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 128: VAR_2->u.info = FUNC_1(VAR_1, 1); goto vk;
    case 133: VAR_2->u.info = FUNC_1(VAR_1, 0); goto vk;
    case 129: VAR_2->u.info = FUNC_6(VAR_1); goto vk;
    case 130: VAR_2->u.info = FUNC_4(VAR_1, VAR_2->u.ival); goto vk;
    case 131: VAR_2->u.info = FUNC_5(VAR_1, VAR_2->u.nval); goto vk;
    case 132:
     vk:
      VAR_2->k = 132;
      if (VAR_2->u.info <= VAR_0)
        return FUNC_0(VAR_2->u.info);
      else break;
    default: break;
  }

  return FUNC_2(VAR_1, VAR_2);
}
