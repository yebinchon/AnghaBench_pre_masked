
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int filename ;
struct TYPE_7__ {int Size; } ;
struct TYPE_6__ {int wYear; int wMonth; int wDay; int wHour; int wSecond; int wMinute; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,int,char*,int,int,int,int,int ,int ) ;

void FUNC_6()
{
 if (VAR_1->Size >= 1)
 {
  SYSTEMTIME VAR_3;
  char VAR_4[VAR_0];


  FUNC_4("@probe_log");

  FUNC_3(&VAR_3);

  FUNC_5(VAR_4, sizeof(VAR_4), "@probe_log/%04u%02u%02u_%02u%02u%02u.log",
   VAR_3.wYear, VAR_3.wMonth, VAR_3.wDay, VAR_3.wHour, VAR_3.wMinute, VAR_3.wSecond);

  FUNC_1(VAR_1, VAR_4);
 }

 FUNC_2(VAR_1);
 FUNC_0(VAR_2);
}
