
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int* mousebits; } ;
struct TYPE_4__ {int* data; } ;
typedef TYPE_1__ PortData_struct ;
typedef TYPE_2__ PerMouse_struct ;



void FUNC_0(PortData_struct * VAR_0)
{


  u8 VAR_1 = VAR_0->data[1];
  if (VAR_1 == 0xE3)
  {
     PerMouse_struct * VAR_2 = (PerMouse_struct *) (VAR_0->data + 1);

     VAR_2->mousebits[0] &= 0x0F;
     VAR_2->mousebits[1] = 0;
     VAR_2->mousebits[2] = 0;
  }
}
