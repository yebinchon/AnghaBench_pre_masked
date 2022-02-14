
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_2__ {int type; int mp; int classic; int nunchuk; } ;
struct wiimote_t {TYPE_1__ exp; } ;





 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct wiimote_t *VAR_0,ubyte *VAR_1)
{
 switch (VAR_0->exp.type) {
  case 128:
   FUNC_2(&VAR_0->exp.nunchuk, VAR_1);
   break;
  case 130:
   FUNC_0(&VAR_0->exp.classic, VAR_1);
   break;
   case 129:
    FUNC_1(&VAR_0->exp.mp, VAR_1);
    break;
  default:
   break;
 }
}
