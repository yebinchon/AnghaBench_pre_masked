
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int type; unsigned long addr; scalar_t__ enabled; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long VAR_1;
 int VAR_2 = 0;
 int VAR_3;
 int VAR_4;

 FUNC_0(VAR_1, 7);
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_3 = 2 << (VAR_4 << 1);
  if (!(VAR_1 & VAR_3) && VAR_0[VAR_4].enabled) {
   VAR_2 = 1;
   VAR_1 |= VAR_3;
   VAR_1 &= ~(0xf0000 << (VAR_4 << 2));
   VAR_1 |= ((VAR_0[VAR_4].len << 2) |
     VAR_0[VAR_4].type) <<
          ((VAR_4 << 2) + 16);
   if (VAR_4 >= 0 && VAR_4 <= 3)
    FUNC_1(VAR_0[VAR_4].addr, VAR_4);

  } else {
   if ((VAR_1 & VAR_3) && !VAR_0[VAR_4].enabled) {
    VAR_2 = 1;
    VAR_1 &= ~VAR_3;
    VAR_1 &= ~(0xf0000 << (VAR_4 << 2));
   }
  }
 }
 if (VAR_2)
  FUNC_1(VAR_1, 7);
}
