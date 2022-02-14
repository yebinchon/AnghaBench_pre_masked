
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hwicap_drvdata {int dev; TYPE_1__* config_regs; TYPE_2__* config; } ;
struct TYPE_4__ {int (* reset ) (struct hwicap_drvdata*) ;} ;
struct TYPE_3__ {int IDCODE; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hwicap_drvdata*) ;
 int FUNC_2 (struct hwicap_drvdata*,int ,int *) ;
 int FUNC_3 (struct hwicap_drvdata*) ;

__attribute__((used)) static int FUNC_4(struct hwicap_drvdata *VAR_0)
{
 int VAR_1;
 u32 VAR_2;

 FUNC_0(VAR_0->dev, "initializing\n");



 FUNC_0(VAR_0->dev, "Reset...\n");
 VAR_0->config->reset(VAR_0);

 FUNC_0(VAR_0->dev, "Desync...\n");
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;





 FUNC_0(VAR_0->dev, "Reading IDCODE...\n");
 VAR_1 = FUNC_2(
   VAR_0, VAR_0->config_regs->IDCODE, &VAR_2);
 FUNC_0(VAR_0->dev, "IDCODE = %x\n", VAR_2);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0->dev, "Desync...\n");
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
