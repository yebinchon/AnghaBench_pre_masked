
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {int lock; int flags; } ;
struct pm8001_device {scalar_t__ dev_type; int attached_phy; int * dcompletion; struct domain_device* sas_device; } ;
struct ex_phy {int attached_sas_addr; } ;
struct TYPE_5__ {int num_phys; struct ex_phy* ex_phy; } ;
struct domain_device {scalar_t__ dev_type; TYPE_3__* rphy; int sas_addr; TYPE_1__ ex_dev; struct pm8001_device* lldd_dev; struct domain_device* parent; } ;
struct TYPE_8__ {int (* reg_dev_req ) (struct pm8001_hba_info*,struct pm8001_device*,int) ;} ;
struct TYPE_6__ {int phy_identifier; } ;
struct TYPE_7__ {TYPE_2__ identify; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 struct pm8001_device* FUNC_6 (struct pm8001_hba_info*) ;
 struct pm8001_hba_info* FUNC_7 (struct domain_device*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct pm8001_hba_info*,struct pm8001_device*,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct domain_device *VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 struct pm8001_hba_info *VAR_8 = ((void*)0);
 struct domain_device *VAR_9 = VAR_5->parent;
 struct pm8001_device *VAR_10;
 FUNC_0(VAR_4);
 u32 VAR_11 = 0;
 VAR_8 = FUNC_7(VAR_5);
 FUNC_9(&VAR_8->lock, VAR_6);

 VAR_10 = FUNC_6(VAR_8);
 if (!VAR_10) {
  VAR_7 = -1;
  goto found_out;
 }
 VAR_10->sas_device = VAR_5;
 VAR_5->lldd_dev = VAR_10;
 VAR_10->dev_type = VAR_5->dev_type;
 VAR_10->dcompletion = &VAR_4;
 if (VAR_9 && FUNC_1(VAR_9->dev_type)) {
  int VAR_12;
  struct ex_phy *VAR_13;
  for (VAR_12 = 0; VAR_12 < VAR_9->ex_dev.num_phys;
  VAR_12++) {
   VAR_13 = &VAR_9->ex_dev.ex_phy[VAR_12];
   if (FUNC_4(VAR_13->attached_sas_addr)
    == FUNC_4(VAR_5->sas_addr)) {
    VAR_10->attached_phy = VAR_12;
    break;
   }
  }
  if (VAR_12 == VAR_9->ex_dev.num_phys) {
   FUNC_3(VAR_8,
   FUNC_8("Error: no attached dev:%016llx"
   " at ex:%016llx.\n", FUNC_4(VAR_5->sas_addr),
    FUNC_4(VAR_9->sas_addr)));
   VAR_7 = -1;
  }
 } else {
  if (VAR_5->dev_type == VAR_3) {
   VAR_10->attached_phy =
    VAR_5->rphy->identify.phy_identifier;
    VAR_11 = 1;
  }
 }
 FUNC_2(VAR_8, FUNC_8("Found device\n"));
 VAR_1->reg_dev_req(VAR_8, VAR_10, VAR_11);
 FUNC_10(&VAR_8->lock, VAR_6);
 FUNC_12(&VAR_4);
 if (VAR_5->dev_type == VAR_2)
  FUNC_5(50);
 VAR_8->flags = VAR_0;
 return 0;
found_out:
 FUNC_10(&VAR_8->lock, VAR_6);
 return VAR_7;
}
