
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline signed long FUNC_0(unsigned char *VAR_0)
{
 return VAR_0[0] | VAR_0[1] << 8 | VAR_0[2] << 16 | ((VAR_0[2] & 0x80) ? 0xff000000 : 0);
}
