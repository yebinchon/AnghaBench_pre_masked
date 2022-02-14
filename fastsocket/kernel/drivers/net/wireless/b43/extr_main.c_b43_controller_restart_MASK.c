
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {int restart_work; TYPE_1__* wl; } ;
struct TYPE_2__ {int hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct b43_wldev *VAR_1, const char *VAR_2)
{

 if (FUNC_0(VAR_1) < VAR_0)
  return;
 FUNC_1(VAR_1->wl, "Controller RESET (%s) ...\n", VAR_2);
 FUNC_2(VAR_1->wl->hw, &VAR_1->restart_work);
}
