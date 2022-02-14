
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int user_addr_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,uintptr_t,int) ;
 int FUNC_1 (int ,char const*,char*,int,int *) ;

int
FUNC_2(const user_addr_t VAR_2, uint64_t *VAR_3, vm_size_t VAR_4)
{
 int VAR_5;


 if ((VAR_4 != 4) && (VAR_4 != 8))
  return VAR_1;


 if (VAR_2 & (VAR_4 - 1))
  return VAR_1;

 VAR_5 = FUNC_0(VAR_2, (uintptr_t)VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, (const char *)VAR_2, (char *)(uintptr_t)VAR_3, VAR_4, ((void*)0));
}
