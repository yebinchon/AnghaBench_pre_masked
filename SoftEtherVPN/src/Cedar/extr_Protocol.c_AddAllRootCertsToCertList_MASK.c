
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef scalar_t__ UINT ;
typedef int PACK ;
typedef int LIST ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int VAR_0 ;
 int * FUNC_10 (int ) ;

void FUNC_11(LIST *VAR_1)
{
 BUF *VAR_2;
 PACK *VAR_3;
 UINT VAR_4 = 0, VAR_5 = 0;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_10(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != ((void*)0))
 {
  UINT VAR_6 = FUNC_9(VAR_3, "cert");
  UINT VAR_7;

  for (VAR_7 = 0;VAR_7 < VAR_6;VAR_7++)
  {
   bool VAR_8 = 0;
   BUF *VAR_9 = FUNC_8(VAR_3, "cert", VAR_7);

   if (VAR_9 != ((void*)0))
   {
    X *VAR_10 = FUNC_2(VAR_9, 0);

    if (VAR_10 != ((void*)0))
    {
     FUNC_0(VAR_1, VAR_10);

     VAR_8 = 1;

     FUNC_6(VAR_10);
    }

    FUNC_4(VAR_9);
   }

   if (VAR_8)
   {
    VAR_4++;
   }
   else
   {
    VAR_5++;
   }
  }

  FUNC_5(VAR_3);
 }

 FUNC_4(VAR_2);

 FUNC_3("AddAllRootCertsToCertList: ok=%u error=%u total_list_len=%u\n", VAR_4, VAR_5, FUNC_7(VAR_1));
}
