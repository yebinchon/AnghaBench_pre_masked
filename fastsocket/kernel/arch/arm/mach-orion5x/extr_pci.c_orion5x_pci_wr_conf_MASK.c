
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1, u32 VAR_2,
    int VAR_3, int VAR_4, u32 VAR_5)
{
 if (!FUNC_3(VAR_1->number, VAR_2))
  return VAR_0;

 return FUNC_2(VAR_1->number, FUNC_1(VAR_2),
     FUNC_0(VAR_2), VAR_3, VAR_4, VAR_5);
}
