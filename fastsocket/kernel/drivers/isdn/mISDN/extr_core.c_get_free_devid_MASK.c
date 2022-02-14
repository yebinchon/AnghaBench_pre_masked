
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_1(void)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++)
  if (!FUNC_0(VAR_3, (u_long *)&VAR_2))
   break;
 if (VAR_3 > VAR_1)
  return -VAR_0;
 return VAR_3;
}
