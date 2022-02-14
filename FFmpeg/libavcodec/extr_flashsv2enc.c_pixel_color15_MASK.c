
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline unsigned FUNC_0(const uint8_t * VAR_0)
{
    return (VAR_0[0] >> 3) | ((VAR_0[1] & 0xf8) << 2) | ((VAR_0[2] & 0xf8) << 7);
}
