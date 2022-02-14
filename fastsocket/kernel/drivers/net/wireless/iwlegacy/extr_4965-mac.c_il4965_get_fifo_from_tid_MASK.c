
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 size_t* VAR_5 ;

__attribute__((used)) static inline int
FUNC_2(u16 VAR_6)
{
 const u8 VAR_7[] = {
  VAR_4,
  VAR_3,
  VAR_1,
  VAR_2,
 };

 if (FUNC_1(VAR_6 < FUNC_0(VAR_5)))
  return VAR_7[VAR_5[VAR_6]];


 return -VAR_0;
}
