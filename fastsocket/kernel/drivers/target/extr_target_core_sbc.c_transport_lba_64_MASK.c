
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long long FUNC_0(unsigned char *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 VAR_1 = (VAR_0[2] << 24) | (VAR_0[3] << 16) | (VAR_0[4] << 8) | VAR_0[5];
 VAR_2 = (VAR_0[6] << 24) | (VAR_0[7] << 16) | (VAR_0[8] << 8) | VAR_0[9];

 return ((unsigned long long)VAR_2) | (unsigned long long)VAR_1 << 32;
}
