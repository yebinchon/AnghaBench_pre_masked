
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(board_info_t *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 8;
 while (1) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);

  if ((VAR_3 & VAR_1) == 0)
   break;

  FUNC_2(1);

  if (VAR_4-- < 0) {
   FUNC_0(VAR_2->dev, "timeout waiting EEPROM\n");
   break;
  }
 }

 return 0;
}
