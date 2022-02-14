
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int Size; int Buf; } ;
struct TYPE_16__ {TYPE_1__* ClientAuth; } ;
struct TYPE_15__ {scalar_t__ AuthType; int Username; int PlainPassword; int HashedPassword; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_3__ BUF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (int ,int) ;

bool FUNC_10(BUF *VAR_2)
{
 RPC_CLIENT_CREATE_ACCOUNT *VAR_3;
 BUF *VAR_4;
 bool VAR_5 = 0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->ClientAuth->AuthType == VAR_0)
 {
  FUNC_9(VAR_3->ClientAuth->HashedPassword, sizeof(VAR_3->ClientAuth->HashedPassword));
  FUNC_4(VAR_3->ClientAuth->Username, sizeof(VAR_3->ClientAuth->Username));
 }
 else if (VAR_3->ClientAuth->AuthType == VAR_1)
 {
  FUNC_4(VAR_3->ClientAuth->PlainPassword, sizeof(VAR_3->ClientAuth->PlainPassword));
  FUNC_4(VAR_3->ClientAuth->Username, sizeof(VAR_3->ClientAuth->Username));
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0))
 {
  VAR_5 = 1;

  FUNC_3(VAR_2);

  FUNC_8(VAR_2, VAR_4->Buf, VAR_4->Size);
  FUNC_7(VAR_2, 0, 0);

  FUNC_6(VAR_4);
 }

 FUNC_2(VAR_3);
 FUNC_5(VAR_3);

 return VAR_5;
}
