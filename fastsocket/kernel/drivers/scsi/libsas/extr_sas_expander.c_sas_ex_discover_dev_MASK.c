
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ linkrate; scalar_t__ routing_attr; int attached_dev_type; scalar_t__ phy_state; int attached_sas_addr; int attached_phy_id; } ;
struct domain_device {int sas_addr; TYPE_3__* port; TYPE_1__* parent; struct expander_device ex_dev; } ;
struct TYPE_5__ {int fanout_sas_addr; } ;
struct TYPE_6__ {TYPE_2__ disc; int sas_addr; } ;
struct TYPE_4__ {int sas_addr; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int,...) ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct domain_device*,int) ;
 int FUNC_5 (struct domain_device*,int,int ,int) ;
 int FUNC_6 (struct domain_device*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (struct domain_device*,int ) ;
 int FUNC_9 (struct domain_device*,int) ;
 int FUNC_10 (struct domain_device*,int ) ;
 struct domain_device* FUNC_11 (struct domain_device*,int) ;
 struct domain_device* FUNC_12 (struct domain_device*,int) ;
 scalar_t__ FUNC_13 (struct domain_device*,int) ;
 int FUNC_14 (struct domain_device*,int) ;
 int FUNC_15 (struct domain_device*,int,int ,int *) ;

__attribute__((used)) static int FUNC_16(struct domain_device *VAR_10, int VAR_11)
{
 struct expander_device *VAR_12 = &VAR_10->ex_dev;
 struct ex_phy *VAR_13 = &VAR_12->ex_phy[VAR_11];
 struct domain_device *VAR_14 = ((void*)0);
 int VAR_15 = 0;


 if (VAR_13->linkrate == VAR_8) {
  if (!FUNC_15(VAR_10, VAR_11, VAR_3, ((void*)0)))
   VAR_15 = FUNC_14(VAR_10, VAR_11);
  if (VAR_15)
   return VAR_15;
 }


 if (!VAR_10->parent && (FUNC_0(VAR_13->attached_sas_addr) ==
        FUNC_0(VAR_10->port->sas_addr))) {
  FUNC_4(VAR_10, VAR_11);
  return 0;
 }
 if (VAR_10->parent && (FUNC_0(VAR_13->attached_sas_addr) ==
       FUNC_0(VAR_10->parent->sas_addr))) {
  FUNC_4(VAR_10, VAR_11);
  if (VAR_13->routing_attr == VAR_9)
   FUNC_5(VAR_10, VAR_11, VAR_10->port->sas_addr, 1);
  return 0;
 }

 if (FUNC_7(VAR_10->port, VAR_13->attached_sas_addr))
  FUNC_10(VAR_10, VAR_13->attached_sas_addr);

 if (VAR_13->attached_dev_type == VAR_1) {
  if (VAR_13->routing_attr == VAR_0) {
   FUNC_3(VAR_13->attached_sas_addr, 0, VAR_6);
   FUNC_6(VAR_10, VAR_13->attached_sas_addr);
  }
  return 0;
 } else if (VAR_13->linkrate == VAR_7)
  return 0;

 if (VAR_13->attached_dev_type != 129 &&
     VAR_13->attached_dev_type != 130 &&
     VAR_13->attached_dev_type != 131 &&
     VAR_13->attached_dev_type != 128) {
  FUNC_1("unknown device type(0x%x) attached to ex %016llx "
       "phy 0x%x\n", VAR_13->attached_dev_type,
       FUNC_0(VAR_10->sas_addr),
       VAR_11);
  return 0;
 }

 VAR_15 = FUNC_6(VAR_10, VAR_13->attached_sas_addr);
 if (VAR_15) {
  FUNC_1("configure routing for dev %016llx "
       "reported 0x%x. Forgotten\n",
       FUNC_0(VAR_13->attached_sas_addr), VAR_15);
  FUNC_8(VAR_10, VAR_13->attached_sas_addr);
  return VAR_15;
 }

 if (FUNC_13(VAR_10, VAR_11)) {
  FUNC_1("Attaching ex phy%d to wide port %016llx\n",
       VAR_11, FUNC_0(VAR_13->attached_sas_addr));
  return VAR_15;
 }

 switch (VAR_13->attached_dev_type) {
 case 129:
 case 128:
  VAR_14 = FUNC_11(VAR_10, VAR_11);
  break;
 case 130:
  if (FUNC_0(VAR_10->port->disc.fanout_sas_addr)) {
   FUNC_1("second fanout expander %016llx phy 0x%x "
        "attached to ex %016llx phy 0x%x\n",
        FUNC_0(VAR_13->attached_sas_addr),
        VAR_13->attached_phy_id,
        FUNC_0(VAR_10->sas_addr),
        VAR_11);
   FUNC_9(VAR_10, VAR_11);
   break;
  } else
   FUNC_2(VAR_10->port->disc.fanout_sas_addr,
          VAR_13->attached_sas_addr, VAR_6);

 case 131:
  VAR_14 = FUNC_12(VAR_10, VAR_11);
  break;
 default:
  break;
 }

 if (VAR_14) {
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_12->num_phys; VAR_16++) {
   if (VAR_12->ex_phy[VAR_16].phy_state == VAR_5 ||
       VAR_12->ex_phy[VAR_16].phy_state == VAR_4)
    continue;




   if (FUNC_0(VAR_12->ex_phy[VAR_16].attached_sas_addr) ==
       FUNC_0(VAR_14->sas_addr)) {
    VAR_12->ex_phy[VAR_16].phy_state= VAR_2;
    if (FUNC_13(VAR_10, VAR_16))
     FUNC_1("Attaching ex phy%d to wide port %016llx\n",
          VAR_16, FUNC_0(VAR_12->ex_phy[VAR_16].attached_sas_addr));

   }
  }
 }

 return VAR_15;
}
