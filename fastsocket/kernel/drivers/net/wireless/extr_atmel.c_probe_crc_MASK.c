
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct atmel_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct atmel_private *VAR_1, u16 VAR_2, u16 VAR_3)
{
 int VAR_4 = VAR_3 - 4;
 u32 VAR_5, VAR_6 = 0xffffffff;

 if (VAR_3 < 4)
  return 0;

 FUNC_0(VAR_1->dev, (void *)&VAR_5, VAR_2 + VAR_4, 4);

 FUNC_2(VAR_1->dev, VAR_2);
 while (VAR_4--) {
  u8 VAR_7 = FUNC_1(VAR_1->dev, VAR_0);
  VAR_6 = FUNC_3(VAR_6, &VAR_7, 1);
 }

 return (VAR_6 ^ 0xffffffff) == VAR_5;
}
