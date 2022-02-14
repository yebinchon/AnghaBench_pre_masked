
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rev; } ;
struct bcma_drv_cc {TYPE_3__ pmu; TYPE_1__* core; } ;
struct TYPE_5__ {int id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_4__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_bus*,char*,int,int ,int) ;

u32 FUNC_1(struct bcma_drv_cc *VAR_1)
{
 struct bcma_bus *VAR_2 = VAR_1->core->bus;

 switch (VAR_2->chipinfo.id) {
 case 134:
 case 132:
 case 133:
 case 136:
 case 129:
 case 131:
 case 128:

  return 20000 * 1000;
 case 130:
 case 135:

  return 25000 * 1000;
 default:
  FUNC_0(VAR_2, "No ALP clock specified for %04X device, pmu rev. %d, using default %d Hz\n",
     VAR_2->chipinfo.id, VAR_1->pmu.rev, VAR_0);
 }
 return VAR_0;
}
