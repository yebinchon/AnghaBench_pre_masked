
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
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* VAR_6 ;

int FUNC_9(int VAR_7, char *VAR_8[])
{
  CURL *VAR_9;
  static const char *VAR_10 = "page.out";
  FILE *VAR_11;

  if(VAR_7 < 2) {
    FUNC_8("Usage: %s <URL>\n", VAR_8[0]);
    return 1;
  }

  FUNC_5(VAR_5);


  VAR_9 = FUNC_1();


  FUNC_3(VAR_9, VAR_1, VAR_8[1]);


  FUNC_3(VAR_9, VAR_2, 1L);


  FUNC_3(VAR_9, VAR_0, 1L);


  FUNC_3(VAR_9, VAR_4, VAR_6);


  VAR_11 = FUNC_7(VAR_10, "wb");
  if(VAR_11) {


    FUNC_3(VAR_9, VAR_3, VAR_11);


    FUNC_2(VAR_9);


    FUNC_6(VAR_11);
  }


  FUNC_0(VAR_9);

  FUNC_4();

  return 0;
}
