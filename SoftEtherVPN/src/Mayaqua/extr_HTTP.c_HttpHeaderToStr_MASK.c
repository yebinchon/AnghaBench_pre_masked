
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int Size; int Buf; } ;
struct TYPE_9__ {int ValueList; int Version; int Target; int Method; } ;
struct TYPE_8__ {int Data; int Name; } ;
typedef TYPE_1__ HTTP_VALUE ;
typedef TYPE_2__ HTTP_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,int ,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (int) ;
 TYPE_3__* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,char*,int) ;

char *FUNC_10(HTTP_HEADER *VAR_1)
{
 BUF *VAR_2;
 char *VAR_3;
 UINT VAR_4;
 char *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_6(VAR_0);
 VAR_2 = FUNC_7();


 FUNC_1(VAR_3, VAR_0,
  "%s %s %s\r\n", VAR_1->Method, VAR_1->Target, VAR_1->Version);
 FUNC_9(VAR_2, VAR_3, FUNC_8(VAR_3));


 for (VAR_4 = 0;VAR_4 < FUNC_5(VAR_1->ValueList);VAR_4++)
 {
  HTTP_VALUE *VAR_6 = (HTTP_VALUE *)FUNC_4(VAR_1->ValueList, VAR_4);
  FUNC_1(VAR_3, VAR_0,
   "%s: %s\r\n", VAR_6->Name, VAR_6->Data);
  FUNC_9(VAR_2, VAR_3, FUNC_8(VAR_3));
 }


 FUNC_9(VAR_2, "\r\n", 2);
 VAR_5 = FUNC_6(VAR_2->Size + 1);
 FUNC_0(VAR_5, VAR_2->Buf, VAR_2->Size);
 VAR_5[VAR_2->Size] = 0;

 FUNC_3(VAR_2);
 FUNC_2(VAR_3);

 return VAR_5;
}
