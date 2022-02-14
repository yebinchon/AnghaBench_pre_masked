
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char* data; struct curl_slist* next; } ;
struct GlobalConfig {scalar_t__ showerror; } ;
typedef int global ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 struct curl_slist* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct curl_slist*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct GlobalConfig*) ;
 scalar_t__ FUNC_6 (struct GlobalConfig*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct GlobalConfig*,int ,int) ;
 scalar_t__ FUNC_9 (struct GlobalConfig*,int,char**) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 int VAR_3 ;
 int FUNC_15 (scalar_t__,int ) ;

int FUNC_16(int VAR_4, char *VAR_5[])
{
  CURLcode VAR_6 = VAR_0;
  struct GlobalConfig VAR_7;
  FUNC_8(&VAR_7, 0, sizeof(VAR_7));


  FUNC_1();

  FUNC_4();






  FUNC_7();



  VAR_6 = FUNC_6(&VAR_7);
  if(!VAR_6) {

    VAR_6 = FUNC_9(&VAR_7, VAR_4, VAR_5);







    FUNC_5(&VAR_7);
  }


  FUNC_11();
  return (int)VAR_6;

}
