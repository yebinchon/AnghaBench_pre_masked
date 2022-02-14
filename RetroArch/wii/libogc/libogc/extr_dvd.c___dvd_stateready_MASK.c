
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state; int cmd; int (* cb ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ dvdcmdblk ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,TYPE_1__*) ;

void FUNC_7()
{
 dvdcmdblk *VAR_6;
 if(!FUNC_0()) {
  VAR_3 = ((void*)0);
  return;
 }

 VAR_3 = FUNC_1();

 if(VAR_4) {
  VAR_3->state = -1;
  VAR_6 = VAR_3;
  VAR_3 = &VAR_2;
  if(VAR_6->cb) VAR_6->cb(-1,VAR_6);
  FUNC_7();
  return;
 }

 VAR_1 = VAR_3->cmd;

 if(VAR_5) {
  if(VAR_5<=7) {
   switch(VAR_5) {
    case 1:
     VAR_3->state = 6;
     FUNC_5();
     break;
    case 2:
     VAR_3->state = 11;
     FUNC_5();
     break;
    case 3:
     VAR_3->state = 4;
     FUNC_5();
     break;
    case 4:
     VAR_3->state = 5;
     FUNC_5();
     break;
    case 5:
     VAR_3->state = -1;
     FUNC_4(VAR_0);
     break;
    case 6:
     VAR_3->state = 3;
     FUNC_3();
     break;
    case 7:
     VAR_3->state = 7;
     FUNC_5();
     break;
    default:
     break;

   }
  }
  VAR_5 = 0;
  return;
 }
 VAR_3->state = 1;
 FUNC_2(VAR_3);
}
