
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int core; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct bcma_bus {int sprom; TYPE_2__ drv_cc; TYPE_1__ chipinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct bcma_bus*,char*,int ) ;
 int FUNC_2 (struct bcma_bus*,int *) ;
 int FUNC_3 (struct bcma_bus*) ;
 int FUNC_4 (struct bcma_bus*,int *) ;
 int FUNC_5 (struct bcma_bus*) ;
 int FUNC_6 (struct bcma_bus*) ;
 int FUNC_7 (struct bcma_bus*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bcma_bus*,char*) ;
 int * FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct bcma_bus *VAR_7)
{
 u16 VAR_8 = VAR_0;
 u16 *VAR_9;
 int VAR_10 = 0;

 if (!VAR_7->drv_cc.core)
  return -VAR_4;

 if (!FUNC_3(VAR_7)) {
  bool VAR_11;






  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11) {

   VAR_8 = FUNC_6(VAR_7);
  }
  if (!VAR_8 || !VAR_11) {





   VAR_10 = FUNC_2(VAR_7, &VAR_7->sprom);
   return VAR_10;
  }
 }

 VAR_9 = FUNC_10(VAR_6, sizeof(u16),
   VAR_5);
 if (!VAR_9)
  return -VAR_3;

 if (VAR_7->chipinfo.id == VAR_1 ||
     VAR_7->chipinfo.id == VAR_2)
  FUNC_0(&VAR_7->drv_cc, 0);

 FUNC_1(VAR_7, "SPROM offset 0x%x\n", VAR_8);
 FUNC_7(VAR_7, VAR_8, VAR_9);

 if (VAR_7->chipinfo.id == VAR_1 ||
     VAR_7->chipinfo.id == VAR_2)
  FUNC_0(&VAR_7->drv_cc, 1);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10) {
  FUNC_9(VAR_7, "invalid sprom read from the PCIe card, try to use fallback sprom\n");
  VAR_10 = FUNC_2(VAR_7, &VAR_7->sprom);
  goto out;
 }

 FUNC_4(VAR_7, VAR_9);

out:
 FUNC_11(VAR_9);
 return VAR_10;
}
