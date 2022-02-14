
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef int CURLcode ;
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
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int VAR_11 ;
 int FUNC_11 (int *,int ,...) ;

int FUNC_12(char *VAR_12)
{
   CURLcode VAR_13;
   CURL *VAR_14 = ((void*)0);
   char *VAR_15 = ((void*)0);
   struct curl_slist *VAR_16 = ((void*)0);

   if(FUNC_6(VAR_9) != VAR_0) {
     FUNC_9(VAR_11, "curl_global_init() failed\n");
     return VAR_10;
   }

   VAR_14 = FUNC_2();
   if(!VAR_14) {
     FUNC_9(VAR_11, "curl_easy_init() failed\n");
     VAR_13 = VAR_10;
     goto test_cleanup;
   }



   VAR_15 = FUNC_0("%s/folderA/661", VAR_12);
   FUNC_11(VAR_14, VAR_7, VAR_15);
   FUNC_11(VAR_14, VAR_8, 1L);
   FUNC_11(VAR_14, VAR_4, 1L);
   FUNC_11(VAR_14, VAR_3, (long) VAR_2);
   VAR_13 = FUNC_3(VAR_14);

   FUNC_10(VAR_15);
   VAR_15 = FUNC_0("%s/folderB/661", VAR_12);
   FUNC_11(VAR_14, VAR_7, VAR_15);
   VAR_13 = FUNC_3(VAR_14);



   FUNC_1(VAR_14);
   VAR_14 = FUNC_2();
   if(!VAR_14) {
     FUNC_9(VAR_11, "curl_easy_init() failed\n");
     VAR_13 = VAR_10;
     goto test_cleanup;
   }

   FUNC_10(VAR_15);
   VAR_15 = FUNC_0("%s/folderA/661", VAR_12);
   FUNC_11(VAR_14, VAR_7, VAR_15);
   FUNC_11(VAR_14, VAR_8, 1L);
   FUNC_11(VAR_14, VAR_4, 1L);
   FUNC_11(VAR_14, VAR_3, (long) VAR_1);
   VAR_13 = FUNC_3(VAR_14);


   FUNC_10(VAR_15);
   VAR_15 = FUNC_0("%s/folderB/661", VAR_12);
   FUNC_11(VAR_14, VAR_7, VAR_15);
   FUNC_11(VAR_14, VAR_3, (long) VAR_2);
   VAR_13 = FUNC_3(VAR_14);

   FUNC_10(VAR_15);
   VAR_15 = FUNC_0("%s/folderA/661", VAR_12);
   FUNC_11(VAR_14, VAR_7, VAR_15);
   FUNC_11(VAR_14, VAR_3, (long) VAR_1);
   VAR_13 = FUNC_3(VAR_14);



   FUNC_1(VAR_14);
   VAR_14 = FUNC_2();
   if(!VAR_14) {
     FUNC_9(VAR_11, "curl_easy_init() failed\n");
     VAR_13 = VAR_10;
     goto test_cleanup;
   }

   VAR_16 = FUNC_7(((void*)0), "SYST");
   if(VAR_16 == ((void*)0)) {
     FUNC_9(VAR_11, "curl_slist_append() failed\n");
     VAR_13 = VAR_10;
     goto test_cleanup;
   }

   FUNC_11(VAR_14, VAR_7, VAR_12);
   FUNC_11(VAR_14, VAR_8, 1L);
   FUNC_11(VAR_14, VAR_5, 1L);
   FUNC_11(VAR_14, VAR_3, (long) VAR_1);
   FUNC_11(VAR_14, VAR_6, VAR_16);
   VAR_13 = FUNC_3(VAR_14);



   FUNC_1(VAR_14);
   VAR_14 = FUNC_2();
   if(!VAR_14) {
     FUNC_9(VAR_11, "curl_easy_init() failed\n");
     VAR_13 = VAR_10;
     goto test_cleanup;
   }

   FUNC_11(VAR_14, VAR_7, VAR_12);
   FUNC_11(VAR_14, VAR_8, 1L);
   FUNC_11(VAR_14, VAR_5, 1L);
   FUNC_11(VAR_14, VAR_3, (long) VAR_2);
   FUNC_11(VAR_14, VAR_6, VAR_16);
   VAR_13 = FUNC_3(VAR_14);




   FUNC_4(VAR_14);
   FUNC_11(VAR_14, VAR_7, VAR_12);
   FUNC_11(VAR_14, VAR_8, 1L);
   FUNC_11(VAR_14, VAR_5, 1L);
   FUNC_11(VAR_14, VAR_3, (long) VAR_1);
   FUNC_11(VAR_14, VAR_6, VAR_16);
   VAR_13 = FUNC_3(VAR_14);


test_cleanup:

   FUNC_8(VAR_16);
   FUNC_10(VAR_15);
   FUNC_1(VAR_14);
   FUNC_5();

   return (int)VAR_13;
}
