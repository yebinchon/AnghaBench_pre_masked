
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {TYPE_1__* Server; } ;
struct TYPE_4__ {int * DDnsClient; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int INTERNET_SETTING ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;

UINT FUNC_2(ADMIN *VAR_4, INTERNET_SETTING *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;

 if (VAR_6->DDnsClient == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_5, sizeof(INTERNET_SETTING));

 FUNC_0(VAR_6->DDnsClient, VAR_5);

 return VAR_8;
}
