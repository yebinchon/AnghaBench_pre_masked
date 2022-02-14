
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* realloc ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void *FUNC_1(void *VAR_2, size_t VAR_3)
{
  if(!VAR_1 && VAR_0) {
    FUNC_0("seen custom_realloc()\n");
    VAR_1 = 1;
  }
  return (realloc)(VAR_2, VAR_3);
}
