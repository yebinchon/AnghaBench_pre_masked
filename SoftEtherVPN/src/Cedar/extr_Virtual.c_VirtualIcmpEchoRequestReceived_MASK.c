
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ IcmpApiOk; scalar_t__ IcmpRawSocketOk; TYPE_1__* HubOption; } ;
typedef TYPE_2__ VH ;
typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int SeqNo; int Identifier; } ;
struct TYPE_9__ {scalar_t__ DisableUserModeSecureNAT; } ;
typedef TYPE_3__ ICMP_ECHO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int,int,void*,int,int ,void*,int,int *,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int,void*,int,int ,void*,int,int *,int) ;
 int FUNC_4 (TYPE_2__*,int,int,int ,int ,void*,int) ;

void FUNC_5(VH *VAR_0, UINT VAR_1, UINT VAR_2, void *VAR_3, UINT VAR_4, UCHAR VAR_5, void *VAR_6, UINT VAR_7, UCHAR *VAR_8, UINT VAR_9, UINT VAR_10)
{
 ICMP_ECHO *VAR_11;
 UINT VAR_12;
 void *VAR_13;
 USHORT VAR_14, VAR_15;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }



 if (FUNC_2(VAR_0))
 {

  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_10);
  return;
 }

 if (VAR_0->HubOption != ((void*)0) && VAR_0->HubOption->DisableUserModeSecureNAT)
 {

  return;
 }

 if (VAR_0->IcmpRawSocketOk || VAR_0->IcmpApiOk)
 {

  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9);
  return;
 }



 VAR_11 = (ICMP_ECHO *)VAR_3;


 if (VAR_4 < sizeof(ICMP_ECHO))
 {

  return;
 }

 VAR_14 = FUNC_0(VAR_11->Identifier);
 VAR_15 = FUNC_0(VAR_11->SeqNo);


 VAR_12 = VAR_4 - sizeof(ICMP_ECHO);


 VAR_13 = ((UCHAR *)VAR_3) + sizeof(ICMP_ECHO);


 FUNC_4(VAR_0, VAR_2, VAR_1, VAR_14, VAR_15, VAR_13, VAR_12);
}
