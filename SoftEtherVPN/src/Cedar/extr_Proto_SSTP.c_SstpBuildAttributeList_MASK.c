
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int SSTP_ATTRIBUTE ;
typedef int LIST ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *) ;

BUF *FUNC_8(LIST *VAR_0, USHORT VAR_1)
{
 UINT VAR_2;
 BUF *VAR_3;
 USHORT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4();

 VAR_4 = FUNC_0(VAR_1);
 FUNC_6(VAR_3, &VAR_4, sizeof(USHORT));

 VAR_4 = FUNC_0((USHORT)FUNC_3(VAR_0));
 FUNC_6(VAR_3, &VAR_4, sizeof(USHORT));

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  SSTP_ATTRIBUTE *VAR_5 = FUNC_2(VAR_0, VAR_2);
  BUF *VAR_6 = FUNC_5(VAR_5);

  if (VAR_6 != ((void*)0))
  {
   FUNC_7(VAR_3, VAR_6);

   FUNC_1(VAR_6);
  }
 }

 return VAR_3;
}
