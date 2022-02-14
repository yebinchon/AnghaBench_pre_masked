
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; scalar_t__ attached_dev_type; scalar_t__ routing_attr; int attached_sas_addr; } ;
struct domain_device {struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct domain_device *VAR_6, u8 *VAR_7)
{
 struct expander_device *VAR_8 = &VAR_6->ex_dev;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_8->num_phys; VAR_9++) {
  struct ex_phy *VAR_10 = &VAR_8->ex_phy[VAR_9];

  if (VAR_10->phy_state == VAR_3 ||
      VAR_10->phy_state == VAR_2)
   continue;

  if ((VAR_10->attached_dev_type == VAR_0 ||
       VAR_10->attached_dev_type == VAR_1) &&
      VAR_10->routing_attr == VAR_5) {

   FUNC_0(VAR_7, VAR_10->attached_sas_addr,VAR_4);

   return 1;
  }
 }
 return 0;
}
