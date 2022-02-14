
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {int id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_1 (struct bcma_bus*,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_cc *VAR_2)
{
 struct bcma_bus *VAR_3 = VAR_2->core->bus;
 u32 VAR_4 = 0, VAR_5 = 0;

 switch (VAR_3->chipinfo.id) {
 case 128:
  VAR_4 = 0x200D;
  VAR_5 = 0xFFFF;
  break;
 default:
  FUNC_1(VAR_3, "PMU resource config unknown or not needed for device 0x%04X\n",
      VAR_3->chipinfo.id);
 }


 if (VAR_4)
  FUNC_0(VAR_2, VAR_1, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_2, VAR_0, VAR_5);





 FUNC_2(2);
}
