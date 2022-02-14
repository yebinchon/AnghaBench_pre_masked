
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hostname ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {char* HostName; int IPv6; int Ok; int Ip; scalar_t__ Timeout; int Ref; } ;
typedef int THREAD ;
typedef int IP ;
typedef TYPE_1__ GETIP_THREAD_PARAM ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *,char*,int,int ,int*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 () ;
 int * FUNC_13 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char*,char*,int ,int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*,int,char*) ;
 scalar_t__ FUNC_20 (int *,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 (int *,scalar_t__) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,int) ;
 TYPE_1__* FUNC_25 (int) ;
 int VAR_8 ;

bool FUNC_26(IP *VAR_9, char *VAR_10, UINT VAR_11, bool VAR_12, bool *VAR_13, bool VAR_14)
{
 GETIP_THREAD_PARAM *VAR_15;
 THREAD *VAR_16;
 bool VAR_17 = 0;
 UINT64 VAR_18 = 0;
 UINT64 VAR_19 = 0;
 UINT64 VAR_20 = 0;
 UINT64 VAR_21;
 UINT VAR_22;
 bool VAR_23 = 0;
 char VAR_24[260];
 UINT VAR_25;
 bool VAR_26;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return 0;
 }
 if (VAR_11 == 0)
 {
  VAR_11 = VAR_7;
 }

 FUNC_24(VAR_24, sizeof(VAR_24));
 FUNC_19(VAR_24, sizeof(VAR_24), VAR_10);

 VAR_25 = FUNC_17(VAR_24, "/", 0, 1);
 if (VAR_25 != VAR_6)
 {
  VAR_24[VAR_25] = 0;
 }

 if (VAR_12 == 0)
 {
  IP VAR_27;

  if (FUNC_20(&VAR_27, VAR_24) && FUNC_10(&VAR_27) == 0)
  {
   if (FUNC_7(&VAR_27))
   {

    FUNC_0(VAR_9, &VAR_27, sizeof(IP));
    return 1;
   }
   else
   {

    return 0;
   }
  }
 }
 else
 {
  IP VAR_28;

  if (FUNC_20(&VAR_28, VAR_24) && FUNC_10(&VAR_28) == 0)
  {
   if (FUNC_8(&VAR_28))
   {

    FUNC_0(VAR_9, &VAR_28, sizeof(IP));
    return 1;
   }
   else
   {

    return 0;
   }
  }
 }

 if (VAR_14 == 0)
 {
  if (VAR_12 == 0)
  {
   if (FUNC_9())
   {
    VAR_23 = 1;
   }
  }
 }



 VAR_18 = FUNC_21();
 VAR_19 = VAR_18 + (UINT64)VAR_11;

 VAR_22 = 0;

 VAR_26 = 0;

 while (1)
 {
  UINT64 VAR_29 = FUNC_21();
  UINT64 VAR_30;
  UINT VAR_31;

  if (FUNC_4() > FUNC_3())
  {

   break;
  }

  if (VAR_29 >= VAR_19)
  {

   VAR_26 = 1;
   break;
  }

  if (VAR_13 != ((void*)0) && (*VAR_13))
  {

   VAR_26 = 1;
   break;
  }

  VAR_30 = VAR_19 - VAR_29;
  VAR_31 = FUNC_11((UINT)VAR_30, 100);

  FUNC_18(VAR_31);
  VAR_22++;
 }

 VAR_21 = FUNC_21();
 VAR_20 = VAR_21 - VAR_18;

 if (VAR_22 == 0)
 {
  VAR_20 = 0;
 }

 if ((UINT)VAR_20 >= VAR_11)
 {
  VAR_26 = 1;
 }

 if (VAR_26)
 {
  IP VAR_32;


  if (FUNC_14(&VAR_32, VAR_24))
  {
   VAR_17 = 1;

   FUNC_0(VAR_9, &VAR_32, sizeof(IP));
  }

  FUNC_1("GetIP4Ex6Ex2: Worker thread quota exceeded: max=%u current=%u\n",
   FUNC_4(), FUNC_3());

  return VAR_17;
 }


 FUNC_6(VAR_8);

 if (VAR_20 != 0)
 {
  FUNC_1("GetIP4Ex6Ex2: Waited for %u msecs to create a worker thread.\n",
   VAR_20);
 }

 VAR_11 -= (UINT)VAR_20;

 VAR_15 = FUNC_25(sizeof(GETIP_THREAD_PARAM));
 VAR_15->Ref = FUNC_12();
 FUNC_19(VAR_15->HostName, sizeof(VAR_15->HostName), VAR_24);
 VAR_15->IPv6 = VAR_12;
 VAR_15->Timeout = VAR_11;
 VAR_15->Ok = 0;

 VAR_16 = FUNC_13(VAR_5, VAR_15);
 FUNC_23(VAR_16);

 if (VAR_13 == ((void*)0))
 {
  FUNC_22(VAR_16, VAR_11);
 }
 else
 {
  VAR_18 = FUNC_21();
  VAR_19 = VAR_18 + (UINT64)VAR_11;

  while (1)
  {
   UINT64 VAR_33 = FUNC_21();
   UINT64 VAR_34;
   UINT VAR_35;

   if (*VAR_13)
   {
    break;
   }

   if (VAR_33 >= VAR_19)
   {
    break;
   }

   VAR_34 = VAR_19 - VAR_33;
   VAR_35 = FUNC_11((UINT)VAR_34, 100);

   if (FUNC_22(VAR_16, VAR_35))
   {
    break;
   }
  }
 }

 FUNC_16(VAR_16);

 if (VAR_15->Ok)
 {
  VAR_17 = 1;
  FUNC_0(VAR_9, &VAR_15->Ip, sizeof(IP));
 }
 else
 {
  IP VAR_36;
  if (FUNC_14(&VAR_36, VAR_24))
  {
   VAR_17 = 1;

   FUNC_0(VAR_9, &VAR_36, sizeof(IP));
  }
 }


 FUNC_15(VAR_15);

 return VAR_17;
}
