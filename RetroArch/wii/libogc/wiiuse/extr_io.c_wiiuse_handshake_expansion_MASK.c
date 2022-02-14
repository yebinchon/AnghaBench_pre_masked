
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uword ;
typedef int ubyte ;
struct TYPE_2__ {int classic; int nunchuk; } ;
struct wiimote_t {int expansion_state; TYPE_1__ exp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 int FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct wiimote_t*,int *,int*,int ) ;
 int FUNC_6 (struct wiimote_t*,int *,int*,int ) ;
 int FUNC_7 (struct wiimote_t*,int*,int ,int,void (*) (struct wiimote_t*,int*,int )) ;
 int FUNC_8 (struct wiimote_t*) ;
 int FUNC_9 (struct wiimote_t*,int *) ;
 int FUNC_10 (struct wiimote_t*,int ,int*,int,void (*) (struct wiimote_t*,int*,int )) ;

void FUNC_11(struct wiimote_t *VAR_6,ubyte *VAR_7,uword VAR_8)
{
 int VAR_9;
 ubyte VAR_10;
 ubyte *VAR_11 = ((void*)0);

 switch(VAR_6->expansion_state) {

  case 0:
   VAR_6->expansion_state = 1;
   VAR_10 = 0x55;
   FUNC_10(VAR_6,VAR_4,&VAR_10,1,FUNC_11);
   break;
  case 1:
   VAR_6->expansion_state = 2;
   VAR_10 = 0x00;
   FUNC_10(VAR_6,VAR_5,&VAR_10,1,FUNC_11);
   break;
  case 2:
   VAR_6->expansion_state = 3;
   VAR_11 = FUNC_3(sizeof(ubyte)*VAR_0);
   FUNC_7(VAR_6,VAR_11,VAR_3,VAR_0,FUNC_11);
   break;
  case 3:
   if(!VAR_7 || !VAR_8) return;
   VAR_9 = FUNC_0(*(int*)(&VAR_7[220]));

   switch(VAR_9) {
    case 128:
     if(!FUNC_6(VAR_6,&VAR_6->exp.nunchuk,VAR_7,VAR_8)) return;
     break;
    case 138:
    case 132:
    case 131:
    case 130:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 129:
     if(!FUNC_5(VAR_6,&VAR_6->exp.classic,VAR_7,VAR_8)) return;
     break;
    default:
     if(!FUNC_5(VAR_6,&VAR_6->exp.classic,VAR_7,VAR_8)) return;





   }
   FUNC_4(VAR_7);

   FUNC_1(VAR_6,VAR_2);
   FUNC_2(VAR_6,VAR_1);
   FUNC_8(VAR_6);
   FUNC_9(VAR_6,((void*)0));
   break;
 }
}
