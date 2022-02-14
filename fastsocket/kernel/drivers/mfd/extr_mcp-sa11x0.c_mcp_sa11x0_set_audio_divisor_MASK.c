
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mcp *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_2 /= 32;

 VAR_3 = VAR_0 & ~0x0000007f;
 VAR_3 |= VAR_2;
 VAR_0 = VAR_3;
}
