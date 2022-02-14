
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int year ;
struct CK_DATE {int day; int month; int year; } ;
typedef int month ;
typedef int day ;
typedef int UINT64 ;
struct TYPE_3__ {void* wDay; void* wMonth; void* wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

UINT64 FUNC_4(struct CK_DATE *VAR_0)
{
 SYSTEMTIME VAR_1;
 char VAR_2[32], VAR_3[32], VAR_4[32];

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_2, sizeof(VAR_2));
 FUNC_3(VAR_3, sizeof(VAR_3));
 FUNC_3(VAR_4, sizeof(VAR_4));

 FUNC_0(VAR_2, VAR_0->year, 4);
 FUNC_0(VAR_3, VAR_0->month, 2);
 FUNC_0(VAR_4, VAR_0->day, 2);

 VAR_1.wYear = FUNC_2(VAR_2);
 VAR_1.wMonth = FUNC_2(VAR_3);
 VAR_1.wDay = FUNC_2(VAR_4);

 return FUNC_1(&VAR_1);
}
