
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long const u8 ;


 long const* VAR_0 ;
 long const* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static unsigned FUNC_0(int VAR_4, u8 VAR_5)
{
 const long VAR_6 = VAR_2[VAR_4] * 1000;
 const long VAR_7 = VAR_3[VAR_4] * 1000;

 const long VAR_8 = (VAR_6 - VAR_7) /
  (VAR_0[VAR_4] - VAR_1[VAR_4]);
 const long VAR_9 = VAR_7 - VAR_8 * VAR_1[VAR_4];

 return (VAR_8 * VAR_5 + VAR_9 + 500) / 1000;
}
