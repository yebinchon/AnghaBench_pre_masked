
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UWORD ;
struct TYPE_2__ {int state; scalar_t__ image; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,scalar_t__) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(UWORD VAR_3)
{
 if (VAR_1 == VAR_0) {
  if (VAR_3 >= 0x5ff6 && VAR_3 <= 0x5ff9) {
   VAR_3 -= 0x5ff6;
   FUNC_0(0x5000, 0x5fff, VAR_2->image + 0x4000 + VAR_3 * 0x1000);
   VAR_2->state = (VAR_2->state & 0x03) | (VAR_3 << 2);
  }
 }
 else {
  if (VAR_3 >= 0x9ff6 && VAR_3 <= 0x9ff9) {
   VAR_3 -= 0x9ff6;
   FUNC_0(0x9000, 0x9fff, VAR_2->image + 0x4000 + VAR_3 * 0x1000);
   VAR_2->state = (VAR_2->state & 0x03) | (VAR_3 << 2);
  }
 }
}
