
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,int,char*,char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_12(int VAR_3, char **VAR_4)
{
 if (VAR_3 >= 1)
 {




  VAR_1 = FUNC_0(VAR_4[0]);
  VAR_2 = FUNC_1(VAR_1);

 }
 if (VAR_3 < 2 || VAR_4 == ((void*)0))
 {

  FUNC_7(((void*)0));
 }
 else
 {

  int VAR_5, VAR_6 = 1;
  char *VAR_7;

  for (VAR_5 = 1;VAR_5 < VAR_3;VAR_5++)
  {
   VAR_6 += FUNC_9(VAR_4[VAR_5]) * 2 + 32;
  }
  VAR_7 = FUNC_11(VAR_6);

  for (VAR_5 = 1;VAR_5 < VAR_3;VAR_5++)
  {
   UINT VAR_8 = FUNC_9(VAR_4[VAR_5]) * 2;
   char *VAR_9 = FUNC_11(VAR_8);
   bool VAR_10 = (FUNC_6(VAR_4[VAR_5], " ", 0, 1) != VAR_0);
   FUNC_5(VAR_9, VAR_8, VAR_4[VAR_5], "\"", "\"\"", 1);
   if (VAR_10)
   {
    FUNC_8(VAR_7, VAR_6, "\"");
   }
   FUNC_8(VAR_7, VAR_6, VAR_9);
   if (VAR_10)
   {
    FUNC_8(VAR_7, VAR_6, "\"");
   }
   FUNC_8(VAR_7, VAR_6, " ");
   FUNC_4(VAR_9);
  }

  FUNC_10(VAR_7);
  FUNC_7(VAR_7);
  FUNC_4(VAR_7);
 }
}
