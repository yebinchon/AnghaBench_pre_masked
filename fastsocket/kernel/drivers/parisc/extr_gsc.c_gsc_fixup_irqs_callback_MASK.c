
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_type; } ;
struct parisc_device {TYPE_1__ id; } ;
struct gsc_fixup_struct {int ctrl; int (* choose_irq ) (struct parisc_device*,int ) ;} ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct parisc_device*,int ,int (*) (struct parisc_device*,int )) ;
 int FUNC_1 (struct parisc_device*,int ) ;
 struct parisc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct parisc_device *VAR_3 = FUNC_2(VAR_1);
 struct gsc_fixup_struct *VAR_4 = VAR_2;



 if (VAR_3->id.hw_type == VAR_0)
  FUNC_0(VAR_3, VAR_4->ctrl, VAR_4->choose_irq);
 VAR_4->choose_irq(VAR_3, VAR_4->ctrl);

 return 0;
}
