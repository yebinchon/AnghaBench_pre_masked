
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef char FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int * VAR_6 ;
 char* VAR_7 ;

void *FUNC_12(void *VAR_8)
{

  FUNC_9(&VAR_4);
  while(VAR_3 < VAR_5) {
    CURL *VAR_9;
    gchar *VAR_10;

    FUNC_8("j = %d\n", VAR_3);

    VAR_10 =
      FUNC_7("xoap.weather.com/weather/local/%s?cc=*&dayf=5&unit=i\n",
                      VAR_6[VAR_3]);

    FUNC_8("http %s", VAR_10);

    VAR_9 = FUNC_1();
    if(VAR_9) {

      FILE *VAR_11 = FUNC_5(VAR_6[VAR_3], "wb");


      FUNC_3(VAR_9, VAR_0, VAR_10);


      FUNC_3(VAR_9, VAR_1, VAR_11);
      FUNC_3(VAR_9, VAR_2, VAR_7);

      VAR_3++;
      FUNC_10(&VAR_4);

      FUNC_2(VAR_9);

      FUNC_4(VAR_11);
      FUNC_8("fclose\n");

      FUNC_0(VAR_9);
    }
    FUNC_6(VAR_10);


    FUNC_11(1);

  }
  return ((void*)0);
}
