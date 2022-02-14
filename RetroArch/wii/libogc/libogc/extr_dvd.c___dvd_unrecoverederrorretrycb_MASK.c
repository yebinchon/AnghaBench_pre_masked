
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_2__ {int state; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(s32 VAR_2)
{
 u32 VAR_3;

 if(VAR_2==0x0010) {
  VAR_0->state = -1;
  FUNC_1();
  return;
 }

 VAR_0->state = -1;
 if(VAR_2&0x0002) FUNC_0(0x01234567);
 else {
  VAR_3 = VAR_1[8];
  FUNC_0(VAR_3);
 }
}
