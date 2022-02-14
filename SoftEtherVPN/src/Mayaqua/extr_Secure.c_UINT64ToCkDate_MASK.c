
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
struct TYPE_3__ {int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef struct CK_DATE CK_DATE ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct CK_DATE*,int) ;

void FUNC_4(void *VAR_0, UINT64 VAR_1)
{
 SYSTEMTIME VAR_2;
 char VAR_3[32], VAR_4[32], VAR_5[32];
 struct CK_DATE *VAR_6 = (CK_DATE *)VAR_0;

 if (VAR_6 == ((void*)0))
 {
  return;
 }

 FUNC_2(&VAR_2, VAR_1);

 FUNC_1(VAR_3, sizeof(VAR_3), "%04u", VAR_2.wYear);
 FUNC_1(VAR_4, sizeof(VAR_4), "%04u", VAR_2.wMonth);
 FUNC_1(VAR_5, sizeof(VAR_5), "%04u", VAR_2.wDay);

 FUNC_3(VAR_6, sizeof(CK_DATE));

 FUNC_0(VAR_6->year, VAR_3, 4);
 FUNC_0(VAR_6->month, VAR_4, 2);
 FUNC_0(VAR_6->day, VAR_5, 2);
}
