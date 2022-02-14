
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned FUNC_0(u8 VAR_0, int VAR_1, int VAR_2)
{
 const long VAR_3 = VAR_1 ? (((VAR_0 >> 4 & 0x0f) + 1) * 12500) :
    (((VAR_0 >> 0 & 0x0f) + 1) * -25000);
 const long VAR_4 = VAR_2 * 1000;
 return (VAR_4 + VAR_3 + 5000) / 10000;
}
