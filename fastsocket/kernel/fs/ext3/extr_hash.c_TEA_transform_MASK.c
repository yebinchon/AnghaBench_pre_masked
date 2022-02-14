
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(__u32 VAR_1[4], __u32 const VAR_2[])
{
 __u32 VAR_3 = 0;
 __u32 VAR_4 = VAR_1[0], VAR_5 = VAR_1[1];
 __u32 VAR_6 = VAR_2[0], VAR_7 = VAR_2[1], VAR_8 = VAR_2[2], VAR_9 = VAR_2[3];
 int VAR_10 = 16;

 do {
  VAR_3 += VAR_0;
  VAR_4 += ((VAR_5 << 4)+VAR_6) ^ (VAR_5+VAR_3) ^ ((VAR_5 >> 5)+VAR_7);
  VAR_5 += ((VAR_4 << 4)+VAR_8) ^ (VAR_4+VAR_3) ^ ((VAR_4 >> 5)+VAR_9);
 } while(--VAR_10);

 VAR_1[0] += VAR_4;
 VAR_1[1] += VAR_5;
}
