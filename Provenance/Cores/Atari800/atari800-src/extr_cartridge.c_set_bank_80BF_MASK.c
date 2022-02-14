
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; scalar_t__ image; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_0->state & 0x80) {
  FUNC_0();
  FUNC_2();
 }
 else {
  FUNC_1();
  FUNC_3();
  FUNC_4(0x8000, 0xbfff, VAR_0->image + (VAR_0->state & 0x7f) * 0x4000);
 }
}
