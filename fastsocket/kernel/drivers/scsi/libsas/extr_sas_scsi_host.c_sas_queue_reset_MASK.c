
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int shost; } ;
struct sas_ha_struct {int lock; TYPE_3__ core; int eh_dev_q; int eh_active; } ;
struct TYPE_6__ {int reset_lun; int eh_list_node; } ;
struct domain_device {TYPE_4__* rphy; TYPE_2__ ssp_dev; int state; TYPE_1__* port; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct domain_device*) ;
 int FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int *) ;

__attribute__((used)) static int FUNC_13(struct domain_device *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct sas_ha_struct *VAR_8 = VAR_4->port->ha;
 int VAR_9 = 0, VAR_10 = 100;


 if (FUNC_1(VAR_4)) {
  FUNC_5(VAR_4);
  if (VAR_7)
   FUNC_6(VAR_4);
  return VAR_3;
 }

 while (!VAR_9 && VAR_10--) {
  FUNC_10(&VAR_8->lock);
  if (!FUNC_12(VAR_1, &VAR_4->state) &&
      !FUNC_12(VAR_5, &VAR_4->state)) {
   VAR_9 = 1;
   VAR_8->eh_active++;
   FUNC_4(&VAR_4->ssp_dev.eh_list_node, &VAR_8->eh_dev_q);
   FUNC_9(VAR_1, &VAR_4->state);
   FUNC_9(VAR_5, &VAR_4->state);
   FUNC_3(VAR_6, &VAR_4->ssp_dev.reset_lun);
   FUNC_8(VAR_8->core.shost);
  }
  FUNC_11(&VAR_8->lock);

  if (VAR_7)
   FUNC_7(VAR_4);

  if (VAR_9)
   return VAR_3;
 }

 FUNC_0("%s reset of %s failed\n",
      VAR_5 == VAR_2 ? "LUN" : "Bus",
      FUNC_2(&VAR_4->rphy->dev));

 return VAR_0;
}
