
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_c_info {scalar_t__ home_chanspec; TYPE_2__* bsscfg; } ;
struct TYPE_4__ {TYPE_1__* current_bss; scalar_t__ associated; } ;
struct TYPE_3__ {scalar_t__ chanspec; } ;



__attribute__((used)) static void FUNC_0(struct brcms_c_info *VAR_0, u16 VAR_1)
{
 if (VAR_0->home_chanspec != VAR_1) {
  VAR_0->home_chanspec = VAR_1;

  if (VAR_0->bsscfg->associated)
   VAR_0->bsscfg->current_bss->chanspec = VAR_1;
 }
}
