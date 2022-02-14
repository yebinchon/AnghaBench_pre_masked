
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmd ;
typedef size_t UINT ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int,char**) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;

int FUNC_10(int VAR_2, char *VAR_3[])
{
 bool VAR_4 = 0;
 UINT VAR_5;
 char VAR_6[VAR_0];
 char *VAR_7;
 int VAR_8 = 0;

 FUNC_5();

 VAR_6[0] = 0;
 if (VAR_2 >= 2)
 {
  for (VAR_5 = 1;VAR_5 < (UINT)VAR_2;VAR_5++)
  {
   VAR_7 = VAR_3[VAR_5];
   if (VAR_7[0] == '/')
   {
    if (!FUNC_7(VAR_7, "/memcheck"))
    {
     VAR_4 = 1;
    }
   }
   else
   {
    FUNC_8(VAR_6, sizeof(VAR_6), &VAR_7[0]);
   }
  }
 }

 FUNC_4(VAR_4, 1, VAR_2, VAR_3);
 FUNC_0(1);
 FUNC_3();
 FUNC_6();
 VAR_8 = FUNC_9(VAR_1);
 FUNC_1();
 FUNC_2();

 return VAR_8;
}
