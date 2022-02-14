
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int st ;
typedef int UINT64 ;
struct TYPE_4__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

UINT64 FUNC_2()
{
 SYSTEMTIME VAR_6;

 FUNC_1(&VAR_6, sizeof(VAR_6));

 VAR_6.wYear = VAR_5;
 VAR_6.wMonth = VAR_2;
 VAR_6.wDay = VAR_0;
 VAR_6.wHour = VAR_1;
 VAR_6.wMinute = VAR_3;
 VAR_6.wSecond = VAR_4;

 return FUNC_0(&VAR_6);
}
