
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u8 ;
struct esp {scalar_t__ regs; } ;



__attribute__((used)) static u8 FUNC_0(struct esp *VAR_0, unsigned long VAR_1)
{
 return *(volatile u8 *)(VAR_0->regs + VAR_1);
}
