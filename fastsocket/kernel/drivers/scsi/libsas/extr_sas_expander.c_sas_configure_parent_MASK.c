
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {scalar_t__ conf_route_table; int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ routing_attr; int attached_sas_addr; } ;
struct domain_device {int sas_addr; struct domain_device* parent; struct expander_device ex_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct domain_device*,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_1,
    struct domain_device *VAR_2,
    u8 *VAR_3, int VAR_4)
{
 struct expander_device *VAR_5 = &VAR_1->ex_dev;
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_1->parent) {
  VAR_6 = FUNC_3(VAR_1->parent, VAR_1, VAR_3,
        VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_5->conf_route_table == 0) {
  FUNC_1("ex %016llx has self-configuring routing table\n",
       FUNC_0(VAR_1->sas_addr));
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_phys; VAR_7++) {
  struct ex_phy *VAR_8 = &VAR_5->ex_phy[VAR_7];

  if ((VAR_8->routing_attr == VAR_0) &&
      (FUNC_0(VAR_8->attached_sas_addr) ==
       FUNC_0(VAR_2->sas_addr))) {
   VAR_6 = FUNC_2(VAR_1, VAR_7, VAR_3, VAR_4);
   if (VAR_6)
    return VAR_6;
  }
 }

 return VAR_6;
}
