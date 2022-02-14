
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {scalar_t__ service; scalar_t__ port_type; } ;
struct pcie_device {scalar_t__ service; int port; } ;
struct device_driver {int * bus; } ;
struct device {int * bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct pcie_device* FUNC_1 (struct device*) ;
 struct pcie_port_service_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct device_driver *VAR_3)
{
 struct pcie_device *VAR_4;
 struct pcie_port_service_driver *VAR_5;

 if (VAR_3->bus != &VAR_1 || VAR_2->bus != &VAR_1)
  return 0;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_3);

 if (VAR_5->service != VAR_4->service)
  return 0;

 if ((VAR_5->port_type != VAR_0) &&
     (VAR_5->port_type != FUNC_0(VAR_4->port)))
  return 0;

 return 1;
}
