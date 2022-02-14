
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {int state; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(s32 VAR_1)
{
 if(VAR_1==0x0010) {
  VAR_0->state = -1;
  FUNC_2();
  return;
 }

 if(VAR_1&0x0002) FUNC_1(0x01234567);
 if(VAR_1==0x0001) {
  FUNC_0(VAR_0);
  return;
 }
}
