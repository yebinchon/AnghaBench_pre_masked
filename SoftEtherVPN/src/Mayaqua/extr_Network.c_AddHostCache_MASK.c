
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ Expires; int HostName; int IpAddress; } ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_1__ HOSTCACHE ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int ,int,char*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_15 (int) ;

void FUNC_16(IP *VAR_2, char *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }
 if (FUNC_4() == 0)
 {
  return;
 }

 FUNC_7(VAR_1);
 {
  HOSTCACHE VAR_4, *VAR_5;
  UINT VAR_6;
  LIST *VAR_7;

  FUNC_14(&VAR_4, sizeof(VAR_4));
  FUNC_1(&VAR_4.IpAddress, VAR_2, sizeof(IP));

  VAR_5 = FUNC_10(VAR_1, &VAR_4);
  if (VAR_5 == ((void*)0))
  {
   VAR_5 = FUNC_15(sizeof(HOSTCACHE));
   FUNC_1(&VAR_5->IpAddress, VAR_2, sizeof(IP));
   FUNC_0(VAR_1, VAR_5);
  }

  FUNC_11(VAR_5->HostName, sizeof(VAR_5->HostName), VAR_3);
  VAR_5->Expires = FUNC_12() + (UINT64)VAR_0;

  VAR_7 = FUNC_8(((void*)0));

  for (VAR_6 = 0;VAR_6 < FUNC_6(VAR_1);VAR_6++)
  {
   HOSTCACHE *VAR_8 = FUNC_5(VAR_1, VAR_6);

   if (VAR_8->Expires <= FUNC_12())
   {
    FUNC_0(VAR_7, VAR_8);
   }
  }

  for (VAR_6 = 0;VAR_6 < FUNC_6(VAR_7);VAR_6++)
  {
   HOSTCACHE *VAR_9 = FUNC_5(VAR_7, VAR_6);

   if (FUNC_2(VAR_1, VAR_9))
   {
    FUNC_3(VAR_9);
   }
  }

  FUNC_9(VAR_7);
 }
 FUNC_13(VAR_1);
}
