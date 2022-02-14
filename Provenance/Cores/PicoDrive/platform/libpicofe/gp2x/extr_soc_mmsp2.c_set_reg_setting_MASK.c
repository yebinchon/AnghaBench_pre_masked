
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; unsigned short valmask; unsigned short val; } ;
typedef TYPE_1__ reg_setting ;


 unsigned short* VAR_0 ;

__attribute__((used)) static void FUNC_0(const reg_setting *VAR_1)
{
 for (; VAR_1->reg; VAR_1++)
 {
  unsigned short VAR_2 = VAR_0[VAR_1->reg >> 1];
  VAR_2 &= ~VAR_1->valmask;
  VAR_2 |= VAR_1->val;
  VAR_0[VAR_1->reg >> 1] = VAR_2;
 }
}
