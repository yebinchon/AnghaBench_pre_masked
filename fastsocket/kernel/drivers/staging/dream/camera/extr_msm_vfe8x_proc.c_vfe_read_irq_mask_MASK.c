
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_irqenable {int dummy; } ;
typedef int rc ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_irqenable*,int ,int) ;

__attribute__((used)) static struct vfe_irqenable FUNC_1(void)
{

 uint32_t *VAR_2;
 struct vfe_irqenable VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));



 VAR_2 = (uint32_t *)(VAR_1->vfebase + VAR_0);

 VAR_3 = *((struct vfe_irqenable *)VAR_2);


 return VAR_3;
}
