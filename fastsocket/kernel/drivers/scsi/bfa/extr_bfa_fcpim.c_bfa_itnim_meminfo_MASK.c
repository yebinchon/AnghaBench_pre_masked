
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfa_itnim_s {int dummy; } ;
struct TYPE_2__ {int num_rports; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ fwcfg; } ;



void
FUNC_0(struct bfa_iocfc_cfg_s *VAR_0, u32 *VAR_1)
{



 *VAR_1 += VAR_0->fwcfg.num_rports * sizeof(struct bfa_itnim_s);
}
