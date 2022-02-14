
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; scalar_t__ attached_dev_type; scalar_t__ routing_attr; int * attached_sas_addr; } ;
struct domain_device {scalar_t__ dev_type; int * sas_addr; struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct domain_device*,int) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_5)
{
 struct expander_device *VAR_6 = &VAR_5->ex_dev;
 int VAR_7;
 u8 *VAR_8 = ((void*)0);

 if (VAR_5->dev_type != VAR_0)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_phys; VAR_7++) {
  struct ex_phy *VAR_9 = &VAR_6->ex_phy[VAR_7];

  if (VAR_9->phy_state == VAR_3 ||
      VAR_9->phy_state == VAR_2)
   continue;

  if ((VAR_9->attached_dev_type == VAR_1 ||
       VAR_9->attached_dev_type == VAR_0) &&
      VAR_9->routing_attr == VAR_4) {

   if (!VAR_8)
    VAR_8 = &VAR_9->attached_sas_addr[0];
   else if (FUNC_0(VAR_8) !=
     FUNC_0(VAR_9->attached_sas_addr)) {

    FUNC_1("ex %016llx phy 0x%x "
         "diverges(%016llx) on subtractive "
         "boundary(%016llx). Disabled\n",
         FUNC_0(VAR_5->sas_addr), VAR_7,
         FUNC_0(VAR_9->attached_sas_addr),
         FUNC_0(VAR_8));
    FUNC_2(VAR_5, VAR_7);
   }
  }
 }
 return 0;
}
