
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_flags; int verbs_timer; int ipath_gpio_mask; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_gpio_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipath_devdata*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ipath_devdata *VAR_2)
{

 if (VAR_2->ipath_flags & VAR_0) {

  VAR_2->ipath_gpio_mask &= ~((u64) (1 << VAR_1));
  FUNC_1(VAR_2, VAR_2->ipath_kregs->kr_gpio_mask,
     VAR_2->ipath_gpio_mask);




 }

 FUNC_0(&VAR_2->verbs_timer);

 return 0;
}
