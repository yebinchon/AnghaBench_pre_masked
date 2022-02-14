
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {scalar_t__ detected; } ;
struct TYPE_4__ {TYPE_1__ poll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
  uint* VAR_5 = &VAR_2;
  uint VAR_6 = FUNC_0(*VAR_5 - 1);
  *VAR_5 = FUNC_1(*VAR_5) | VAR_6;


  VAR_4.poll.detected = 0;

  if(VAR_6 != 0xffff)
  {
    uint VAR_7 = FUNC_2();
    VAR_3 -= 2;
    FUNC_4(VAR_7);
    FUNC_3(VAR_1);
    return;
  }
  VAR_3 += 2;
  FUNC_3(VAR_0);
}
