
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SOCK ;
typedef int HTTP_HEADER ;


 int FUNC_0 (int *,int,char*,char*,int ,int *,char*,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,char*,char*,int) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;

bool FUNC_9(SOCK *VAR_1, char *VAR_2, char *VAR_3, HTTP_HEADER *VAR_4)
{
 bool VAR_5 = 0;
 char *VAR_6;
 UINT VAR_7;
 char *VAR_8;
 UINT VAR_9;
 char *VAR_10 = "<html><head><title>Object moved</title></head><body>\r\n<h2>Object moved to <a href=\"$URL$\">here</a>.</h2>\r\n</body></html>";
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = (FUNC_7(VAR_2) + FUNC_7(VAR_3) + VAR_0) * 2;
 VAR_8 = FUNC_8(VAR_9);

 FUNC_5(VAR_8, VAR_9, VAR_2);
 if (FUNC_2(VAR_3) == 0)
 {
  FUNC_4(VAR_8, VAR_9, "?");
  FUNC_4(VAR_8, VAR_9, VAR_3);
 }

 VAR_7 = (FUNC_7(VAR_10) + FUNC_7(VAR_8) + VAR_0) * 2;
 VAR_6 = FUNC_8(VAR_7);

 FUNC_3(VAR_6, VAR_7, VAR_10, "$URL$", VAR_8, 0);

 VAR_5 = FUNC_0(VAR_1, 302, "Found", VAR_6, FUNC_6(VAR_6), ((void*)0), "Location", VAR_8, VAR_4);

 FUNC_1(VAR_6);

 FUNC_1(VAR_8);

 return VAR_5;
}
