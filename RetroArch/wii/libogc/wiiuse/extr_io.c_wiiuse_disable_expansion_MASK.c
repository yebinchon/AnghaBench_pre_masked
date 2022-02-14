
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int mp; int classic; int nunchuk; } ;
struct wiimote_t {TYPE_1__ exp; int event; } ;




 int VAR_0 ;

 int FUNC_0 (struct wiimote_t*,int ) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wiimote_t*) ;
 int FUNC_6 (struct wiimote_t*,int *) ;

void FUNC_7(struct wiimote_t *VAR_5)
{
 if(!FUNC_1(VAR_5, VAR_1)) return;


 switch(VAR_5->exp.type) {
  case 128:
   FUNC_4(&VAR_5->exp.nunchuk);
   VAR_5->event = VAR_4;
   break;
  case 130:
   FUNC_2(&VAR_5->exp.classic);
   VAR_5->event = VAR_2;
   break;
  case 129:
    FUNC_3(&VAR_5->exp.mp);
    VAR_5->event = VAR_3;
    break;

  default:
   break;
 }

 FUNC_0(VAR_5, VAR_1);
 VAR_5->exp.type = VAR_0;

 FUNC_5(VAR_5);
 FUNC_6(VAR_5,((void*)0));
}
