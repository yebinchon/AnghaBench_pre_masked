
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
struct TYPE_4__ {int ServerName; int Path; } ;
typedef TYPE_1__ LOG_FILE ;
typedef int LIST ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

bool FUNC_3(LIST *VAR_0, char *VAR_1, char *VAR_2)
{
 LOG_FILE VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(&VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_3.Path, sizeof(VAR_3.Path), VAR_1);
 FUNC_1(VAR_3.ServerName, sizeof(VAR_3.ServerName), VAR_2);

 if (FUNC_0(VAR_0, &VAR_3) == ((void*)0))
 {
  return 0;
 }

 return 1;
}
