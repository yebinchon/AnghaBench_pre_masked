
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_bitfield {int length; int offset; } ;



__attribute__((used)) static inline u_int FUNC_0(u_int VAR_0, struct fb_bitfield *VAR_1)
{
 VAR_0 &= 0xffff;
 VAR_0 >>= 16 - VAR_1->length;
 return VAR_0 << VAR_1->offset;
}
