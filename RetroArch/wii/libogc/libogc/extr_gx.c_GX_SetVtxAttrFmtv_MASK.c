
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_5__ {int VATTable; int dirtyState; } ;
struct TYPE_4__ {scalar_t__ vtxattr; int frac; int compsize; int comptype; } ;
typedef TYPE_1__ GXVtxAttrFmt ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__,int ,int ,int ) ;
 TYPE_2__* VAR_2 ;

void FUNC_1(u8 VAR_3,GXVtxAttrFmt *VAR_4)
{
 u32 VAR_5;

 for(VAR_5=0;VAR_5<VAR_0;VAR_5++) {
  if(VAR_4[VAR_5].vtxattr==VAR_1) break;

  FUNC_0(VAR_3,VAR_4[VAR_5].vtxattr,VAR_4[VAR_5].comptype,VAR_4[VAR_5].compsize,VAR_4[VAR_5].frac);
 }
 VAR_2->VATTable |= (1<<VAR_3);
 VAR_2->dirtyState |= 0x0010;
}
