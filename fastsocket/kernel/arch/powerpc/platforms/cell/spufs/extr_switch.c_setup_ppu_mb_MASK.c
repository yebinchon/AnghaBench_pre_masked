
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pu_mb_R; } ;
struct spu_state {TYPE_3__ prob; TYPE_2__* lscsa; } ;
struct spu {int dummy; } ;
struct TYPE_4__ {int * slot; } ;
struct TYPE_5__ {TYPE_1__ ppu_mb; } ;



__attribute__((used)) static inline void FUNC_0(struct spu_state *VAR_0, struct spu *VAR_1)
{



 VAR_0->lscsa->ppu_mb.slot[0] = VAR_0->prob.pu_mb_R;
}
