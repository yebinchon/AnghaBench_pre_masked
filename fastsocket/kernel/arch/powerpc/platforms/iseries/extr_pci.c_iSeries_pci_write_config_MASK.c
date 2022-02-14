
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pci_bus {int number; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_1 (int ,unsigned int) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_3, unsigned int VAR_4,
  int VAR_5, int VAR_6, u32 VAR_7)
{
 struct device_node *VAR_8 = FUNC_1(VAR_3->number, VAR_4);
 u64 VAR_9;
 u64 VAR_10;

 if (VAR_8 == ((void*)0))
  return VAR_1;
 if (VAR_5 > 255)
  return VAR_0;

 VAR_9 = VAR_2[(VAR_6 - 1) & 3];
 VAR_10 = FUNC_0(VAR_9, FUNC_2(VAR_8), VAR_5, VAR_7, 0);

 if (VAR_10 != 0)
  return VAR_1;

 return 0;
}
