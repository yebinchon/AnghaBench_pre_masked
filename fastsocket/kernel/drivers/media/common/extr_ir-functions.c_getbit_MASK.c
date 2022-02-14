
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int inline FUNC_0(u32 *VAR_0, int VAR_1)
{
 return (VAR_0[VAR_1/32] & (1 << (31-(VAR_1%32)))) ? 1 : 0;
}
