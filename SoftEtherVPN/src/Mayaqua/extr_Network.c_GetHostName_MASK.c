
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int THREAD ;
typedef int IP ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,char*) ;
 int VAR_1 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

bool FUNC_12(char *VAR_2, UINT VAR_3, IP *VAR_4)
{
 THREAD *VAR_5;
 IP *VAR_6;
 bool VAR_7;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_2, VAR_3, VAR_4))
 {
  if (FUNC_4(VAR_2) == 0)
  {
   return 1;
  }
  else
  {
   return 0;
  }
 }

 VAR_6 = FUNC_11(sizeof(IP));
 FUNC_1(VAR_6, VAR_4, sizeof(IP));

 VAR_5 = FUNC_6(VAR_0, VAR_6);

 FUNC_10(VAR_5);

 FUNC_9(VAR_5, VAR_1);

 FUNC_7(VAR_5);

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7 == 0)
 {
  if (FUNC_5(VAR_4))
  {
   VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
   if (VAR_7)
   {
    FUNC_0(VAR_4, VAR_2);
   }
  }
 }
 else
 {
  if (FUNC_4(VAR_2))
  {
   VAR_7 = 0;
  }
 }
 if (VAR_7 == 0)
 {
  FUNC_0(VAR_4, "");
  FUNC_8(VAR_2, VAR_3, "");
 }

 return VAR_7;
}
