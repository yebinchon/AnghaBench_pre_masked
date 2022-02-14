
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline long FUNC_0(u16 VAR_0)
{
 long VAR_1;

 VAR_0 >>= 4;
 if (VAR_0 < 0x0800)
  VAR_1 = 625 * (long) VAR_0;
 else
  VAR_1 = ((long) VAR_0 - 0x01000) * 625;

 return VAR_1 / 10;
}
