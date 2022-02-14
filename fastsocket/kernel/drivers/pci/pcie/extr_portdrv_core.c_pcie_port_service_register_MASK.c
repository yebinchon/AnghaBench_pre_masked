
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int shutdown; int remove; int probe; int * bus; } ;
struct pcie_port_service_driver {TYPE_1__ driver; scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_1(struct pcie_port_service_driver *VAR_6)
{
 if (VAR_5)
  return -VAR_0;

 VAR_6->driver.name = (char *)VAR_6->name;
 VAR_6->driver.bus = &VAR_1;
 VAR_6->driver.probe = VAR_2;
 VAR_6->driver.remove = VAR_3;
 VAR_6->driver.shutdown = VAR_4;

 return FUNC_0(&VAR_6->driver);
}
