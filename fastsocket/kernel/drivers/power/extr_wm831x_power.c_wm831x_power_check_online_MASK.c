
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct wm831x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_1, int VAR_2,
         union power_supply_propval *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_4 & VAR_2)
  VAR_3->intval = 1;
 else
  VAR_3->intval = 0;

 return 0;
}
