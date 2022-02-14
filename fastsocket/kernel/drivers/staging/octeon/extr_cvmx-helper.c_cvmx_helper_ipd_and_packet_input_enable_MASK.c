
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;

int FUNC_8(void)
{
 int VAR_3;
 int VAR_4;


 FUNC_5();






 VAR_3 = FUNC_3();
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_4(VAR_4) > 0)
   FUNC_2(VAR_4);
 }


 FUNC_6();

 if ((FUNC_0(VAR_2)
      || FUNC_0(VAR_1))
     && (FUNC_7()->board_type != VAR_0))
  FUNC_1();
 return 0;
}
