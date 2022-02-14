
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline void FUNC_0(u8 *VAR_4, u8 VAR_5,
      u16 *VAR_6, u8 *VAR_7)
{
 if (VAR_5) {

  *VAR_6 = (VAR_4[VAR_0] << 8) +
   VAR_4[VAR_0 + 1];
  *VAR_7 = VAR_4[VAR_2] &&
    VAR_1;
 } else {

  *VAR_6 = VAR_4[VAR_3];
 }
}
