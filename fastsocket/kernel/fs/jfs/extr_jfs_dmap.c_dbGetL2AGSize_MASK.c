
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(s64 VAR_4)
{
 s64 VAR_5;
 s64 VAR_6;
 int VAR_7;

 if (VAR_4 < VAR_0 * VAR_3)
  return (VAR_1);


 VAR_6 = ((u64) 1 << (64 - 1));
 for (VAR_7 = 64; VAR_7 >= 0; VAR_7--, VAR_6 >>= 1) {
  if (VAR_6 & VAR_4)
   break;
 }

 VAR_5 = (s64) 1 << VAR_7;
 if (VAR_5 < VAR_4)
  VAR_7 += 1;


 return (VAR_7 - VAR_2);
}
