
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int board_type; } ;


 char* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,char*) ;

const char *FUNC_4(void)
{
 static char VAR_1[80];
 FUNC_3(VAR_1, "%s (%s)",
  FUNC_0(VAR_0->board_type),
  FUNC_1(FUNC_2()));
 return VAR_1;
}
