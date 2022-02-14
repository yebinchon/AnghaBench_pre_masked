
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {int dpll_speed; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_0);
 VAR_8 &= VAR_2;

 if (VAR_8 == VAR_1) {
  VAR_6 = VAR_4->dpll_speed * 2;
  VAR_7 = VAR_4->dpll_speed;
 } else {
  VAR_6 = VAR_4->dpll_speed;
  VAR_7 = VAR_4->dpll_speed / 2;
 }







 if (VAR_5 > VAR_7)
  return VAR_6;
 else
  return VAR_7;


}
