
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* calloc ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

void *FUNC_1(size_t VAR_1, size_t VAR_2)
{
  if(!VAR_0) {
    FUNC_0("seen custom_calloc()\n");
    VAR_0 = 1;
  }
  return (calloc)(VAR_1, VAR_2);
}
