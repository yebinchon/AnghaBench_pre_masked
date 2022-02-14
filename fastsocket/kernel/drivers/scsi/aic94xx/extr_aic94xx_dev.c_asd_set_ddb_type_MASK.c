
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct domain_device {scalar_t__ dev_type; scalar_t__ tproto; scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct asd_ha_struct*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct domain_device *VAR_5)
{
 struct asd_ha_struct *VAR_6 = VAR_5->port->ha->lldd_ha;
 int VAR_7 = (int) (unsigned long) VAR_5->lldd_dev;

 if (VAR_5->dev_type == VAR_4)
  FUNC_0(VAR_6,VAR_7, VAR_0, VAR_2);
 else if (VAR_5->tproto)
  FUNC_0(VAR_6,VAR_7, VAR_0, VAR_3);
 else
  FUNC_0(VAR_6,VAR_7,VAR_0,VAR_1);
}
