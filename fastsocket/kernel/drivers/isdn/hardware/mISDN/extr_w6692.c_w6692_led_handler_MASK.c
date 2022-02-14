
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w6692_hw {int fmask; scalar_t__ subtype; int xdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct w6692_hw *VAR_3, int VAR_4)
{
 if ((!(VAR_3->fmask & VAR_2)) || VAR_3->subtype == VAR_0)
  return;
 if (VAR_4) {
  VAR_3->xdata &= 0xfb;
  FUNC_0(VAR_3, VAR_1, VAR_3->xdata);
 } else {
  VAR_3->xdata |= 0x04;
  FUNC_0(VAR_3, VAR_1, VAR_3->xdata);
 }
}
