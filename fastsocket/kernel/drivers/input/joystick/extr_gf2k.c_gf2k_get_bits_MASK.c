
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char __u64 ;



__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 __u64 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2 / 3 + 2; VAR_5++)
  VAR_4 |= VAR_0[VAR_1 / 3 + VAR_5] << (VAR_5 * 3);
 VAR_4 >>= VAR_1 % 3;
 VAR_4 &= (1 << VAR_2) - 1;
 VAR_4 <<= VAR_3;

 return VAR_4;
}
