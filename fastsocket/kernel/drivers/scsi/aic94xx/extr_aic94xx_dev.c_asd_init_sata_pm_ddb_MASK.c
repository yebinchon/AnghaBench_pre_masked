
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct domain_device {scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {int lldd_ha; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto out;
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->port->ha->lldd_ha,
        (int) (unsigned long) VAR_0->lldd_dev);
out:
 return VAR_1;
}
