
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dirtyState; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_9()
{
 if(VAR_0->dirtyState&0x0001) {
  FUNC_4();
 }
 if(VAR_0->dirtyState&0x0002) {
  FUNC_8();
 }
 if(VAR_0->dirtyState&0x0004) {
  FUNC_2();
 }
 if(VAR_0->dirtyState&0x0008) {
  FUNC_7();
 }
 if(VAR_0->dirtyState&0x0010) {
  FUNC_6();
 }
 if(VAR_0->dirtyState&~0xff) {
  if(VAR_0->dirtyState&0x0f00) {
   FUNC_1();
  }
  if(VAR_0->dirtyState&0x0100f000) {
   FUNC_0();
  }
  if(VAR_0->dirtyState&0x02ff0000) {
   FUNC_5();
  }
  if(VAR_0->dirtyState&0x04000000) {
   FUNC_3(0);
   FUNC_3(5);
  }
 }
 VAR_0->dirtyState = 0;
}
