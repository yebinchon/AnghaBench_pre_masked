
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uvd {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int*,int*,int*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct uvd *VAR_0, u16 VAR_1,
 u16 VAR_2, u16 VAR_3)
{
 int VAR_4;
 u16 VAR_5=0,VAR_6=0,VAR_7=0;


 FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_7);

 VAR_5 >>= 12;
 VAR_6 >>= 12;
 VAR_7 >>= 12;


 VAR_5 = FUNC_1((u16) 8, VAR_5);
 VAR_6 = FUNC_1((u16) 8, VAR_6);
 VAR_7 = FUNC_1((u16) 8, VAR_7);

 VAR_5 |= 0x30;
 VAR_6 |= 0x30;
 VAR_7 |= 0x30;


 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x0509, VAR_5));
 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x050A, VAR_6));
 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x050B, VAR_7));


 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x050C, 0x2A));
 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x050D, 0x01));
 FUNC_0(VAR_4, FUNC_3(VAR_0->dev, 0x143F, 0x01));

 return 0;
}
