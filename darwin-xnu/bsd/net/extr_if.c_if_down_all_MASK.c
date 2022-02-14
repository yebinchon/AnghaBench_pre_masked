
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet**) ;
 scalar_t__ FUNC_3 (int ,struct ifnet***,size_t*) ;

int
FUNC_4(void)
{
 struct ifnet **VAR_1;
 u_int32_t VAR_2;
 u_int32_t VAR_3;

 if (FUNC_3(VAR_0, &VAR_1, &VAR_2) == 0) {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   FUNC_1(VAR_1[VAR_3]);
   FUNC_0(VAR_1[VAR_3]);
  }
  FUNC_2(VAR_1);
 }

 return (0);
}
