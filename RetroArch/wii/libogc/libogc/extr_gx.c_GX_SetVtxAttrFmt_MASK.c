
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int VATTable; int dirtyState; } ;


 int FUNC_0 (int,int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(u8 VAR_1,u32 VAR_2,u32 VAR_3,u32 VAR_4,u32 VAR_5)
{
 FUNC_0(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5);
 VAR_0->VATTable |= (1<<VAR_1);
 VAR_0->dirtyState |= 0x0010;
}
