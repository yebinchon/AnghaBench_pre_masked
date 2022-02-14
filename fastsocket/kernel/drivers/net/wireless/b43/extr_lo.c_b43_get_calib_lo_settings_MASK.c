
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* g; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct b43_txpower_lo_control {int calib_list; } ;
struct b43_rfatt {int dummy; } ;
struct b43_lo_calib {int list; } ;
struct b43_bbatt {int dummy; } ;
struct TYPE_3__ {struct b43_txpower_lo_control* lo_control; } ;


 struct b43_lo_calib* FUNC_0 (struct b43_wldev*,struct b43_bbatt const*,struct b43_rfatt const*) ;
 struct b43_lo_calib* FUNC_1 (struct b43_txpower_lo_control*,struct b43_bbatt const*,struct b43_rfatt const*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static
struct b43_lo_calib *FUNC_3(struct b43_wldev *VAR_0,
            const struct b43_bbatt *VAR_1,
            const struct b43_rfatt *VAR_2)
{
 struct b43_txpower_lo_control *VAR_3 = VAR_0->phy.g->lo_control;
 struct b43_lo_calib *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);
 FUNC_2(&VAR_4->list, &VAR_3->calib_list);

 return VAR_4;
}
