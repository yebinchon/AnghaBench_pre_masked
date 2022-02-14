
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rawcmd; int reset; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_6)
{
 if (VAR_6 >= 0 && VAR_6 < VAR_2) {
  VAR_5 = FUNC_0(VAR_6);
  VAR_4 = VAR_6;
 }
 if (VAR_5 != 1 && VAR_5 != 0) {
  FUNC_2("bad fdc value\n");
  return;
 }
 FUNC_4(VAR_5, ~0, 8);



 if (VAR_0->rawcmd == 2)
  FUNC_3(1);
 if (FUNC_1(VAR_1) != VAR_3)
  VAR_0->reset = 1;
}
