
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * password; } ;
typedef TYPE_1__ CB_PARAM ;


 int FUNC_0 (char*,int,int *) ;

int FUNC_1(char *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 CB_PARAM *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 VAR_4 = (CB_PARAM *)VAR_3;
 if (VAR_4->password == ((void*)0))
 {
  return 0;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_4->password);
}
