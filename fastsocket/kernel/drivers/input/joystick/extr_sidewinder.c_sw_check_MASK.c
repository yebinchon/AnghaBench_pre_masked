
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



__attribute__((used)) static int FUNC_0(__u64 VAR_0)
{
 unsigned char VAR_1 = 0;

 if ((VAR_0 & 0x8080808080808080ULL) ^ 0x80)
  return -1;

 while (VAR_0) {
  VAR_1 += VAR_0 & 0xf;
  VAR_0 >>= 4;
 }

 return VAR_1 & 0xf;
}
