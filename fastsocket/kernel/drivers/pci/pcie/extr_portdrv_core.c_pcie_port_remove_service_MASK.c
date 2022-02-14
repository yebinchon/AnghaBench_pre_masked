
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {int (* remove ) (struct pcie_device*) ;int name; } ;
struct pcie_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct pcie_device*) ;
 struct pcie_device* FUNC_3 (struct device*) ;
 struct pcie_port_service_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct pcie_device *VAR_2;
 struct pcie_port_service_driver *VAR_3;

 if (!VAR_1 || !VAR_1->driver)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_4(VAR_1->driver);
 if (VAR_3 && VAR_3->remove) {
  FUNC_0(VAR_0, VAR_1, "unloading service driver %s\n",
   VAR_3->name);
  VAR_3->remove(VAR_2);
  FUNC_1(VAR_1);
 }
 return 0;
}
