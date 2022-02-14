
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

u64 FUNC_1(u64 VAR_3)
{
 u64 *VAR_4 = (u64 *) VAR_0;

 if (VAR_3 >= (VAR_1 >> 3))
  FUNC_0(VAR_2, "Invalid gpfn =%lx\n", VAR_3);

 return *(VAR_4 + VAR_3);
}
