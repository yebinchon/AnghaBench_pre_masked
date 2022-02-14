
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uword ;
typedef int user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(user_addr_t VAR_0, uint64_t VAR_1)
{

 if (FUNC_0(FUNC_2())) {
  return(FUNC_1((void *)&VAR_1, VAR_0, sizeof(VAR_1)) == 0 ? 0 : -1);
 } else {
  return(FUNC_3(VAR_0, (uint32_t)VAR_1));
 }
}
