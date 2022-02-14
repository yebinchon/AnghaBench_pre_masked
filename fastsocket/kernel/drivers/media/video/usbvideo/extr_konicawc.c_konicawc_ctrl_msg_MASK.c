
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uvd {int dev; } ;


 int FUNC_0 (int ,int ,int,int,int ,int ,void*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_0, u8 VAR_1, u8 VAR_2, u16 VAR_3, u16 VAR_4, void *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_0->dev,
  VAR_1 ? FUNC_1(VAR_0->dev, 0) : FUNC_2(VAR_0->dev, 0),
      VAR_2, 0x40 | VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, 1000);
 return VAR_7 < 0 ? VAR_7 : 0;
}
