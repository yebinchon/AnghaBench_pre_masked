
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {TYPE_2__* v; TYPE_1__* NatTableForSend; } ;
struct TYPE_12__ {scalar_t__ Status; scalar_t__ LastCommTime; scalar_t__ Protocol; } ;
struct TYPE_11__ {scalar_t__ Now; scalar_t__ NatUdpTimeout; scalar_t__ NatTcpTimeout; } ;
struct TYPE_10__ {int * AllList; } ;
typedef TYPE_3__ NATIVE_NAT_ENTRY ;
typedef TYPE_4__ NATIVE_NAT ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(NATIVE_NAT *VAR_4)
{
 UINT VAR_5;
 LIST *VAR_6;
 UINT64 VAR_7;

 if (VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_6 = ((void*)0);
 VAR_7 = VAR_4->v->Now;

 for (VAR_5 = 0;VAR_5 < FUNC_2(VAR_4->NatTableForSend->AllList);VAR_5++)
 {
  NATIVE_NAT_ENTRY *VAR_8 = FUNC_1(VAR_4->NatTableForSend->AllList, VAR_5);
  UINT64 VAR_9;

  if (VAR_8->Status == VAR_1 || VAR_8->Status == VAR_2)
  {
   VAR_9 = VAR_8->LastCommTime + (UINT64)(VAR_8->Protocol == VAR_0 ? VAR_4->v->NatTcpTimeout : VAR_4->v->NatUdpTimeout);
  }
  else
  {
   VAR_9 = VAR_8->LastCommTime + (UINT64)VAR_3;
  }

  if (VAR_9 < VAR_7)
  {

   if (VAR_6 == ((void*)0))
   {
    VAR_6 = FUNC_3(((void*)0));
   }

   FUNC_0(VAR_6, VAR_8);
  }
 }

 if (VAR_6 != ((void*)0))
 {
  for (VAR_5 = 0;VAR_5 < FUNC_2(VAR_6);VAR_5++)
  {
   NATIVE_NAT_ENTRY *VAR_10 = FUNC_1(VAR_6, VAR_5);

   FUNC_4(VAR_4, VAR_10);
  }

  FUNC_5(VAR_6);
 }
}
