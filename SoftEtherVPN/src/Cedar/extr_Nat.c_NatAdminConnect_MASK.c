
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int SOCK ;
typedef int RPC ;
typedef int PACK ;
typedef int CEDAR ;


 int * FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,int *,int) ;
 int FUNC_7 (int *,char*,int *,int) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (int *,void*,int *) ;
 int FUNC_10 (int *,int) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int VAR_6 ;

RPC *FUNC_13(CEDAR *VAR_7, char *VAR_8, UINT VAR_9, void *VAR_10, UINT *VAR_11)
{
 UCHAR VAR_12[VAR_5];
 UCHAR VAR_13[VAR_5];
 SOCK *VAR_14;
 RPC *VAR_15;
 PACK *VAR_16;
 UINT VAR_17;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == 0 || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  if (VAR_11 != ((void*)0))
  {
   *VAR_11 = VAR_2;
  }
  return ((void*)0);
 }


 VAR_14 = FUNC_0(VAR_8, VAR_9);
 if (VAR_14 == ((void*)0))
 {
  *VAR_11 = VAR_0;
  return ((void*)0);
 }

 if (FUNC_12(VAR_14, ((void*)0), ((void*)0)) == 0)
 {
  *VAR_11 = VAR_4;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 FUNC_10(VAR_14, 5000);

 VAR_16 = FUNC_3(VAR_14);
 if (VAR_16 == ((void*)0))
 {
  *VAR_11 = VAR_1;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 if (FUNC_7(VAR_16, "auth_random", VAR_13, VAR_5) == 0)
 {
  FUNC_1(VAR_16);
  *VAR_11 = VAR_4;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 FUNC_1(VAR_16);

 FUNC_9(VAR_12, VAR_10, VAR_13);

 VAR_16 = FUNC_5();
 FUNC_6(VAR_16, "secure_password", VAR_12, VAR_5);

 if (FUNC_4(VAR_14, VAR_16) == 0)
 {
  FUNC_1(VAR_16);
  *VAR_11 = VAR_1;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 FUNC_1(VAR_16);

 VAR_16 = FUNC_3(VAR_14);
 if (VAR_16 == ((void*)0))
 {
  *VAR_11 = VAR_1;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 VAR_17 = FUNC_2(VAR_16);

 FUNC_1(VAR_16);

 if (VAR_17 != VAR_3)
 {
  *VAR_11 = VAR_17;
  FUNC_8(VAR_14);
  return ((void*)0);
 }

 FUNC_10(VAR_14, VAR_6);

 VAR_15 = FUNC_11(VAR_14, ((void*)0));
 FUNC_8(VAR_14);

 return VAR_15;
}
