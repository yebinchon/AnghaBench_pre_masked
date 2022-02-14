
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int pause; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_condition_t ;
__attribute__((used)) static void FUNC_0(rc_condition_t* VAR_0, int* VAR_1) {
  if (VAR_0->next != 0) {
    FUNC_0(VAR_0->next, VAR_1);
  }

  switch (VAR_0->type) {
    case 129:
      *VAR_1 = VAR_0->pause = 1;
      break;

    case 131:
    case 128:
    case 132:
    case 130:
      VAR_0->pause = *VAR_1;
      break;

    default:
      *VAR_1 = VAR_0->pause = 0;
      break;
  }
}
