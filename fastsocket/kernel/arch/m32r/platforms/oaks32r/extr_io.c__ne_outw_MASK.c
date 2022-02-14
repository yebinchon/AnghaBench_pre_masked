
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned short VAR_0, void *VAR_1)
{
 *(volatile unsigned short *)VAR_1 = (VAR_0 >> 8);
 *(volatile unsigned short *)(VAR_1+2) = (VAR_0 & 0xff);
}
