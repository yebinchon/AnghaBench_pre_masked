
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int tmp ;
typedef char USHORT ;
typedef scalar_t__ UINT ;
typedef int BUF ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*,scalar_t__,char*) ;
 int FUNC_7 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int *,void*,scalar_t__) ;
 int FUNC_10 (char*,int) ;

bool FUNC_11(char *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3)
{
 BUF *VAR_4;
 char VAR_5[257];
 bool VAR_6 = 1;
 USHORT VAR_7;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return 0;
 }
 FUNC_7(VAR_0, VAR_1, "");

 VAR_4 = FUNC_3();
 FUNC_9(VAR_4, VAR_2, VAR_3);
 FUNC_5(VAR_4, 0, 0);

 while (1)
 {
  UINT VAR_8 = (UINT)FUNC_2(VAR_4);
  if (VAR_8 > 0)
  {

   FUNC_10(VAR_5, sizeof(VAR_5));
   if (FUNC_4(VAR_4, VAR_5, VAR_8) != VAR_8)
   {
    VAR_6 = 0;
    break;
   }

   if (FUNC_8(VAR_0) != 0)
   {
    FUNC_6(VAR_0, VAR_1, ".");
   }
   FUNC_6(VAR_0, VAR_1, VAR_5);
  }
  else
  {

   break;
  }
 }

 if (FUNC_4(VAR_4, &VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
 {
  VAR_6 = 0;
 }
 else
 {
  if (FUNC_0(VAR_7) != 0x01 && FUNC_0(VAR_7) != 0x0c)
  {
   VAR_6 = 0;
  }
 }

 if (FUNC_4(VAR_4, &VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
 {
  VAR_6 = 0;
 }
 else
 {
  if (FUNC_0(VAR_7) != 0x01)
  {
   VAR_6 = 0;
  }
 }

 FUNC_1(VAR_4);

 if (VAR_6 == 0 || FUNC_8(VAR_0) == 0)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}
