
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kbd_struct {scalar_t__ ledmode; unsigned char ledflagstate; } ;
struct TYPE_2__ {int* addr; int mask; scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kbd_struct* VAR_3 ;
 unsigned char VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static inline unsigned char FUNC_0(void)
{
 struct kbd_struct *VAR_6 = VAR_3 + VAR_2;
 unsigned char VAR_7;
 int VAR_8;

 if (VAR_6->ledmode == VAR_0)
  return VAR_4;

 VAR_7 = VAR_6->ledflagstate;

 if (VAR_6->ledmode == VAR_1) {
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
   if (VAR_5[VAR_8].valid) {
    if (*VAR_5[VAR_8].addr & VAR_5[VAR_8].mask)
     VAR_7 |= (1 << VAR_8);
    else
     VAR_7 &= ~(1 << VAR_8);
   }
 }
 return VAR_7;
}
