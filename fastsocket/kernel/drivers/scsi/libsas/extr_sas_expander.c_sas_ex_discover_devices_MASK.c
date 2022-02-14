
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; int linkrate; } ;
struct domain_device {struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*,int) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_3, int VAR_4)
{
 struct expander_device *VAR_5 = &VAR_3->ex_dev;
 int VAR_6 = 0, VAR_7 = VAR_5->num_phys;
 int VAR_8 = 0;

 if (0 <= VAR_4 && VAR_4 < VAR_7) {
  VAR_6 = VAR_4;
  VAR_7 = VAR_6+1;
 }

 for ( ; VAR_6 < VAR_7; VAR_6++) {
  struct ex_phy *VAR_9 = &VAR_5->ex_phy[VAR_6];

  if (VAR_9->phy_state == VAR_2 ||
      VAR_9->phy_state == VAR_1 ||
      VAR_9->phy_state == VAR_0)
   continue;

  switch (VAR_9->linkrate) {
  case 130:
  case 129:
  case 128:
   continue;
  default:
   VAR_8 = FUNC_1(VAR_3, VAR_6);
   if (VAR_8)
    break;
   continue;
  }
 }

 if (!VAR_8)
  FUNC_0(VAR_3);

 return VAR_8;
}
