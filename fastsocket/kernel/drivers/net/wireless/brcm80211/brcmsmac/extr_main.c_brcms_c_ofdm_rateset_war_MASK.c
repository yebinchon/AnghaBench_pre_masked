
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {TYPE_1__* band; TYPE_5__* default_bss; TYPE_4__* bsscfg; } ;
struct TYPE_12__ {int * rates; } ;
struct TYPE_11__ {TYPE_6__ rateset; } ;
struct TYPE_10__ {TYPE_3__* current_bss; scalar_t__ associated; } ;
struct TYPE_8__ {int * rates; } ;
struct TYPE_9__ {TYPE_2__ rateset; } ;
struct TYPE_7__ {int pi; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_c_info *VAR_0)
{
 u8 VAR_1;
 bool VAR_2 = 0;

 if (VAR_0->bsscfg->associated)
  VAR_1 = VAR_0->bsscfg->current_bss->rateset.rates[0];
 else
  VAR_1 = VAR_0->default_bss->rateset.rates[0];

 FUNC_0(VAR_0->band->pi, VAR_2);
}
