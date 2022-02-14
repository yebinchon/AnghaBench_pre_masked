
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vusp ;
typedef int * vuip ;
typedef int * vucp ;
typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct pci_bus*,unsigned int,int,unsigned long*,unsigned char*) ;

__attribute__((used)) static int
FUNC_6(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
       int VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 unsigned char VAR_8;

 if (FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8))
  return VAR_0;

 switch (VAR_5) {
 case 1:
  FUNC_2(VAR_6, *(vucp)VAR_7);
  FUNC_4();
  FUNC_0(*(vucp)VAR_7);
  break;
 case 2:
  FUNC_3(VAR_6, *(vusp)VAR_7);
  FUNC_4();
  FUNC_1(*(vusp)VAR_7);
  break;
 case 4:
  *(vuip)VAR_7 = VAR_6;
  FUNC_4();
  *(vuip)VAR_7;
  break;
 }

 return VAR_1;
}
