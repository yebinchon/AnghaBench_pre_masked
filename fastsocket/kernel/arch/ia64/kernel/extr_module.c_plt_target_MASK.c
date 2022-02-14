
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct plt_entry {scalar_t__* bundle; } ;



unsigned long
FUNC_0 (struct plt_entry *VAR_0)
{
 uint64_t VAR_1, VAR_2, *VAR_3 = (uint64_t *) VAR_0->bundle[1];
 long VAR_4;

 VAR_1 = VAR_3[0]; VAR_2 = VAR_3[1];
 VAR_4 = ( ((VAR_2 & 0x00fffff000000000UL) >> 36)
        | ((VAR_1 >> 48) << 20) | ((VAR_2 & 0x7fffffUL) << 36)
        | ((VAR_2 & 0x0800000000000000UL) << 0));
 return (long) VAR_0->bundle[1] + 16*VAR_4;
}
