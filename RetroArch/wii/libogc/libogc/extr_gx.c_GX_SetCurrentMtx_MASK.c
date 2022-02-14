
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mtxIdxLo; int dirtyState; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(u32 VAR_1)
{
 VAR_0->mtxIdxLo = (VAR_0->mtxIdxLo&~0x3f)|(VAR_1&0x3f);
 VAR_0->dirtyState |= 0x04000000;
}
