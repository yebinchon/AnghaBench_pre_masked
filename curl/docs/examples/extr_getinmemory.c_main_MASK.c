
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStruct {int memory; scalar_t__ size; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,unsigned long) ;
 int VAR_7 ;

int FUNC_11(void)
{
  CURL *VAR_8;
  CURLcode VAR_9;

  struct MemoryStruct VAR_10;

  VAR_10.memory = FUNC_9(1);
  VAR_10.size = 0;

  FUNC_6(VAR_5);


  VAR_8 = FUNC_1();


  FUNC_3(VAR_8, VAR_1, "https://www.example.com/");


  FUNC_3(VAR_8, VAR_4, VAR_6);


  FUNC_3(VAR_8, VAR_3, (void *)&VAR_10);



  FUNC_3(VAR_8, VAR_2, "libcurl-agent/1.0");


  VAR_9 = FUNC_2(VAR_8);


  if(VAR_9 != VAR_0) {
    FUNC_7(VAR_7, "curl_easy_perform() failed: %s\n",
            FUNC_4(VAR_9));
  }
  else {







    FUNC_10("%lu bytes retrieved\n", (unsigned long)VAR_10.size);
  }


  FUNC_0(VAR_8);

  FUNC_8(VAR_10.memory);


  FUNC_5();

  return 0;
}
