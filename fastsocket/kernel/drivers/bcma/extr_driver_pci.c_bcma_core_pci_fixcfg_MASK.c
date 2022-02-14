
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct bcma_drv_pci {struct bcma_device* core; } ;
struct bcma_device {scalar_t__ core_index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcma_drv_pci*,int ) ;
 int FUNC_2 (struct bcma_drv_pci*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_pci *VAR_3)
{
 struct bcma_device *VAR_4 = VAR_3->core;
 u16 VAR_5, VAR_6;
 uint VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 VAR_6 = (u16)VAR_4->core_index;

 VAR_5 = FUNC_1(VAR_3, VAR_7);
 if (((VAR_5 & VAR_0) >> VAR_2)
      != VAR_6) {
  VAR_5 = (VAR_6 << VAR_2) |
   (VAR_5 & ~VAR_0);
  FUNC_2(VAR_3, VAR_7, VAR_5);
 }
}
