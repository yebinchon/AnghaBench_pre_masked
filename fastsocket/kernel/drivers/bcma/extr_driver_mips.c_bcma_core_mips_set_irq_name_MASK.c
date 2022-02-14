
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bcma_device {int dummy; } ;
struct bcma_bus {int dummy; } ;


 int FUNC_0 (struct bcma_device*,unsigned int) ;
 struct bcma_device* FUNC_1 (struct bcma_bus*,int ,int ) ;
 int FUNC_2 (struct bcma_bus*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bcma_bus *VAR_0, unsigned int VAR_1,
     u16 VAR_2, u8 VAR_3)
{
 struct bcma_device *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_0,
     "Can not find core (id: 0x%x, unit %i) for IRQ configuration.\n",
     VAR_2, VAR_3);
  return;
 }

 FUNC_0(VAR_4, VAR_1);
}
