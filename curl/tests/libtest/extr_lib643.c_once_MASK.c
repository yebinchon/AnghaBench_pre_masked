
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {void* sizeleft; void* readptr; } ;
typedef void* curl_off_t ;
typedef int curl_mimepart ;
typedef int curl_mime ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,void*,int ,int *,int *,struct WriteThis*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 void* VAR_7 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (int *,int ,...) ;

__attribute__((used)) static int FUNC_16(char *VAR_10, bool VAR_11)
{
  CURL *VAR_12;
  CURLcode VAR_13 = VAR_0;

  curl_mime *VAR_14 = ((void*)0);
  curl_mimepart *VAR_15 = ((void*)0);
  struct WriteThis VAR_16;
  struct WriteThis VAR_17;
  curl_off_t VAR_18 = -1;

  VAR_16.readptr = VAR_7;

  VAR_18 = (curl_off_t)FUNC_14(VAR_7);

  VAR_16.sizeleft = VAR_18;

  VAR_12 = FUNC_1();
  if(!VAR_12) {
    FUNC_12(VAR_9, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_6;
  }

  VAR_14 = FUNC_10(VAR_12);
  if(!VAR_14) {
    FUNC_12(VAR_9, "curl_mime_init() failed\n");
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }

  VAR_15 = FUNC_5(VAR_14);
  if(!VAR_15) {
    FUNC_12(VAR_9, "curl_mime_addpart(1) failed\n");
    FUNC_9(VAR_14);
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }


  if(VAR_11) {
    VAR_13 = FUNC_11(VAR_15, "sendfile");
    if(!VAR_13)
      VAR_13 = FUNC_7(VAR_15, VAR_18, VAR_8,
                              ((void*)0), ((void*)0), &VAR_16);
    if(!VAR_13)
      VAR_13 = FUNC_8(VAR_15, "postit2.c");
  }
  else {

    VAR_13 = FUNC_11(VAR_15, "sendfile alternative");
    if(!VAR_13)
      VAR_13 = FUNC_7(VAR_15, VAR_18, VAR_8,
                              ((void*)0), ((void*)0), &VAR_16);
    if(!VAR_13)
      VAR_13 = FUNC_8(VAR_15, "file name 2");
  }

  if(VAR_13)
    FUNC_13("curl_mime_xxx(1) = %s\n", FUNC_3(VAR_13));




  VAR_17 = VAR_7;

  VAR_18 = (curl_off_t)FUNC_14(VAR_7);

  VAR_17 = VAR_18;

  VAR_15 = FUNC_5(VAR_14);
  if(!VAR_15) {
    FUNC_12(VAR_9, "curl_mime_addpart(2) failed\n");
    FUNC_9(VAR_14);
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }

  VAR_13 = FUNC_11(VAR_15, "callbackdata");
  if(!VAR_13)
    VAR_13 = FUNC_7(VAR_15, VAR_18, VAR_8,
                            ((void*)0), ((void*)0), &VAR_17);

  if(VAR_13)
    FUNC_13("curl_mime_xxx(2) = %s\n", FUNC_3(VAR_13));

  VAR_15 = FUNC_5(VAR_14);
  if(!VAR_15) {
    FUNC_12(VAR_9, "curl_mime_addpart(3) failed\n");
    FUNC_9(VAR_14);
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }


  VAR_13 = FUNC_11(VAR_15, "filename");
  if(!VAR_13)
    VAR_13 = FUNC_6(VAR_15,





                          "postit2.c",

                          VAR_5);

  if(VAR_13)
    FUNC_13("curl_mime_xxx(3) = %s\n", FUNC_3(VAR_13));


  VAR_15 = FUNC_5(VAR_14);
  if(!VAR_15) {
    FUNC_12(VAR_9, "curl_mime_addpart(4) failed\n");
    FUNC_9(VAR_14);
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }
  VAR_13 = FUNC_11(VAR_15, "submit");
  if(!VAR_13)
    VAR_13 = FUNC_6(VAR_15,





                          "send",

                          VAR_5);

  if(VAR_13)
    FUNC_13("curl_mime_xxx(4) = %s\n", FUNC_3(VAR_13));

  VAR_15 = FUNC_5(VAR_14);
  if(!VAR_15) {
    FUNC_12(VAR_9, "curl_mime_addpart(5) failed\n");
    FUNC_9(VAR_14);
    FUNC_0(VAR_12);
    FUNC_4();
    return VAR_6;
  }
  VAR_13 = FUNC_11(VAR_15, "somename");
  if(!VAR_13)
    VAR_13 = FUNC_8(VAR_15, "somefile.txt");
  if(!VAR_13)
    VAR_13 = FUNC_6(VAR_15, "blah blah", 9);

  if(VAR_13)
    FUNC_13("curl_mime_xxx(5) = %s\n", FUNC_3(VAR_13));


  FUNC_15(VAR_12, VAR_3, VAR_10);


  FUNC_15(VAR_12, VAR_2, VAR_14);


  FUNC_15(VAR_12, VAR_4, 1L);


  FUNC_15(VAR_12, VAR_1, 1L);


  VAR_13 = FUNC_2(VAR_12);

test_cleanup:


  FUNC_0(VAR_12);


  FUNC_9(VAR_14);

  return VAR_13;
}
