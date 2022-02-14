
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_bitfield {int length; unsigned int offset; } ;



__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, struct fb_bitfield *VAR_1)
{
 return ((VAR_0 & 0xffff) >> (16 - VAR_1->length)) << VAR_1->offset;
}
