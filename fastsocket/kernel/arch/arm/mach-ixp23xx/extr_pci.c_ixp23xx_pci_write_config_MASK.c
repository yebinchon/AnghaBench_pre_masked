
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int* FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_3, unsigned int VAR_4,
     int VAR_5, int VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 *VAR_9;
 u32 VAR_10;

 VAR_8 = ~(VAR_2[VAR_6] << ((VAR_5 % 0x4) * 8));
 VAR_9 = FUNC_1(VAR_3->number, VAR_4, VAR_5);
 if (!VAR_9)
  return VAR_0;
 VAR_10 = (u32) (VAR_7) << ((VAR_5 % 0x4) * 8);
 *VAR_9 = (*VAR_9 & VAR_8) | VAR_10;

 FUNC_0();

 return VAR_1;
}
