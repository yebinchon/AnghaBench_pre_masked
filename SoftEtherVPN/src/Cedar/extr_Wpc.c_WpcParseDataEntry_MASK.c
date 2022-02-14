
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int size_str ;
struct TYPE_8__ {scalar_t__ Size; int EntryName; int * Data; } ;
typedef TYPE_1__ WPC_ENTRY ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_9__ {scalar_t__ Size; scalar_t__ Current; scalar_t__ Buf; } ;
typedef int LIST ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int) ;
 TYPE_1__* FUNC_7 (int) ;

LIST *FUNC_8(BUF *VAR_1)
{
 char VAR_2[VAR_0];
 char VAR_3[11];
 LIST *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(VAR_1, 0, 0);

 VAR_4 = FUNC_2(((void*)0));

 while (1)
 {
  UINT VAR_5;
  WPC_ENTRY *VAR_6;

  if (FUNC_3(VAR_1, VAR_2, VAR_0) != VAR_0)
  {
   break;
  }

  FUNC_6(VAR_3, sizeof(VAR_3));
  if (FUNC_3(VAR_1, VAR_3, 10) != 10)
  {
   break;
  }

  VAR_5 = FUNC_5(VAR_3);
  if ((VAR_1->Size - VAR_1->Current) < VAR_5)
  {
   break;
  }

  VAR_6 = FUNC_7(sizeof(WPC_ENTRY));
  VAR_6->Data = (UCHAR *)VAR_1->Buf + VAR_1->Current;
  FUNC_1(VAR_6->EntryName, VAR_2, VAR_0);
  VAR_6->Size = VAR_5;

  FUNC_4(VAR_1, VAR_5, 1);

  FUNC_0(VAR_4, VAR_6);
 }

 return VAR_4;
}
