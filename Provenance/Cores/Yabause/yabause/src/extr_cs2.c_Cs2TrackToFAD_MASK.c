
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* TOC; } ;


 TYPE_1__* VAR_0 ;

u32 FUNC_0(u16 VAR_1) {
  if (VAR_1 == 0xFFFF)

     return (VAR_0->TOC[101] & 0x00FFFFFF);
  if (VAR_1 != 0x0000)
  {


     if ((VAR_1 & 0xFF) == 0x01)

        return (VAR_0->TOC[(VAR_1 >> 8) - 1] & 0x00FFFFFF);
     else if ((VAR_1 & 0xFF) == 0x63)

        return ((VAR_0->TOC[(VAR_1 >> 8)] & 0x00FFFFFF) - 1);
  }


  return 0;
}
