
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ addr; void* userclipY2; void* userclipX2; void* userclipY1; void* userclipX1; } ;
typedef TYPE_1__ Vdp1 ;


 void* FUNC_0 (int *,scalar_t__) ;

void FUNC_1(u8* VAR_0, Vdp1*VAR_1)
{
   VAR_1->userclipX1 = FUNC_0(VAR_0, VAR_1->addr + 0xC);
   VAR_1->userclipY1 = FUNC_0(VAR_0, VAR_1->addr + 0xE);
   VAR_1->userclipX2 = FUNC_0(VAR_0, VAR_1->addr + 0x14);
   VAR_1->userclipY2 = FUNC_0(VAR_0, VAR_1->addr + 0x16);
}
