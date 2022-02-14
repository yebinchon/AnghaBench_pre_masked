
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int pdev; } ;
typedef enum bnx2x_pci_bus_speed { ____Placeholder_bnx2x_pci_bus_speed } bnx2x_pci_bus_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_8, int *VAR_9,
           enum bnx2x_pci_bus_speed *VAR_10)
{
 u32 VAR_11, VAR_12 = 0;

 FUNC_0(VAR_8->pdev, VAR_3, &VAR_12);
 *VAR_9 = (VAR_12 & VAR_6) >> VAR_7;

 VAR_11 = (VAR_12 & VAR_4) >> VAR_5;

 switch (VAR_11) {
 case 3:
  *VAR_10 = VAR_2;
  break;
 case 2:
  *VAR_10 = VAR_1;
  break;
 default:
  *VAR_10 = VAR_0;
 }
}
