
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bcma_device {int dummy; } ;
struct TYPE_8__ {struct bcma_device* core; } ;
struct TYPE_7__ {struct bcma_device* core; } ;
struct TYPE_9__ {struct bcma_device* core; } ;
struct bcma_bus {TYPE_3__ drv_gmac_cmn; TYPE_1__* drv_pci; TYPE_2__ drv_mips; TYPE_4__ drv_cc; scalar_t__ num; } ;
struct TYPE_6__ {struct bcma_device* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_bus*) ;
 int VAR_5 ;
 int FUNC_1 (struct bcma_bus*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct bcma_bus*,char*,...) ;
 struct bcma_device* FUNC_8 (struct bcma_bus*,int ) ;
 struct bcma_device* FUNC_9 (struct bcma_bus*,int ,int) ;
 int FUNC_10 (struct bcma_bus*,char*) ;
 int FUNC_11 (struct bcma_bus*) ;
 int FUNC_12 (struct bcma_bus*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct bcma_bus *VAR_6)
{
 int VAR_7;
 struct bcma_device *VAR_8;

 FUNC_13(&VAR_5);
 VAR_6->num = VAR_4++;
 FUNC_14(&VAR_5);


 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7) {
  FUNC_7(VAR_6, "Failed to scan: %d\n", VAR_7);
  return -1;
 }


 VAR_8 = FUNC_8(VAR_6, FUNC_1(VAR_6));
 if (VAR_8) {
  VAR_6->drv_cc.core = VAR_8;
  FUNC_2(&VAR_6->drv_cc);
 }


 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7 == -VAR_3) {
  FUNC_7(VAR_6, "No SPROM available\n");
 } else if (VAR_7)
  FUNC_7(VAR_6, "Failed to get SPROM: %d\n", VAR_7);


 VAR_8 = FUNC_8(VAR_6, FUNC_1(VAR_6));
 if (VAR_8) {
  VAR_6->drv_cc.core = VAR_8;
  FUNC_3(&VAR_6->drv_cc);
 }


 VAR_8 = FUNC_8(VAR_6, VAR_1);
 if (VAR_8) {
  VAR_6->drv_mips.core = VAR_8;
  FUNC_5(&VAR_6->drv_mips);
 }


 VAR_8 = FUNC_9(VAR_6, VAR_2, 0);
 if (VAR_8) {
  VAR_6->drv_pci[0].core = VAR_8;
  FUNC_6(&VAR_6->drv_pci[0]);
 }


 VAR_8 = FUNC_9(VAR_6, VAR_2, 1);
 if (VAR_8) {
  VAR_6->drv_pci[1].core = VAR_8;
  FUNC_6(&VAR_6->drv_pci[1]);
 }


 VAR_8 = FUNC_8(VAR_6, VAR_0);
 if (VAR_8) {
  VAR_6->drv_gmac_cmn.core = VAR_8;
  FUNC_4(&VAR_6->drv_gmac_cmn);
 }


 FUNC_11(VAR_6);

 FUNC_10(VAR_6, "Bus registered\n");

 return 0;
}
