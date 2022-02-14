
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct uvd *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 > 0xC000)
  VAR_1 = 0xC000 + (VAR_1 & 0x3FFF)*8;

 FUNC_0(VAR_2, FUNC_1(VAR_0->dev, 0x143D,
    (VAR_1 >> 8) & 0xFF));
 FUNC_0(VAR_2, FUNC_1(VAR_0->dev, 0x143E,
    (VAR_1 >> 16) & 0x03));
 FUNC_0(VAR_2, FUNC_1(VAR_0->dev, 0x143F, 0x01));

 return 0;
}
