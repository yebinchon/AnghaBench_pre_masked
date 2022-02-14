
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStruct {char* memory; scalar_t__ size; } ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (char const*) ;

int FUNC_12(void)
{
  CURL *VAR_10;
  CURLcode VAR_11;
  struct MemoryStruct VAR_12;
  static const char *VAR_13 = "Field=1&Field=2&Field=3";

  VAR_12.memory = FUNC_9(1);
  VAR_12.size = 0;

  FUNC_6(VAR_7);
  VAR_10 = FUNC_1();
  if(VAR_10) {
    FUNC_3(VAR_10, VAR_3, "https://www.example.org/");


    FUNC_3(VAR_10, VAR_6, VAR_8);


    FUNC_3(VAR_10, VAR_5, (void *)&VAR_12);



    FUNC_3(VAR_10, VAR_4, "libcurl-agent/1.0");

    FUNC_3(VAR_10, VAR_1, VAR_13);



    FUNC_3(VAR_10, VAR_2, (long)FUNC_11(VAR_13));


    VAR_11 = FUNC_2(VAR_10);

    if(VAR_11 != VAR_0) {
      FUNC_7(VAR_9, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_11));
    }
    else {






      FUNC_10("%s\n",VAR_12.memory);
    }


    FUNC_0(VAR_10);


    FUNC_5();
  }
  FUNC_8(VAR_12.memory);
  return 0;
}
