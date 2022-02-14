
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int name ;
struct TYPE_7__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
struct TYPE_6__ {int Lock; int io; int FileName; } ;
typedef TYPE_1__ TINY_LOG ;
typedef TYPE_2__ SYSTEMTIME ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int) ;

TINY_LOG *FUNC_7()
{
 char VAR_3[VAR_0];
 SYSTEMTIME VAR_4;
 TINY_LOG *VAR_5;

 FUNC_2(&VAR_4);

 FUNC_3(VAR_1);

 FUNC_1(VAR_3, sizeof(VAR_3), VAR_2,
  VAR_4.wYear, VAR_4.wMonth, VAR_4.wDay, VAR_4.wHour, VAR_4.wMinute, VAR_4.wSecond);

 VAR_5 = FUNC_6(sizeof(TINY_LOG));

 FUNC_5(VAR_5->FileName, sizeof(VAR_5->FileName), VAR_3);
 VAR_5->io = FUNC_0(VAR_3);
 VAR_5->Lock = FUNC_4();

 return VAR_5;
}
