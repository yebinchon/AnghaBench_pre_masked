
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int board_type; } ;



 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int (*) (int *),int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_4(FUNC_2, ((void*)0), 0);

 switch (VAR_1->board_type) {
 case 128:

  FUNC_1(FUNC_0(12), 1);
  FUNC_1(VAR_0, 0x1000);
  break;
 default:
  FUNC_3("PowerOff");
  break;
 }

 FUNC_2(((void*)0));
}
