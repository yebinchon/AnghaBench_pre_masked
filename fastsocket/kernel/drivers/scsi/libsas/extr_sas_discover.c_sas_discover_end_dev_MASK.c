
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct domain_device*) ;

int FUNC_2(struct domain_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->port, VAR_0);

 return 0;
}
