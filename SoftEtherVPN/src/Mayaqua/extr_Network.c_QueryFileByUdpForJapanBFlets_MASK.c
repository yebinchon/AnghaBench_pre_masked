
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;
typedef char IP ;
typedef int BUF ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *,scalar_t__,int*) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 int VAR_1 ;

BUF *FUNC_17(UINT VAR_2, bool *VAR_3)
{
 bool VAR_4 = 0;
 BUF *VAR_5 = ((void*)0);
 BUF *VAR_6 = ((void*)0);
 LIST *VAR_7 = ((void*)0);
 UINT VAR_8;

 if (VAR_3 == ((void*)0))
 {
  VAR_3 = &VAR_4;
 }
 if (VAR_2 == 0)
 {
  VAR_2 = VAR_0;
 }

 VAR_5 = FUNC_12(VAR_1);
 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_10(((void*)0));

 while (1)
 {
  char *VAR_9 = FUNC_1(VAR_5);
  if (VAR_9 == ((void*)0))
  {
   break;
  }

  FUNC_16(VAR_9);

  if (FUNC_5(VAR_9) == 0 && FUNC_14(VAR_9, "#") == 0)
  {
   IP VAR_10;

   if (FUNC_15(&VAR_10, VAR_9))
   {
    if (FUNC_7(&VAR_10) == 0)
    {
     if (FUNC_6(&VAR_10) == 0)
     {
      FUNC_0(VAR_7, FUNC_2(&VAR_10, sizeof(IP)));
     }
    }
   }
  }

  FUNC_3(VAR_9);
 }

 FUNC_4(VAR_5);

 VAR_6 = FUNC_11(VAR_7, VAR_2, VAR_3);

 for (VAR_8 = 0;VAR_8 < FUNC_9(VAR_7);VAR_8++)
 {
  IP *VAR_11 = FUNC_8(VAR_7, VAR_8);

  FUNC_3(VAR_11);
 }

 FUNC_13(VAR_7);

 return VAR_6;
}
