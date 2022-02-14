
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {scalar_t__ dev_type; int port; int rphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct domain_device*,int ) ;
 int FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct domain_device*) ;

int FUNC_4(struct domain_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->dev_type == VAR_2)
  return -VAR_1;

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_3->rphy);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3->port, VAR_0);
 return 0;
}
