
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int reqType; } ;
typedef TYPE_1__ HttpContext ;







 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(HttpContext *VAR_0) {
  switch (VAR_0->reqType) {
    case 131:
      FUNC_2(VAR_0);
      break;
    case 128:
      FUNC_4(VAR_0);
      break;
    case 130:
      FUNC_3(VAR_0);
      break;
    case 132:
      FUNC_1(VAR_0);
      break;
    case 129:
      FUNC_0(VAR_0);
      break;
    default:
      FUNC_0(VAR_0);
      break;
  }
}
