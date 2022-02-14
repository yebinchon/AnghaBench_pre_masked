
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int state; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(s32 VAR_2)
{
 if(VAR_2==0x0010) {
  VAR_0->state = -1;
  FUNC_2();
  return;
 }

 if(!(VAR_2&0x0006)) {
  VAR_1 = 0;
  FUNC_0();
  return;
 }

 if(VAR_2==0x0002) FUNC_1();
}
