
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_expander_device {int level; } ;
struct domain_device {int rphy; TYPE_2__* port; } ;
struct TYPE_3__ {int max_level; } ;
struct TYPE_4__ {TYPE_1__ disc; } ;


 struct sas_expander_device* FUNC_0 (int ) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct domain_device *VAR_0)
{
 int VAR_1;
 struct sas_expander_device *VAR_2 = FUNC_0(VAR_0->rphy);

 VAR_1 = FUNC_3(VAR_0->rphy);
 if (VAR_1)
  goto out_err;

 VAR_2->level = VAR_0->port->disc.max_level;
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto out_err2;

 FUNC_2(VAR_0->port);

 return VAR_1;

out_err2:
 FUNC_4(VAR_0->rphy);
out_err:
 return VAR_1;
}
