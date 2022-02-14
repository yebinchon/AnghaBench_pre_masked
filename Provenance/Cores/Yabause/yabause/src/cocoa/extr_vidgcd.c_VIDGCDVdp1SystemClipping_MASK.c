
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdp1 ;
struct TYPE_2__ {void* systemclipY2; scalar_t__ systemclipY1; void* systemclipX2; scalar_t__ systemclipX1; scalar_t__ addr; } ;


 void* FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1(u8 * VAR_6, Vdp1 * VAR_7)
{
   VAR_1->systemclipX1 = 0;
   VAR_1->systemclipY1 = 0;
   VAR_1->systemclipX2 = FUNC_0(VAR_0, VAR_1->addr + 0x14);
   VAR_1->systemclipY2 = FUNC_0(VAR_0, VAR_1->addr + 0x16);

   VAR_3 = VAR_1->systemclipX1;
   VAR_2 = VAR_1->systemclipX2;
   VAR_5 = VAR_1->systemclipY1;
   VAR_4 = VAR_1->systemclipY2;
}
