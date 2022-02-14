
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; scalar_t__ image; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,scalar_t__) ;
 int FUNC_3 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2)
{
 if (VAR_0->state < 0)
  FUNC_0();
 else {
  FUNC_1();
  if (VAR_0->state == 0xff)

   FUNC_3(0xa000, 0xff, 0x1000);
  else
   FUNC_2(0xa000, 0xafff, VAR_0->image + VAR_0->state * 0x1000);
  if (VAR_2 < 0)
   FUNC_2(0xb000, 0xbfff, VAR_0->image + VAR_1);
 }
}
