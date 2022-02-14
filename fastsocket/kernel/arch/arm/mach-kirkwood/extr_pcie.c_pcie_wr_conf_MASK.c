
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct pci_bus*,int ,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_3, u32 VAR_4,
   int VAR_5, int VAR_6, u32 VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_3->number, FUNC_0(VAR_4)) == 0)
  return VAR_0;

 FUNC_3(&VAR_2, VAR_8);
 VAR_9 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_4(&VAR_2, VAR_8);

 return VAR_9;
}
