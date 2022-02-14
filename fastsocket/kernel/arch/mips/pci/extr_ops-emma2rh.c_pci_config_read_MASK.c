
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct pci_bus*,unsigned int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_7, unsigned int VAR_8, int VAR_9,
      int VAR_10, uint32_t * VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = FUNC_0(VAR_0);
 u32 VAR_14;
 u32 VAR_15;

 *VAR_11 = 0xffffffffU;

 if (FUNC_2(VAR_7, VAR_8, &VAR_12) == VAR_3)
  return VAR_3;

 VAR_14 = FUNC_3(VAR_2);

 if (FUNC_5(VAR_12, VAR_8, VAR_9) < 0)
  return VAR_3;

 VAR_15 =
     *(volatile u32 *)(VAR_13 + (FUNC_1(VAR_8) << 8) +
         (VAR_9 & 0xfffffffc));

 switch (VAR_10) {
 case 1:
  *VAR_11 = (VAR_15 >> ((VAR_9 & 3) << 3)) & 0xffU;
  break;
 case 2:
  *VAR_11 = (VAR_15 >> ((VAR_9 & 2) << 3)) & 0xffffU;
  break;
 case 4:
  *VAR_11 = VAR_15;
  break;
 default:
  FUNC_4(VAR_2, VAR_14);
  return VAR_4;
 }

 FUNC_4(VAR_2, VAR_14);

 if (FUNC_3(VAR_1) & VAR_6)
  return VAR_3;

 return VAR_5;
}
