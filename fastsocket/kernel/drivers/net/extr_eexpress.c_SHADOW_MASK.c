
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned short int FUNC_0(short int VAR_0)
{
 VAR_0 &= 0x1f;
 if (VAR_0 > 0xf) VAR_0 += 0x3ff0;
 return VAR_0 + 0x4000;
}
