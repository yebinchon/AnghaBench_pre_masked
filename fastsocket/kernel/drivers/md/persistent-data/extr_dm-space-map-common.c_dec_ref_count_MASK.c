
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 if (!VAR_2) {
  FUNC_0("unable to decrement a reference count below 0");
  return -VAR_0;
 }

 *VAR_3 = VAR_2 - 1;
 return 0;
}
