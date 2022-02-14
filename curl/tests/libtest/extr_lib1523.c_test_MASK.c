
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,...) ;
 long VAR_7 ;
 int FUNC_3 (int ,char*,int,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int,int) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 long VAR_9 ;

int FUNC_7(char *VAR_10)
{
  CURLcode VAR_11;
  CURL *VAR_12 = FUNC_1();
  char VAR_13[VAR_6];
  FUNC_2(VAR_12, VAR_3, VAR_10);
  FUNC_2(VAR_12, VAR_4, VAR_9);
  FUNC_2(VAR_12, VAR_1, VAR_13);
  FUNC_2(VAR_12, VAR_2, 0L);
  FUNC_2(VAR_12, VAR_5, VAR_7);

  FUNC_4("Start: %d\n", FUNC_6(((void*)0)));
  VAR_11 = FUNC_5(VAR_12, 1, 2);
  if(VAR_11)
    FUNC_3(VAR_8, "error %d: %s\n", VAR_11, VAR_13);

  VAR_11 = FUNC_5(VAR_12, 12000, 1);
  if(VAR_11 != VAR_0)
    FUNC_3(VAR_8, "error %d: %s\n", VAR_11, VAR_13);
  else
    VAR_11 = 0;

  FUNC_4("End: %d\n", FUNC_6(((void*)0)));
  FUNC_0(VAR_12);

  return (int)VAR_11;
}
