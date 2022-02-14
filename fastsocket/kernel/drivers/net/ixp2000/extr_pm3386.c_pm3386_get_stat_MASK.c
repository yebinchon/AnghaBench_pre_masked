
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int FUNC_0 (int,scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_1(int VAR_0, u16 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 0x100);
 VAR_2 |= FUNC_0(VAR_0, VAR_1 + 1, 0x100) << 16;

 return VAR_2;
}
