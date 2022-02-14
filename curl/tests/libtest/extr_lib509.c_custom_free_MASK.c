
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int free ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(void *VAR_2)
{
  if(!VAR_0 && VAR_1) {
    FUNC_0("seen custom_free()\n");
    VAR_0 = 1;
  }
  (free)(VAR_2);
}
