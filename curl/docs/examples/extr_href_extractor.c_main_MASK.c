
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int tag ;
typedef int attr ;
typedef int HTMLSTREAMPARSER ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (char*,char*) ;
 long VAR_6 ;

int FUNC_12(int VAR_7, char *VAR_8[])
{
  char VAR_9[1], VAR_10[4], VAR_11[128];
  CURL *VAR_12;
  HTMLSTREAMPARSER *VAR_13;

  if(VAR_7 != 2) {
    FUNC_11("Usage: %s URL\n", VAR_8[0]);
    return VAR_4;
  }

  VAR_12 = FUNC_1();

  VAR_13 = FUNC_5();

  FUNC_9(VAR_13, 1);
  FUNC_7(VAR_13, 1);
  FUNC_8(VAR_13, VAR_9, sizeof(VAR_9));
  FUNC_6(VAR_13, VAR_10, sizeof(VAR_10));
  FUNC_10(VAR_13, VAR_11, sizeof(VAR_11)-1);

  FUNC_3(VAR_12, VAR_1, VAR_8[1]);
  FUNC_3(VAR_12, VAR_3, VAR_6);
  FUNC_3(VAR_12, VAR_2, VAR_13);
  FUNC_3(VAR_12, VAR_0, 1L);

  FUNC_2(VAR_12);

  FUNC_0(VAR_12);

  FUNC_4(VAR_13);

  return VAR_5;
}
