
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(unsigned long *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = 0;

 VAR_1 /= sizeof(*VAR_0);
 while (VAR_1-- > 0)
  VAR_2 ^= *VAR_0++;
 VAR_2 = ((VAR_2>>1) & 0x55555555) ^ (VAR_2 & 0x55555555);

 return VAR_2;
}
