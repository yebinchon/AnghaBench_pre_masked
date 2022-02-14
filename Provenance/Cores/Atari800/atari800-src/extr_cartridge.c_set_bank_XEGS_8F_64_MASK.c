
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; scalar_t__ image; } ;


 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_0->state & 0x08)
  FUNC_0(0x8000, 0x9fff, VAR_0->image + (VAR_0->state & ~0x08) * 0x2000);
 else

  FUNC_1(0x8000, 0xff, 0x2000);
}
