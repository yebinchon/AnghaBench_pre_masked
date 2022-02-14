
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char FILE ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char*) ;
 char* VAR_6 ;

int FUNC_7(void)
{
  CURL *VAR_7;
  static const char *VAR_8 = "head.out";
  FILE *VAR_9;
  static const char *VAR_10 = "body.out";
  FILE *VAR_11;

  FUNC_4(VAR_5);


  VAR_7 = FUNC_1();


  FUNC_3(VAR_7, VAR_2, "https://example.com");


  FUNC_3(VAR_7, VAR_1, 1L);


  FUNC_3(VAR_7, VAR_4, VAR_6);


  VAR_9 = FUNC_6(VAR_8, "wb");
  if(!VAR_9) {
    FUNC_0(VAR_7);
    return -1;
  }


  VAR_11 = FUNC_6(VAR_10, "wb");
  if(!VAR_11) {
    FUNC_0(VAR_7);
    FUNC_5(VAR_9);
    return -1;
  }


  FUNC_3(VAR_7, VAR_0, VAR_9);


  FUNC_3(VAR_7, VAR_3, VAR_11);


  FUNC_2(VAR_7);


  FUNC_5(VAR_9);


  FUNC_5(VAR_11);


  FUNC_0(VAR_7);

  return 0;
}
