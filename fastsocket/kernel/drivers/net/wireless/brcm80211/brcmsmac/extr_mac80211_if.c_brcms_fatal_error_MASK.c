
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcms_info {TYPE_4__* pub; TYPE_3__* wlc; } ;
struct TYPE_8__ {int ieee_hw; } ;
struct TYPE_7__ {TYPE_2__* pub; TYPE_1__* hw; } ;
struct TYPE_6__ {int unit; } ;
struct TYPE_5__ {int d11core; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct brcms_info*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct brcms_info *VAR_0)
{
 FUNC_0(VAR_0->wlc->hw->d11core, "wl%d: fatal error, reinitializing\n",
    VAR_0->wlc->pub->unit);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->pub->ieee_hw);
}
