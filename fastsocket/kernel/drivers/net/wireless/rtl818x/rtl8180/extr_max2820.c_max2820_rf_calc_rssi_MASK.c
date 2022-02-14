
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0, u8 VAR_1)
{
 bool VAR_2;

 VAR_2 = !!(VAR_0 & 1);

 VAR_0 >>= 1;
 if (VAR_2)
  VAR_0 += 76;
 else
  VAR_0 += 66;


 return 65 * VAR_0 / 100;
}
