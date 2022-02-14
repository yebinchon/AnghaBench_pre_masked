
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fcnt; int ecurp; int env; } ;
typedef TYPE_3__ slot_t ;
struct TYPE_10__ {TYPE_2__* slots; } ;
struct TYPE_9__ {int ca; size_t mslc; int sgc; int eg; TYPE_3__* slot; } ;
struct TYPE_6__ {int sample_offset; int envelope; int attenuation; } ;
struct TYPE_7__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;

void
FUNC_1(void)
{





   slot_t *VAR_4 = &VAR_3.slot[VAR_3.mslc];
   VAR_3.ca = ((VAR_4->fcnt >> (VAR_1 + 12)) & 0xF) << 7;
   VAR_3.sgc = VAR_4->ecurp;
   VAR_3.eg = 0x1f - (VAR_4->env >> (VAR_0 - 5));






}
