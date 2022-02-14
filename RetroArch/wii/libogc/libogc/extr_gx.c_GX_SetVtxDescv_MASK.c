
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int dirtyState; } ;
struct TYPE_4__ {scalar_t__ attr; int type; } ;
typedef TYPE_1__ GXVtxDesc ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* VAR_2 ;

void FUNC_1(GXVtxDesc *VAR_3)
{
 u32 VAR_4;

 if(!VAR_3) return;

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++){
  if(VAR_3[VAR_4].attr==VAR_1) break;

  FUNC_0(VAR_3[VAR_4].attr,VAR_3[VAR_4].type);
 }
 VAR_2->dirtyState |= 0x0008;
}
