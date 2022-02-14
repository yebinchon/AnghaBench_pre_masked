
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u32 ;
struct fb_bitfield {int length; int offset; } ;



__attribute__((used)) static inline u32 FUNC_0(u_int VAR_0, struct fb_bitfield *VAR_1)
{
 u_int VAR_2 = (1 << VAR_1->length) - 1;

 return (VAR_0 >> (16 - VAR_1->length) & VAR_2) << VAR_1->offset;
}
