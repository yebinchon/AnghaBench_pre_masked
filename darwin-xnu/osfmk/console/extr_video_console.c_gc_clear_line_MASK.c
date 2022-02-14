
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_columns; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,char,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_2;
  VAR_6 = VAR_1.v_columns-1;
  break;
 case 1:
  VAR_5 = 0;
  VAR_6 = VAR_2;
  break;
 case 2:
  VAR_5 = 0;
  VAR_6 = VAR_1.v_columns-1;
  break;
 default:
  return;
 }

 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++) {
  FUNC_0(VAR_7, VAR_3, ' ', VAR_0);
 }
}
