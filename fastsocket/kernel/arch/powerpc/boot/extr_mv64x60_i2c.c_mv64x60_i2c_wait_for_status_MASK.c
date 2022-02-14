
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3=0; VAR_3<1000; VAR_3++) {
  FUNC_1(10);
  VAR_4 = FUNC_0((u32 *)(VAR_1 + VAR_0))
   & 0xff;
  if (VAR_4 == VAR_2)
   return VAR_4;
 }
 return -VAR_4;
}
