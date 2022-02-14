
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expander_device {int num_phys; int t2t_supp; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; size_t attached_phy_id; int routing_attr; int attached_sas_addr; } ;
struct domain_device {int dev_type; TYPE_1__* parent; int sas_addr; struct expander_device ex_dev; } ;
struct TYPE_2__ {int dev_type; struct expander_device ex_dev; } ;



 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct domain_device*,struct ex_phy*,struct ex_phy*) ;
 int FUNC_2 (struct domain_device*,struct ex_phy*,struct ex_phy*) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_5)
{
 struct expander_device *VAR_6 = &VAR_5->ex_dev;
 struct expander_device *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 if (!VAR_5->parent)
  return 0;

 if (VAR_5->parent->dev_type != 129 &&
     VAR_5->parent->dev_type != 128)
  return 0;

 VAR_7 = &VAR_5->parent->ex_dev;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_phys; VAR_8++) {
  struct ex_phy *VAR_10 = &VAR_7->ex_phy[VAR_8];
  struct ex_phy *VAR_11;

  if (VAR_10->phy_state == VAR_2 ||
      VAR_10->phy_state == VAR_1)
   continue;

  if (FUNC_0(VAR_10->attached_sas_addr) != FUNC_0(VAR_5->sas_addr))
   continue;

  VAR_11 = &VAR_6->ex_phy[VAR_10->attached_phy_id];

  switch (VAR_5->parent->dev_type) {
  case 129:
   if (VAR_5->dev_type == 128) {
    if (VAR_10->routing_attr != VAR_3 ||
        VAR_11->routing_attr != VAR_4) {
     FUNC_2(VAR_5, VAR_10, VAR_11);
     VAR_9 = -VAR_0;
    }
   } else if (VAR_10->routing_attr == VAR_3) {
    if (VAR_11->routing_attr == VAR_3) {
     VAR_9 = FUNC_1(VAR_5, VAR_10, VAR_11);
    } else if (VAR_11->routing_attr != VAR_4) {
     FUNC_2(VAR_5, VAR_10, VAR_11);
     VAR_9 = -VAR_0;
    }
   } else if (VAR_10->routing_attr == VAR_4) {
    if (VAR_11->routing_attr == VAR_3 ||
        (VAR_11->routing_attr == VAR_4 &&
         VAR_6->t2t_supp && VAR_7->t2t_supp)) {
                   ;
    } else {
     FUNC_2(VAR_5, VAR_10, VAR_11);
     VAR_9 = -VAR_0;
    }
   }
   break;
  case 128:
   if (VAR_10->routing_attr != VAR_4 ||
       VAR_11->routing_attr != VAR_3) {
    FUNC_2(VAR_5, VAR_10, VAR_11);
    VAR_9 = -VAR_0;
   }
   break;
  default:
   break;
  }
 }

 return VAR_9;
}
