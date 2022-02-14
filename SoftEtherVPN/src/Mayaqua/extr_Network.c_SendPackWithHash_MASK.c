
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int Size; int * Buf; } ;
struct TYPE_8__ {scalar_t__ Type; int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int *,int) ;

bool FUNC_6(SOCK *VAR_2, PACK *VAR_3)
{
 BUF *VAR_4;
 UINT VAR_5;
 UCHAR VAR_6[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2->Type != VAR_1)
 {
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_4->Size);

 FUNC_3(VAR_2, &VAR_5, sizeof(UINT));
 FUNC_3(VAR_2, VAR_4->Buf, VAR_4->Size);
 FUNC_5(VAR_6, VAR_4->Buf, VAR_4->Size);
 FUNC_3(VAR_2, VAR_6, sizeof(VAR_6));

 FUNC_1(VAR_4);

 return FUNC_4(VAR_2, VAR_2->SecureMode);
}
