
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int hw_value; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_1, u32 VAR_2)
{
 int VAR_3;
 int VAR_4;




 VAR_2 &= 0x1fef;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 13; VAR_3++) {
  if (VAR_2 & (1 << VAR_3))
   VAR_1[VAR_4++] = VAR_0[VAR_3].hw_value;
 }
}
