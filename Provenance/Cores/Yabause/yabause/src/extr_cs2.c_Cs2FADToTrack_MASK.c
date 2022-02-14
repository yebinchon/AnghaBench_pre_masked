
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* TOC; } ;


 TYPE_1__* VAR_0 ;

u8 FUNC_0(u32 VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < 99; VAR_2++)
  {
     if (VAR_0->TOC[VAR_2] == 0xFFFFFFFF) return 0xFF;

     if (VAR_1 >= (VAR_0->TOC[VAR_2] & 0xFFFFFF) && VAR_1 < (VAR_0->TOC[VAR_2 + 1] & 0xFFFFFF))
        return (VAR_2 + 1);
  }

  return 0;
}
