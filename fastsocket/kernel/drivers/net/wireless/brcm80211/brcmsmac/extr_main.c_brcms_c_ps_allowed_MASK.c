
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_c_info {int filter_flags; TYPE_1__* pub; struct brcms_bss_cfg* bsscfg; } ;
struct brcms_bss_cfg {int BSS; scalar_t__ associated; } ;
struct TYPE_2__ {int associated; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct brcms_c_info *VAR_1)
{
 struct brcms_bss_cfg *VAR_2 = VAR_1->bsscfg;


 if (!VAR_1->pub->associated)
  return 0;


 if (VAR_1->filter_flags & VAR_0)
  return 0;

 if (VAR_2->associated) {




  if (!VAR_2->BSS)
   return 0;

  return 0;
 }

 return 1;
}
