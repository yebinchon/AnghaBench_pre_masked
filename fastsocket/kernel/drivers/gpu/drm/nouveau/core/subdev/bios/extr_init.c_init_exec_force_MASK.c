
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {int execute; } ;



__attribute__((used)) static inline void
FUNC_0(struct nvbios_init *VAR_0, bool VAR_1)
{
 if (VAR_1) VAR_0->execute |= 0x04;
 else VAR_0->execute &= 0xfb;
}
