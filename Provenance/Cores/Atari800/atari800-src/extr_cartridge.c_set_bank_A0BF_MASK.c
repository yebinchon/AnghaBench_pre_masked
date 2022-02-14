
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; scalar_t__ image; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 if (VAR_0->state & VAR_1)
  FUNC_0();
 else {
  FUNC_1();
  FUNC_2(0xa000, 0xbfff, VAR_0->image + (VAR_0->state & VAR_2) * 0x2000);
 }
}
