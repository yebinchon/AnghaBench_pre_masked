
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* malloc ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void *FUNC_1(size_t VAR_2)
{
  if(!VAR_1 && VAR_0) {
    FUNC_0("seen custom_malloc()\n");
    VAR_1 = 1;
  }
  return (malloc)(VAR_2);
}
