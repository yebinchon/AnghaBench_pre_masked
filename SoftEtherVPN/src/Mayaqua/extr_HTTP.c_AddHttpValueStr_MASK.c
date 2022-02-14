
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HTTP_VALUE ;
typedef int HTTP_HEADER ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*) ;

bool FUNC_9(HTTP_HEADER* VAR_1, char *VAR_2)
{
 HTTP_VALUE *VAR_3 = ((void*)0);
 UINT VAR_4 = 0;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);


 if (VAR_1 == ((void*)0) || FUNC_4(VAR_2))
 {
  return 0;
 }


 FUNC_2(VAR_2, ' ');


 VAR_4 = FUNC_7(VAR_2, ":", 0);
 if (VAR_4 == VAR_0)
 {

  return 0;
 }

 if ((VAR_4 + 1) >= FUNC_8(VAR_2))
 {

  return 0;
 }


 VAR_5 = FUNC_5(VAR_4 + 1);
 FUNC_1(VAR_5, VAR_2, VAR_4);
 VAR_5[VAR_4] = 0;
 VAR_6 = &VAR_2[VAR_4 + 1];

 VAR_3 = FUNC_6(VAR_5, VAR_6);
 if (VAR_3 == ((void*)0))
 {
  FUNC_3(VAR_5);
  return 0;
 }

 FUNC_3(VAR_5);

 FUNC_0(VAR_1, VAR_3);

 return 1;
}
