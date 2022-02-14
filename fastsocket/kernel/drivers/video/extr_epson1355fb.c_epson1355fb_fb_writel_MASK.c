
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;


 int FUNC_0 (unsigned long,unsigned long*) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_0, unsigned long *VAR_1)
{
 u16 *VAR_2 = (u16 *) VAR_1;
 u16 VAR_3 = VAR_0 & 0xffff;
 u16 VAR_4 = VAR_0 >> 16;

 FUNC_0(VAR_3, VAR_2);
 FUNC_0(VAR_4, VAR_2 + 1);
}
