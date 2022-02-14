
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char FILE ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

int FUNC_4(CURL *VAR_4, char *VAR_5, char *VAR_6,
                        int VAR_7)
{
  FILE *VAR_8;
  CURLcode VAR_9;

  VAR_8 = ((void*)0);
  if(VAR_7 == VAR_3)
    FUNC_1(VAR_4, VAR_0, 1L);
  else {
    VAR_8 = FUNC_3(VAR_6, "wb");
    FUNC_1(VAR_4, VAR_2, VAR_8);
  }

  FUNC_1(VAR_4, VAR_1, VAR_5);
  VAR_9 = FUNC_0(VAR_4);
  if(VAR_8 != ((void*)0))
    FUNC_2(VAR_8);
  return VAR_9;
}
