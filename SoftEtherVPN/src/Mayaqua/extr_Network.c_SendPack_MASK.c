
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int Size; int * Buf; } ;
struct TYPE_8__ {scalar_t__ Type; int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

bool FUNC_5(SOCK *VAR_1, PACK *VAR_2)
{
 BUF *VAR_3;
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_1->Type != VAR_0)
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_3->Size);

 FUNC_3(VAR_1, &VAR_4, sizeof(UINT));
 FUNC_3(VAR_1, VAR_3->Buf, VAR_3->Size);
 FUNC_1(VAR_3);

 return FUNC_4(VAR_1, VAR_1->SecureMode);
}
