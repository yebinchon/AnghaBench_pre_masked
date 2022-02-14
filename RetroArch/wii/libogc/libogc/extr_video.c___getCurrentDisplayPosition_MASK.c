
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(u32 *VAR_1,u32 *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5;

 VAR_4 = (VAR_0[22]&0x7ff);
 do {
  VAR_5 = VAR_4;
  VAR_3 = (VAR_0[23]&0x7ff);
  VAR_4 = (VAR_0[22]&0x7ff);
 } while(VAR_5!=VAR_4);
 *VAR_1 = VAR_3;
 *VAR_2 = VAR_4;
}
