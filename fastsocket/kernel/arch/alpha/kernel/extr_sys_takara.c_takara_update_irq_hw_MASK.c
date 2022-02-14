
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int) ;

__attribute__((used)) static inline void
FUNC_1(unsigned long VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 VAR_1 = (VAR_0 >= 64 ? VAR_1 << 16 : VAR_1 >> ((VAR_0 - 16) & 0x30));
 VAR_2 = 0x510 + (((VAR_0 - 16) >> 2) & 0x0c);
 FUNC_0(VAR_1 & 0xffff0000UL, VAR_2);
}
