
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int keys; } ;
struct TYPE_3__ {int buttonA; int throbber; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_5(char *VAR_5, char *VAR_6)
{
  if (VAR_2)
    return;


  FUNC_3(&VAR_4.throbber);


  FUNC_1(VAR_5, VAR_6, 0);


  VAR_4.buttonA = FUNC_4(VAR_0,0);


  while (VAR_3.keys & VAR_1)
    FUNC_2();
  while (!(VAR_3.keys & VAR_1))
    FUNC_2();


  FUNC_0();
}
