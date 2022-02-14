
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int service; } ;
struct device {int * bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcie_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, void *VAR_3)
{
 struct pcie_device **VAR_4 = VAR_3;
 struct pcie_device *VAR_5;

 if (VAR_2->bus == &VAR_1) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5->service & VAR_0) {
   *VAR_4 = VAR_5;
   return 1;
  }
 }
 return 0;
}
