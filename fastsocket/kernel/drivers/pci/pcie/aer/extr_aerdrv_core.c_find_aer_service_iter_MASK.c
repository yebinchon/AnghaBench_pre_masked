
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {scalar_t__ service; } ;
struct device {scalar_t__ driver; int * bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pcie_port_service_driver* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, void *VAR_3)
{
 struct pcie_port_service_driver *VAR_4, **VAR_5;

 VAR_5 = (struct pcie_port_service_driver **) VAR_3;

 if (VAR_2->bus == &VAR_1 && VAR_2->driver) {
  VAR_4 = FUNC_0(VAR_2->driver);
  if (VAR_4->service == VAR_0) {
   *VAR_5 = VAR_4;
   return 1;
  }
 }

 return 0;
}
