
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ Type; } ;
typedef TYPE_1__ UDPPACKET ;
struct TYPE_17__ {int ExchangeType; } ;
typedef int IKE_SERVER ;
typedef TYPE_2__ IKE_PACKET ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_2__*) ;

void FUNC_7(IKE_SERVER *VAR_2, UDPPACKET *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_3->Type == VAR_1)
 {

  IKE_PACKET *VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0))
  {
   return;
  }



  switch (VAR_4->ExchangeType)
  {
  case 129:
   FUNC_5(VAR_2, VAR_3, VAR_4);
   break;

  case 131:
   FUNC_3(VAR_2, VAR_3, VAR_4);
   break;

  case 128:
   FUNC_6(VAR_2, VAR_3, VAR_4);
   break;

  case 130:
   FUNC_4(VAR_2, VAR_3, VAR_4);
   break;
  }

  FUNC_0(VAR_4);
 }
 else if (VAR_3->Type == VAR_0)
 {

  FUNC_2(VAR_2, VAR_3);
 }
}
