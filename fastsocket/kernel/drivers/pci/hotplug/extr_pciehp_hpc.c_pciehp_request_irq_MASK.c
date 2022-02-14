
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {int poll_timer; TYPE_1__* pcie; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ,int ,int ,struct controller*) ;
 int FUNC_3 (struct controller*,int) ;

__attribute__((used)) static inline int FUNC_4(struct controller *VAR_4)
{
 int VAR_5, VAR_6 = VAR_4->pcie->irq;


 if (VAR_3) {
  FUNC_1(&VAR_4->poll_timer);
  FUNC_3(VAR_4, 10);
  return 0;
 }


 VAR_5 = FUNC_2(VAR_6, VAR_2, VAR_0, VAR_1, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_4, "Cannot get irq %d for the hotplug controller\n",
    VAR_6);
 return VAR_5;
}
