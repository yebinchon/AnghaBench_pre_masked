
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val16 ;
typedef int u8 ;
typedef int u16 ;
struct bcma_drv_pci {TYPE_1__* core; } ;
struct bcma_bus {int dummy; } ;
struct TYPE_2__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcma_bus*,char*,int) ;
 int FUNC_1 (struct bcma_drv_pci*,int,int ,int,int*,int) ;
 int FUNC_2 (struct bcma_drv_pci*,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bcma_drv_pci *VAR_7)
{
 struct bcma_bus *VAR_8 = VAR_7->core->bus;
 u8 VAR_9, VAR_10, VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14;

 VAR_9 = FUNC_2(VAR_7, 0, 0, VAR_2, ((void*)0),
        ((void*)0));
 VAR_11 = VAR_9 + VAR_3;
 FUNC_1(VAR_7, 0, 0, VAR_11, &VAR_13, sizeof(u16));
 if (VAR_13 & VAR_0) {

  VAR_10 = VAR_9 + VAR_4;
  VAR_13 = VAR_5;
  FUNC_1(VAR_7, 0, 0, VAR_10, &VAR_13,
     sizeof(u16));
  for (VAR_12 = 1; VAR_12 < VAR_1; VAR_12++) {
   for (VAR_14 = 0; VAR_14 < 100000; VAR_14++) {
    FUNC_1(VAR_7, VAR_12, 0,
       VAR_6, &VAR_13,
       sizeof(VAR_13));
    if (VAR_13 != 0x1)
     break;
    FUNC_3(10);
   }
   if (VAR_13 == 0x1)
    FUNC_0(VAR_8, "PCI: Broken device in slot %d\n",
      VAR_12);
  }
 }
}
