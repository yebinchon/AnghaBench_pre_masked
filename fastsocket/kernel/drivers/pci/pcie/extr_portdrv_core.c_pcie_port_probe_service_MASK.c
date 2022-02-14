
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port_service_driver {int (* probe ) (struct pcie_device*) ;int name; } ;
struct pcie_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct pcie_device*) ;
 struct pcie_device* FUNC_3 (struct device*) ;
 struct pcie_port_service_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct pcie_device *VAR_3;
 struct pcie_port_service_driver *VAR_4;
 int VAR_5;

 if (!VAR_2 || !VAR_2->driver)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2->driver);
 if (!VAR_4 || !VAR_4->probe)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 VAR_5 = VAR_4->probe(VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_1, VAR_2, "service driver %s loaded\n",
   VAR_4->name);
  FUNC_1(VAR_2);
 }
 return VAR_5;
}
