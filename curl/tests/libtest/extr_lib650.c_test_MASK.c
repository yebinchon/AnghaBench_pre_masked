
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct curl_httppost {int dummy; } ;
struct curl_forms {char* value; int option; } ;
typedef int flbuf ;
typedef int CURLcode ;
typedef scalar_t__ CURLFORMcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct curl_httppost**,struct curl_httppost**,int ,...) ;
 int FUNC_4 (struct curl_httppost*) ;
 int FUNC_5 (struct curl_httppost*,void*,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*,unsigned long) ;
 struct curl_slist* FUNC_9 (struct curl_slist*,char*) ;
 int FUNC_10 (struct curl_slist*) ;
 char* VAR_21 ;
 int FUNC_11 (int ,char*) ;
 char* VAR_22 ;
 char* VAR_23 ;
 int FUNC_12 (char*,int) ;
 int VAR_24 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int ,...) ;

int FUNC_15(char *VAR_25)
{
  CURL *VAR_26 = ((void*)0);
  CURLcode VAR_27 = VAR_19;
  CURLFORMcode VAR_28;
  struct curl_slist *VAR_29, *VAR_30 = ((void*)0);
  struct curl_httppost *VAR_31 = ((void*)0);
  struct curl_httppost *VAR_32 = ((void*)0);
  struct curl_forms VAR_33[3];
  size_t VAR_34 = 0;
  char VAR_35[32];
  long VAR_36 = 0;

  if(FUNC_7(VAR_18) != VAR_0) {
    FUNC_11(VAR_24, "curl_global_init() failed\n");
    return VAR_19;
  }


  VAR_29 = FUNC_9(((void*)0), "X-customheader-1: Header 1 data");
  if(!VAR_29) {
    goto test_cleanup;
  }
  VAR_30 = FUNC_9(VAR_29, "X-customheader-2: Header 2 data");
  if(!VAR_30) {
    goto test_cleanup;
  }
  VAR_29 = VAR_30;
  VAR_30 = FUNC_9(VAR_29, "Content-Type: text/plain");
  if(!VAR_30) {
    goto test_cleanup;
  }
  VAR_29 = VAR_30;
  VAR_28 = FUNC_3(&VAR_31, &VAR_32,
                        VAR_6, &VAR_23,
                        VAR_5, &VAR_21,
                        VAR_2, VAR_29,
                        VAR_7);

  if(VAR_28) {
    FUNC_12("curl_formadd(1) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }

  VAR_36 = (long)(FUNC_13(VAR_21) - 1);


  VAR_33[0].option = VAR_12;
  VAR_33[0].value = VAR_21;
  VAR_33[1].option = VAR_3;
  VAR_33[1].value = (char *)(size_t)VAR_36;
  VAR_33[2].option = VAR_7;
  VAR_33[2].value = ((void*)0);
  VAR_28 = FUNC_3(&VAR_31,
                        &VAR_32,
                        VAR_13, VAR_23,
                        VAR_11, FUNC_13(VAR_23) - 1,
                        VAR_1, VAR_33,
                        VAR_10, "remotefile.txt",
                        VAR_7);

  if(VAR_28) {
    FUNC_12("curl_formadd(2) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }




  VAR_21[0]++;


  VAR_28 = FUNC_3(&VAR_31,
                        &VAR_32,
                        VAR_6, "multifile",
                        VAR_8, VAR_22,
                        VAR_8, VAR_22,
                        VAR_4, "text/whatever",
                        VAR_8, VAR_22,
                        VAR_7);

  if(VAR_28) {
    FUNC_12("curl_formadd(3) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }


  VAR_28 = FUNC_3(&VAR_31,
                        &VAR_32,
                        VAR_6, "filecontents",
                        VAR_9, VAR_22,
                        VAR_7);

  if(VAR_28) {
    FUNC_12("curl_formadd(4) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }





  FUNC_5(VAR_31, (void *) &VAR_34, VAR_20);


  FUNC_8(VAR_35, sizeof(VAR_35), "%lu", (unsigned long) VAR_34);
  VAR_28 = FUNC_3(&VAR_31,
                        &VAR_32,
                        VAR_6, "formlength",
                        VAR_5, &VAR_35,
                        VAR_7);
  if(VAR_28) {
    FUNC_12("curl_formadd(5) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }


  VAR_28 = FUNC_3(&VAR_31,
                        &VAR_32,
                        VAR_6, "standardinput",
                        VAR_8, "-",
                        VAR_7);
  if(VAR_28) {
    FUNC_12("curl_formadd(6) = %d\n", (int) VAR_28);
    goto test_cleanup;
  }

  VAR_26 = FUNC_1();
  if(!VAR_26) {
    FUNC_11(VAR_24, "curl_easy_init() failed\n");
    goto test_cleanup;
  }


  FUNC_14(VAR_26, VAR_16, VAR_25);


  FUNC_14(VAR_26, VAR_15, VAR_31);


  FUNC_14(VAR_26, VAR_17, 1L);


  FUNC_14(VAR_26, VAR_14, 1L);


  VAR_27 = FUNC_2(VAR_26);

test_cleanup:


  FUNC_0(VAR_26);


  FUNC_4(VAR_31);
  FUNC_10(VAR_29);

  FUNC_6();

  return VAR_27;
}
