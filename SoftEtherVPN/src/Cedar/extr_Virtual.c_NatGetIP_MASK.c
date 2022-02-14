
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* ref; int Ip; scalar_t__ Ok; int Hostname; } ;
struct TYPE_8__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int THREAD ;
typedef TYPE_2__ NAT_DNS_QUERY ;
typedef int IP ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_5 () ;
 int * FUNC_6 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int *,int ) ;
 TYPE_2__* FUNC_12 (int) ;

bool FUNC_13(IP *VAR_2, char *VAR_3)
{
 TOKEN_LIST *VAR_4;
 bool VAR_5 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_7(VAR_3, ".");
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }
 if (VAR_4->NumTokens == 0)
 {
  FUNC_3(VAR_4);
  return 0;
 }

 if (VAR_4->NumTokens == 1)
 {
  VAR_5 = FUNC_4(VAR_2, VAR_3);
 }
 else
 {
  char *VAR_6 = VAR_4->Token[0];
  NAT_DNS_QUERY *VAR_7, *VAR_8;
  THREAD *VAR_9, *VAR_10;

  VAR_7 = FUNC_12(sizeof(NAT_DNS_QUERY));
  VAR_8 = FUNC_12(sizeof(NAT_DNS_QUERY));
  VAR_7->ref = FUNC_5();
  VAR_8->ref = FUNC_5();
  FUNC_0(VAR_7->ref);
  FUNC_0(VAR_8->ref);
  FUNC_10(VAR_7->Hostname, sizeof(VAR_7->Hostname), VAR_3);
  FUNC_10(VAR_8->Hostname, sizeof(VAR_8->Hostname), VAR_6);

  VAR_9 = FUNC_6(VAR_1, VAR_7);
  VAR_10 = FUNC_6(VAR_1, VAR_8);

  FUNC_11(VAR_9, VAR_0);

  if (VAR_7->Ok)
  {
   VAR_5 = 1;
   FUNC_1(VAR_2, &VAR_7->Ip, sizeof(IP));
  }
  else
  {
   FUNC_11(VAR_10, VAR_0);
   if (VAR_7->Ok)
   {
    VAR_5 = 1;
    FUNC_1(VAR_2, &VAR_7->Ip, sizeof(IP));
   }
   else if (VAR_8->Ok)
   {
    VAR_5 = 1;
    FUNC_1(VAR_2, &VAR_8->Ip, sizeof(IP));
   }
  }

  FUNC_9(VAR_9);
  FUNC_9(VAR_10);

  if (FUNC_8(VAR_7->ref) == 0)
  {
   FUNC_2(VAR_7);
  }
  if (FUNC_8(VAR_8->ref) == 0)
  {
   FUNC_2(VAR_8);
  }
 }

 FUNC_3(VAR_4);

 return VAR_5;
}
