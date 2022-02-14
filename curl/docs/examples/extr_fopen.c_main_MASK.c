
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int URL_FILE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(int VAR_3, char *VAR_4[])
{
  URL_FILE *VAR_5;
  FILE *VAR_6;

  size_t VAR_7;
  char VAR_8[256];
  const char *VAR_9;

  if(VAR_3 < 2)
    VAR_9 = "http://192.168.7.3/testfile";
  else
    VAR_9 = VAR_4[1];


  VAR_6 = FUNC_1(VAR_0, "wb+");
  if(!VAR_6) {
    FUNC_3("couldn't open fgets output file\n");
    return 1;
  }

  VAR_5 = FUNC_9(VAR_9, "r");
  if(!VAR_5) {
    FUNC_4("couldn't url_fopen() %s\n", VAR_9);
    FUNC_0(VAR_6);
    return 2;
  }

  while(!FUNC_7(VAR_5)) {
    FUNC_8(VAR_8, sizeof(VAR_8), VAR_5);
    FUNC_2(VAR_8, 1, FUNC_5(VAR_8), VAR_6);
  }

  FUNC_6(VAR_5);

  FUNC_0(VAR_6);



  VAR_6 = FUNC_1(VAR_1, "wb+");
  if(!VAR_6) {
    FUNC_3("couldn't open fread output file\n");
    return 1;
  }

  VAR_5 = FUNC_9("testfile", "r");
  if(!VAR_5) {
    FUNC_4("couldn't url_fopen() testfile\n");
    FUNC_0(VAR_6);
    return 2;
  }

  do {
    VAR_7 = FUNC_10(VAR_8, 1, sizeof(VAR_8), VAR_5);
    FUNC_2(VAR_8, 1, VAR_7, VAR_6);
  } while(VAR_7);

  FUNC_6(VAR_5);

  FUNC_0(VAR_6);



  VAR_6 = FUNC_1(VAR_2, "wb+");
  if(!VAR_6) {
    FUNC_3("couldn't open fread output file\n");
    return 1;
  }

  VAR_5 = FUNC_9("testfile", "r");
  if(!VAR_5) {
    FUNC_4("couldn't url_fopen() testfile\n");
    FUNC_0(VAR_6);
    return 2;
  }

  VAR_7 = FUNC_10(VAR_8, 1, sizeof(VAR_8), VAR_5);
  FUNC_2(VAR_8, 1, VAR_7, VAR_6);
  FUNC_11(VAR_5);

  VAR_8[0]='\n';
  FUNC_2(VAR_8, 1, 1, VAR_6);

  VAR_7 = FUNC_10(VAR_8, 1, sizeof(VAR_8), VAR_5);
  FUNC_2(VAR_8, 1, VAR_7, VAR_6);

  FUNC_6(VAR_5);

  FUNC_0(VAR_6);

  return 0;
}
