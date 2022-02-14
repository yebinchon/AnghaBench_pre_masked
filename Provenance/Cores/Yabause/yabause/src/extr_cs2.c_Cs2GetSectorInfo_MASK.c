
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef void* u16 ;
struct TYPE_7__ {int CR2; int CR3; int CR1; int CR4; int HIRQ; } ;
struct TYPE_8__ {int status; TYPE_3__ reg; TYPE_2__* partition; } ;
struct TYPE_6__ {size_t numblocks; TYPE_1__** block; } ;
struct TYPE_5__ {int FAD; int fn; int cn; int sm; int ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_3 ;
 size_t VAR_4 ;

void FUNC_1(void) {
  u32 VAR_5;
  u32 VAR_6;

  VAR_5 = VAR_3->reg.CR2 & 0xFF;
  VAR_6 = VAR_3->reg.CR3 >> 8;
  if (VAR_6 < VAR_4) {
     if (VAR_5 < VAR_3->partition[VAR_6].numblocks) {
        VAR_3->reg.CR1 = (u16)((VAR_3->status << 8) | ((VAR_3->partition[VAR_6].block[VAR_5]->FAD >> 16) & 0xFF));
        VAR_3->reg.CR2 = (u16)VAR_3->partition[VAR_6].block[VAR_5]->FAD;
        VAR_3->reg.CR3 = (VAR_3->partition[VAR_6].block[VAR_5]->fn << 8) | VAR_3->partition[VAR_6].block[VAR_5]->cn;
        VAR_3->reg.CR4 = (VAR_3->partition[VAR_6].block[VAR_5]->sm << 8) | VAR_3->partition[VAR_6].block[VAR_5]->ci;
        VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
        return;
     }
     else
     {
        FUNC_0("cs2\t: getSectorInfo: Unsupported Partition Number\n");
     }
  }

  VAR_3->reg.CR1 = (VAR_2 << 8) | (VAR_3->reg.CR1 & 0xFF);
  VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
}
