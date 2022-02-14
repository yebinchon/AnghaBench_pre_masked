
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ SDL_Event ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

 int FUNC_2 (char*) ;

void FUNC_3(void)
{
 SDL_Event VAR_0;

 while(FUNC_1(&VAR_0))
 {
  switch(VAR_0.type)
  {


   case 128: FUNC_0();FUNC_2("Quit");break;
  }


 }

}
