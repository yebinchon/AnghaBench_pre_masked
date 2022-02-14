
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char FUNC_0(unsigned char *VAR_0, unsigned char VAR_1)
{
 if (VAR_1<128 || VAR_1==255) return VAR_1>='A' && VAR_1<='Z' ? VAR_1 + 0x20 : VAR_1;
 if (!VAR_0) return VAR_1;
 return VAR_0[VAR_1];
}
