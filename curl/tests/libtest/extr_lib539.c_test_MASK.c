
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int VAR_9 ;
 int FUNC_10 (int *,int ,...) ;

int FUNC_11(char *VAR_10)
{
   CURLcode VAR_11;
   CURL *VAR_12;
   char *VAR_13 = ((void*)0);
   struct curl_slist *VAR_14 = ((void*)0);

   if(FUNC_5(VAR_7) != VAR_0) {
     FUNC_8(VAR_9, "curl_global_init() failed\n");
     return VAR_8;
   }

   VAR_12 = FUNC_2();
   if(!VAR_12) {
     FUNC_8(VAR_9, "curl_easy_init() failed\n");
     FUNC_4();
     return VAR_8;
   }




   FUNC_10(VAR_12, VAR_5, VAR_10);
   FUNC_10(VAR_12, VAR_6, 1L);
   FUNC_10(VAR_12, VAR_3, (long) VAR_2);

   VAR_11 = FUNC_3(VAR_12);
   VAR_13 = FUNC_0("%s./", VAR_10);
   if(VAR_13 == ((void*)0)) {
     FUNC_1(VAR_12);
     FUNC_4();
     return VAR_8;
   }

   VAR_14 = FUNC_6(((void*)0), "SYST");
   if(VAR_14 == ((void*)0)) {
     FUNC_9(VAR_13);
     FUNC_1(VAR_12);
     FUNC_4();
     return VAR_8;
   }

   FUNC_10(VAR_12, VAR_5, VAR_13);
   FUNC_10(VAR_12, VAR_3, (long) VAR_1);
   FUNC_10(VAR_12, VAR_4, VAR_14);

   VAR_11 = FUNC_3(VAR_12);

test_cleanup:

   FUNC_7(VAR_14);
   FUNC_9(VAR_13);
   FUNC_1(VAR_12);
   FUNC_4();

   return (int)VAR_11;
}
