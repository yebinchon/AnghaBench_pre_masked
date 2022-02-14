
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_4__ {int wYear; int wMonth; int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

UINT64 FUNC_3(char *VAR_0)
{
 UINT VAR_1;
 SYSTEMTIME VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2, sizeof(VAR_2));

 VAR_2.wYear = (VAR_1 % 100000000) / 10000;
 VAR_2.wMonth = (VAR_1 % 10000) / 100;
 VAR_2.wDay = VAR_1 % 100;

 return FUNC_0(&VAR_2);
}
