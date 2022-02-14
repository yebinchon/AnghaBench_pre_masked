
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u64 VAR_3, int VAR_4)
{
 u64 VAR_5 = (VAR_4 ? VAR_2 :
          VAR_0);

 VAR_3 &= ~VAR_1;


 if (VAR_3 & ~VAR_5)
  return 0;


 if (VAR_3 == 0)
  return !VAR_4;


 return (VAR_3 & (VAR_3 - 1)) == 0;
}
