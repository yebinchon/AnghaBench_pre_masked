
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_0, int VAR_1)
{
 if (VAR_1 <= 0)
  return 0;
 if (VAR_1 >= 100)
  return VAR_0;

 VAR_0 *= VAR_1;
 FUNC_0(VAR_0, 100);
 return VAR_0;
}
