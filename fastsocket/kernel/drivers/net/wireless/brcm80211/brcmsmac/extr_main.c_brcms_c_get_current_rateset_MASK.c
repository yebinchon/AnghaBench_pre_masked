
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcms_c_rateset {int count; int rates; } ;
struct brcms_c_info {TYPE_4__* default_bss; TYPE_3__* bsscfg; TYPE_1__* pub; } ;
struct brcm_rateset {int rates; int count; } ;
struct TYPE_8__ {struct brcms_c_rateset rateset; } ;
struct TYPE_7__ {TYPE_2__* current_bss; } ;
struct TYPE_6__ {struct brcms_c_rateset rateset; } ;
struct TYPE_5__ {scalar_t__ associated; } ;


 int FUNC_0 (int *,int *,int ) ;

void FUNC_1(struct brcms_c_info *VAR_0,
     struct brcm_rateset *VAR_1)
{
 struct brcms_c_rateset *VAR_2;

 if (VAR_0->pub->associated)
  VAR_2 = &VAR_0->bsscfg->current_bss->rateset;
 else
  VAR_2 = &VAR_0->default_bss->rateset;


 VAR_1->count = VAR_2->count;
 FUNC_0(&VAR_1->rates, &VAR_2->rates, VAR_2->count);
}
