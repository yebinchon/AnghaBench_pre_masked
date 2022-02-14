
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, void *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 *VAR_5, *VAR_6, VAR_7;

        VAR_5 = VAR_1;
        VAR_6 = VAR_0;
        do {
                VAR_7 = (*VAR_5++ & VAR_2) | (*VAR_6 & ~VAR_2);
                *VAR_6++ = VAR_7;
                VAR_6 = (u32 *)((u8 *)VAR_6 + VAR_4);
                VAR_5 = (u32 *)((u8 *)VAR_5 + VAR_4);
        } while (--VAR_3);
}
