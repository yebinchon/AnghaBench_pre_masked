
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ctrladdr; int* TOC; int index; int track; int FAD; scalar_t__ repcnt; scalar_t__ options; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(u8 VAR_1, int VAR_2) {
  if (VAR_1 != 0xFF)
  {
     VAR_0->options = 0;
     VAR_0->repcnt = 0;
     VAR_0->ctrladdr = (u8)(VAR_0->TOC[VAR_1 - 1] >> 24);
     VAR_0->index = 1;
     VAR_0->track = VAR_1;
     if (VAR_2)
        VAR_0->FAD = VAR_0->TOC[VAR_1 - 1] & 0x00FFFFFF;
  }
}
