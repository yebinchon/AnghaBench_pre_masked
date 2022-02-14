
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct ipath_devdata {int ipath_flags; int ipath_gpio_mask; TYPE_2__ verbs_timer; TYPE_1__* ipath_kregs; } ;
struct TYPE_4__ {int kr_gpio_mask; int kr_debugportselect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ipath_devdata*,int ,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct ipath_devdata *VAR_4)
{
 if (VAR_4->ipath_flags & VAR_0) {
  FUNC_2(VAR_4, VAR_4->ipath_kregs->kr_debugportselect,
     0x2074076542310ULL);

  VAR_4->ipath_gpio_mask |= (u64) (1 << VAR_1);
  FUNC_2(VAR_4, VAR_4->ipath_kregs->kr_gpio_mask,
     VAR_4->ipath_gpio_mask);
 }

 FUNC_1(&VAR_4->verbs_timer);
 VAR_4->verbs_timer.function = VAR_2;
 VAR_4->verbs_timer.data = (unsigned long)VAR_4;
 VAR_4->verbs_timer.expires = VAR_3 + 1;
 FUNC_0(&VAR_4->verbs_timer);

 return 0;
}
