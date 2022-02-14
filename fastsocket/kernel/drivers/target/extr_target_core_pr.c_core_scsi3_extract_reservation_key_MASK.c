
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long long FUNC_0(unsigned char *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 VAR_1 = (VAR_0[0] << 24) | (VAR_0[1] << 16) | (VAR_0[2] << 8) | VAR_0[3];
 VAR_2 = (VAR_0[4] << 24) | (VAR_0[5] << 16) | (VAR_0[6] << 8) | VAR_0[7];

 return ((unsigned long long)VAR_2) | (unsigned long long)VAR_1 << 32;
}
