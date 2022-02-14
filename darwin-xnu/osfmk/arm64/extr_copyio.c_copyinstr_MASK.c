
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ user_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__ const,uintptr_t,scalar_t__) ;
 int FUNC_1 (int ,char const*,char*,scalar_t__,scalar_t__*) ;

int
FUNC_2(const user_addr_t VAR_2, char *VAR_3, vm_size_t VAR_4, vm_size_t *VAR_5)
{
 int VAR_6;

 *VAR_5 = 0;
 if (VAR_4 == 0)
  return VAR_1;

 VAR_6 = FUNC_0(VAR_2, (uintptr_t)VAR_3, VAR_4);

 if (VAR_6) return VAR_6;

 return FUNC_1(VAR_0, (const char *)(uintptr_t)VAR_2, VAR_3, VAR_4, VAR_5);
}
