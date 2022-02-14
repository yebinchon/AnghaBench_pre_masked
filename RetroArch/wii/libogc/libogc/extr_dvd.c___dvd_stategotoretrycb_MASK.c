
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int state; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(s32 VAR_4)
{
 if(VAR_4==0x0010) {
  VAR_1->state = -1;
  FUNC_3();
  return;
 }
 if(VAR_4&0x0002) {
  VAR_1->state = -1;
  FUNC_1(0x01234567);
  return;
 }
 if(VAR_4==0x0001) {
  VAR_2 = 0;
  if(VAR_0==0x0004 || VAR_0==0x0005
   || VAR_0==0x000d || VAR_0==0x000f) {
   VAR_3 = 1;
   if(FUNC_0(2)) return;

   VAR_1->state = 11;
   FUNC_2();
  }
 }
}
