
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

void FUNC_8(char *VAR_2)
{
 FILE *VAR_3;

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = "Unknown Error";
 }

 VAR_3 = FUNC_4("abort_error_log.txt", "w");
 if (VAR_3 != ((void*)0))
 {
  FUNC_6(VAR_2, 1, FUNC_7(VAR_2), VAR_3);
  FUNC_3(VAR_3);
 }

 FUNC_5("Fatal Error: ", VAR_1);
 FUNC_5(VAR_2, VAR_1);
 FUNC_5("\r\n", VAR_1);
 FUNC_2();

}
