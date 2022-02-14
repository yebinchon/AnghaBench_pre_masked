
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long long FUNC_0(unsigned char *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 VAR_1 = (VAR_0[12] << 24) | (VAR_0[13] << 16) | (VAR_0[14] << 8) | VAR_0[15];
 VAR_2 = (VAR_0[16] << 24) | (VAR_0[17] << 16) | (VAR_0[18] << 8) | VAR_0[19];

 return ((unsigned long long)VAR_2) | (unsigned long long)VAR_1 << 32;
}
