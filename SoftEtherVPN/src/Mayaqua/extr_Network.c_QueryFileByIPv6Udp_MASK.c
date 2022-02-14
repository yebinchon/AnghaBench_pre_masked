
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef float UCHAR ;
typedef int SOCK_EVENT ;
typedef int SOCK ;
typedef int LIST ;
typedef int IP ;
typedef int INTERRUPT_MANAGER ;
typedef int BUF ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (float*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 float* FUNC_9 (scalar_t__) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int *,int *,scalar_t__*,float*,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *,int *,scalar_t__,float*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,float*,scalar_t__) ;

BUF *FUNC_23(LIST *VAR_4, UINT VAR_5, bool *VAR_6)
{
 bool VAR_7 = 0;
 UINT64 VAR_8, VAR_9;
 UINT64 VAR_10;
 SOCK *VAR_11;
 INTERRUPT_MANAGER *VAR_12;
 BUF *VAR_13 = ((void*)0);
 SOCK_EVENT *VAR_14;
 UCHAR *VAR_15;
 UINT VAR_16 = 65535;

 if (VAR_6 == ((void*)0))
 {
  VAR_6 = &VAR_7;
 }
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_11 = FUNC_13(0, ((void*)0));
 if (VAR_11 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_15 = FUNC_9(VAR_16);

 VAR_8 = FUNC_20();
 VAR_9 = VAR_8 + (UINT64)VAR_5;
 VAR_10 = 0;

 VAR_12 = FUNC_11();

 FUNC_0(VAR_12, VAR_9);

 VAR_14 = FUNC_12();
 FUNC_6(VAR_11, VAR_14);

 while (1)
 {
  UINT64 VAR_17 = FUNC_20();

  if (VAR_17 >= VAR_9)
  {

   break;
  }

  if (*VAR_6)
  {

   break;
  }


  while (1)
  {
   IP VAR_18;
   UINT VAR_19;
   UINT VAR_20;

   VAR_20 = FUNC_14(VAR_11, &VAR_18, &VAR_19, VAR_15, VAR_16);

   if (VAR_20 == VAR_0 || VAR_20 == 0)
   {
    break;
   }

   if (VAR_19 == VAR_1)
   {
    if (VAR_20 >= 40)
    {
     if (FUNC_1(VAR_15, VAR_2, FUNC_19(VAR_2)) == 0)
     {

      VAR_13 = FUNC_10();
      FUNC_22(VAR_13, VAR_15, VAR_20);
      FUNC_17(VAR_13, 0, 0);
      break;
     }
    }
   }
  }

  if (VAR_13 != ((void*)0))
  {

   break;
  }

  if (VAR_10 == 0 || (VAR_17 >= VAR_10))
  {

   UINT VAR_21;
   for (VAR_21 = 0;VAR_21 < FUNC_8(VAR_4);VAR_21++)
   {
    IP *VAR_22 = FUNC_7(VAR_4, VAR_21);
    UCHAR VAR_23 = 'F';

    FUNC_18(VAR_11, VAR_22, VAR_1, &VAR_23, 1);
   }

   VAR_10 = VAR_17 + (UINT64)VAR_3;
   FUNC_0(VAR_12, VAR_10);
  }

  FUNC_21(VAR_14, FUNC_5(VAR_12));
 }

 FUNC_4(VAR_12);

 FUNC_2(VAR_11);
 FUNC_15(VAR_11);

 FUNC_16(VAR_14);

 FUNC_3(VAR_15);

 return VAR_13;
}
