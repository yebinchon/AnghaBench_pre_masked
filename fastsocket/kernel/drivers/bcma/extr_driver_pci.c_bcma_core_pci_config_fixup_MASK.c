
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct bcma_drv_pci {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcma_drv_pci*,int ) ;
 int FUNC_2 (struct bcma_drv_pci*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_pci *VAR_2)
{
 u16 VAR_3;
 uint VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_2, VAR_4);

 if (!(VAR_3 & VAR_0)) {
  VAR_3 |= VAR_0;
  FUNC_2(VAR_2, VAR_4, VAR_3);
 }
}
