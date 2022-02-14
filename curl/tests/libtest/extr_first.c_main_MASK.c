
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 char** VAR_7 ;

int FUNC_9(int VAR_8, char **VAR_9)
{
  char *VAR_10;
  int VAR_11;
  FUNC_5();
  if(VAR_8< 2) {
    FUNC_4(VAR_4, "Pass URL as argument please\n");
    return 1;
  }

  VAR_6 = VAR_8;
  VAR_7 = VAR_9;

  if(VAR_8>2)
    VAR_2 = VAR_9[2];

  if(VAR_8>3)
    VAR_3 = VAR_9[3];

  VAR_10 = VAR_9[1];

  FUNC_4(VAR_4, "URL: %s\n", VAR_10);

  VAR_11 = FUNC_8(VAR_10);







  return VAR_11;
}
