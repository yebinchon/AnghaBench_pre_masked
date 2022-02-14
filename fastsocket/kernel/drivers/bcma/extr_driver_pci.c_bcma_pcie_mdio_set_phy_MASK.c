
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bcma_drv_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bcma_drv_pci*,int ) ;
 int FUNC_1 (struct bcma_drv_pci*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bcma_drv_pci *VAR_10, u8 VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 VAR_12 = VAR_5;
 VAR_12 |= VAR_7;
 VAR_12 |= (VAR_3 <<
       VAR_2);
 VAR_12 |= (VAR_1 <<
       VAR_4);
 VAR_12 |= VAR_6;
 VAR_12 |= (VAR_11 << 4);
 FUNC_1(VAR_10, VAR_9, VAR_12);

 FUNC_2(10);
 for (VAR_13 = 0; VAR_13 < 200; VAR_13++) {
  VAR_12 = FUNC_0(VAR_10, VAR_8);
  if (VAR_12 & VAR_0)
   break;
  FUNC_3(1000, 2000);
 }
}
