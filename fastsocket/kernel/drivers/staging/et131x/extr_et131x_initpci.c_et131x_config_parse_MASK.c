
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct et131x_adapter {int SpeedDuplex; int RegistryJumboPacket; int AiForceSpeed; int AiForceDpx; TYPE_1__* pdev; int CurrentAddress; int RegistryNMIDisable; } ;
struct TYPE_2__ {scalar_t__ device; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int const*,int ) ;

void FUNC_2(struct et131x_adapter *VAR_4)
{
 static const u8 VAR_5[] = { 0x00, 0x05, 0x3d, 0x00, 0x02, 0x00 };
 static const u8 VAR_6[] = { 0, 1, 2, 1, 2, 2 };
 static const u16 VAR_7[] = { 0, 10, 10, 100, 100, 1000 };

 if (VAR_3)
  FUNC_0(&VAR_4->pdev->dev,
   "Speed set manually to : %d \n", VAR_3);

 VAR_4->SpeedDuplex = VAR_3;
 VAR_4->RegistryJumboPacket = 1514;

 VAR_4->RegistryNMIDisable = VAR_2;


 FUNC_1(VAR_4->CurrentAddress, VAR_5, VAR_1);
 if (VAR_4->pdev->device == VAR_0 &&
     VAR_4->SpeedDuplex == 5)
  VAR_4->SpeedDuplex = 4;

 VAR_4->AiForceSpeed = VAR_7[VAR_4->SpeedDuplex];
 VAR_4->AiForceDpx = VAR_6[VAR_4->SpeedDuplex];
}
