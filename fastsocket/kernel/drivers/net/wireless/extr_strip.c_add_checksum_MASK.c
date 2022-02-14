
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int * VAR_0 ;

__attribute__((used)) static __u8 *FUNC_0(__u8 * VAR_1, __u8 * VAR_2)
{
 __u16 VAR_3 = 0;
 __u8 *VAR_4 = VAR_1;
 while (VAR_4 < VAR_2)
  VAR_3 += *VAR_4++;
 VAR_2[3] = VAR_0[VAR_3 & 0xF];
 VAR_3 >>= 4;
 VAR_2[2] = VAR_0[VAR_3 & 0xF];
 VAR_3 >>= 4;
 VAR_2[1] = VAR_0[VAR_3 & 0xF];
 VAR_3 >>= 4;
 VAR_2[0] = VAR_0[VAR_3 & 0xF];
 return (VAR_2 + 4);
}
