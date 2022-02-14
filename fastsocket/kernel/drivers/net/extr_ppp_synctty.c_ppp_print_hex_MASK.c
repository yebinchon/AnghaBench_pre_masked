
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;



__attribute__((used)) static void
FUNC_0 (register __u8 * VAR_0, const __u8 * VAR_1, int VAR_2)
{
 register __u8 VAR_3;
 static const char VAR_4[] = "0123456789ABCDEF";

 while (VAR_2-- > 0) {
  VAR_3 = *VAR_1++;
  *VAR_0++ = VAR_4[(VAR_3 >> 4) & 0x0F];
  *VAR_0++ = VAR_4[VAR_3 & 0x0F];
  ++VAR_0;
 }
}
