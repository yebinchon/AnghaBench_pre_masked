
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * timer; int * initTimer; int state; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int * VAR_2 ;
 int FUNC_1 (int **) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2() {
  if (VAR_1 == ((void*)0)) {
    return;
  }




  FUNC_0("dnode:%s is stopped", VAR_3);

  VAR_1->state = VAR_0;
  VAR_2 = ((void*)0);
  if (VAR_1->initTimer != ((void*)0)) {
    FUNC_1(&(VAR_1->initTimer));
  }
  if (VAR_1->timer != ((void*)0)) {
    FUNC_1(&(VAR_1->timer));
  }
}
