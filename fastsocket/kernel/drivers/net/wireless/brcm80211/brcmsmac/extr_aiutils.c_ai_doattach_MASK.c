
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct si_pub {int boardtype; int boardvendor; int chippkg; int chiprev; int chip; } ;
struct si_info {int pcibus; struct bcma_bus* icbus; struct si_pub pub; } ;
struct bcma_device {int dummy; } ;
struct TYPE_6__ {int type; int vendor; } ;
struct TYPE_5__ {int pkg; int rev; int id; } ;
struct TYPE_4__ {struct bcma_device* core; } ;
struct bcma_bus {TYPE_3__ boardinfo; TYPE_2__ chipinfo; TYPE_1__ drv_cc; int host_pci; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct si_info*,struct bcma_device*) ;
 int FUNC_2 (struct si_pub*) ;
 int FUNC_3 (struct bcma_device*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct si_pub*) ;

__attribute__((used)) static struct si_info *FUNC_5(struct si_info *VAR_3,
       struct bcma_bus *VAR_4)
{
 struct si_pub *VAR_5 = &VAR_3->pub;
 struct bcma_device *VAR_6;

 VAR_3->icbus = VAR_4;
 VAR_3->pcibus = VAR_4->host_pci;


 VAR_6 = VAR_4->drv_cc.core;

 VAR_5->chip = VAR_4->chipinfo.id;
 VAR_5->chiprev = VAR_4->chipinfo.rev;
 VAR_5->chippkg = VAR_4->chipinfo.pkg;
 VAR_5->boardvendor = VAR_4->boardinfo.vendor;
 VAR_5->boardtype = VAR_4->boardinfo.type;

 if (!FUNC_1(VAR_3, VAR_6))
  goto exit;


 FUNC_3(VAR_6, FUNC_0(VAR_2), 0);
 FUNC_3(VAR_6, FUNC_0(VAR_1), 0);


 if (FUNC_2(VAR_5) & VAR_0) {
  (void)FUNC_4(VAR_5);
 }

 return VAR_3;

 exit:

 return ((void*)0);
}
