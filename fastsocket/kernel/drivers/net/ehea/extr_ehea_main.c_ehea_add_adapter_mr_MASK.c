
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_adapter {int mr; scalar_t__ active_ports; } ;


 int FUNC_0 (struct ehea_adapter*,int *) ;

__attribute__((used)) static int FUNC_1(struct ehea_adapter *VAR_0)
{
 if (VAR_0->active_ports)
  return 0;

 return FUNC_0(VAR_0, &VAR_0->mr);
}
