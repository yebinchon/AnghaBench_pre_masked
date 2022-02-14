
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0, unsigned int VAR_1)
{
 u32 VAR_2 = 0, VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = (VAR_0 >> VAR_4) & 1;
  VAR_2 = (VAR_2 << 1) | VAR_3;
 }

 return VAR_2;
}
