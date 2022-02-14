
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cycx_device {int dummy; } ;
typedef int d ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct cycx_device*,int ,int,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct cycx_device *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
     u8 VAR_5)
{
 u8 VAR_6[7];

 FUNC_0(VAR_6, 0, sizeof(VAR_6));
 VAR_6[0] = VAR_6[3] = VAR_3;
 VAR_6[2] = 0x10;
 VAR_6[4] = 0x13;
 VAR_6[5] = VAR_4;
 VAR_6[6] = VAR_5;

 return FUNC_1(VAR_1, VAR_0, VAR_2, VAR_6, 7, ((void*)0), 0);
}
