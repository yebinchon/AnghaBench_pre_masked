
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_count; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
  FUNC_6(VAR_5);

  VAR_3.m.frame_count++;

  if (VAR_4 & VAR_2) {
    FUNC_3();
    goto end;
  }

  if (VAR_4 & VAR_0) {
    FUNC_0();
    goto end;
  }

  if (VAR_4 & VAR_1) {
    FUNC_2();
    goto end;
  }



  FUNC_4();
  FUNC_1();

end:
  FUNC_5(VAR_5);
}
