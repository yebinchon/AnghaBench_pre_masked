
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zero ;
typedef int tmp ;
struct sockaddr {int dummy; } ;
typedef int WSAEVENT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_2__ {int OsType; } ;
typedef scalar_t__ SOCKET ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int ,int *,int,int *,int,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__,struct sockaddr*,int) ;

int FUNC_11(SOCKET VAR_10, struct sockaddr *VAR_11, int VAR_12, int VAR_13, bool *VAR_14)
{
 UINT64 VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 WSAEVENT VAR_18;
 UINT VAR_19 = 0;
 UINT VAR_20 = 0;
 UINT VAR_21 = 0;
 bool VAR_22 = 0;

 if (VAR_10 == VAR_3 || VAR_11 == ((void*)0))
 {
  return -1;
 }
 if (VAR_13 == 0)
 {
  VAR_13 = VAR_4;
 }

 VAR_22 = FUNC_3(FUNC_2()->OsType);


 VAR_18 = FUNC_1(((void*)0), VAR_0, VAR_0, ((void*)0));


 FUNC_6(VAR_10, VAR_18, VAR_1);

 VAR_15 = FUNC_5();

 while (1)
 {
  int VAR_23;

  VAR_23 = FUNC_10(VAR_10, VAR_11, VAR_12);

  if (VAR_23 == 0)
  {
   VAR_16 = 1;
   break;
  }
  else
  {
   int VAR_24 = FUNC_7();


   if (VAR_17 && ((VAR_24 == VAR_6) || (VAR_24 == VAR_9 && !VAR_22)))
   {

    VAR_16 = 0;
    break;
   }
   if (*VAR_14)
   {

    VAR_16 = 0;
    break;
   }
   if (VAR_24 == VAR_8 || (VAR_24 == VAR_7 && VAR_22))
   {
    VAR_16 = 1;
    break;
   }
   if (((VAR_15 + (UINT64)VAR_13) <= FUNC_5()) || (VAR_24 != VAR_9 && VAR_24 != VAR_6 && (VAR_22 || VAR_24 != VAR_7)))
   {

    break;
   }
   else
   {
    FUNC_4(10);

    if (FUNC_9(VAR_18, 100) == VAR_5)
    {
     VAR_17 = 1;
    }
   }
  }
 }


 FUNC_6(VAR_10, VAR_18, 0);


 FUNC_8(VAR_10, VAR_2, &VAR_19, sizeof(VAR_19), &VAR_20, sizeof(VAR_20), &VAR_21, ((void*)0), ((void*)0));


 FUNC_0(VAR_18);

 if (VAR_16)
 {
  return 0;
 }
 else
 {
  return -1;
 }
}
