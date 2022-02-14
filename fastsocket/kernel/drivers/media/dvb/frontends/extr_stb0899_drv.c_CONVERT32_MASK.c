
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0, char *VAR_1)
{
 *VAR_1++ = (VAR_0 >> 24) & 0xff;
 *VAR_1++ = (VAR_0 >> 16) & 0xff;
 *VAR_1++ = (VAR_0 >> 8) & 0xff;
 *VAR_1++ = (VAR_0 >> 0) & 0xff;
 *VAR_1 = '\0';
}
