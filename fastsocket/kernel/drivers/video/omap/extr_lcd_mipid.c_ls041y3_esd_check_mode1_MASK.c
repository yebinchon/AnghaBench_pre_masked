
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mipid_device {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct mipid_device*) ;
 int FUNC_2 (struct mipid_device*,int ,int*,int) ;
 int FUNC_3 (struct mipid_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct mipid_device *VAR_1)
{
 u8 VAR_2, VAR_3;

 FUNC_2(VAR_1, VAR_0, &VAR_2, 1);
 FUNC_3(VAR_1, 0);
 FUNC_2(VAR_1, VAR_0, &VAR_3, 1);
 FUNC_0(&VAR_1->spi->dev, "ESD mode 1 state1 %02x state2 %02x\n",
  VAR_2, VAR_3);



 if (!((VAR_2 ^ VAR_3) & (1 << 6)))
  FUNC_1(VAR_1);
}
