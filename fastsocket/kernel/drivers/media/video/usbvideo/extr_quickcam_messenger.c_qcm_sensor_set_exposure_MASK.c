
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;


 VAR_3 = ( VAR_1 >> 12 );


 VAR_3 = FUNC_1(VAR_3, 14);

 FUNC_0(VAR_2, FUNC_2(VAR_0->dev,
   0x143A, 0xF0 | VAR_3));
 FUNC_0(VAR_2, FUNC_2(VAR_0->dev, 0x143F, 0x01));
 return 0;
}
