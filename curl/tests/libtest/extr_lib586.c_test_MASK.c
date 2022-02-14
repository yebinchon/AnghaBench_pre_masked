
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdata {char* text; scalar_t__ counter; } ;
struct Tdata {char* url; char* share; } ;
typedef scalar_t__ CURLSHcode ;
typedef char CURLSH ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct userdata* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,int ,struct userdata*) ;
 int FUNC_8 (struct Tdata*) ;
 int FUNC_9 (int ,char*,...) ;
 struct userdata* VAR_12 ;
 struct userdata* VAR_13 ;
 int FUNC_10 (char*,...) ;
 int VAR_14 ;
 int FUNC_11 (int *,int ,char*) ;

int FUNC_12(char *VAR_15)
{
  int VAR_16;
  CURLSHcode VAR_17 = VAR_3;
  char *VAR_18;
  struct Tdata VAR_19;
  CURL *VAR_20;
  CURLSH *VAR_21;
  int VAR_22;
  struct userdata VAR_23;

  VAR_23.text = "Pigs in space";
  VAR_23.counter = 0;

  FUNC_10("GLOBAL_INIT\n");
  if(FUNC_4(VAR_8) != VAR_0) {
    FUNC_9(VAR_14, "curl_global_init() failed\n");
    return VAR_10;
  }


  FUNC_10("SHARE_INIT\n");
  VAR_21 = FUNC_6();
  if(!VAR_21) {
    FUNC_9(VAR_14, "curl_share_init() failed\n");
    FUNC_3();
    return VAR_10;
  }

  if(VAR_3 == VAR_17) {
    FUNC_10("CURLSHOPT_LOCKFUNC\n");
    VAR_17 = FUNC_7(VAR_21, VAR_4, VAR_12);
  }
  if(VAR_3 == VAR_17) {
    FUNC_10("CURLSHOPT_UNLOCKFUNC\n");
    VAR_17 = FUNC_7(VAR_21, VAR_6, VAR_13);
  }
  if(VAR_3 == VAR_17) {
    FUNC_10("CURLSHOPT_USERDATA\n");
    VAR_17 = FUNC_7(VAR_21, VAR_7, &VAR_23);
  }
  if(VAR_3 == VAR_17) {
    FUNC_10("CURL_LOCK_DATA_SSL_SESSION\n");
    VAR_17 = FUNC_7(VAR_21, VAR_5,
                              VAR_9);
  }

  if(VAR_3 != VAR_17) {
    FUNC_9(VAR_14, "curl_share_setopt() failed\n");
    FUNC_5(VAR_21);
    FUNC_3();
    return VAR_10;
  }


  VAR_16 = 0;


  for(VAR_22 = 1; VAR_22 <= VAR_11; VAR_22++) {


    VAR_19.url = VAR_15;
    VAR_19.share = VAR_21;


    FUNC_10("*** run %d\n",VAR_22);
    FUNC_8(&VAR_19);
  }



  FUNC_10("*** run %d\n", VAR_22);
  VAR_20 = FUNC_1();
  if(!VAR_20) {
    FUNC_9(VAR_14, "curl_easy_init() failed\n");
    FUNC_5(VAR_21);
    FUNC_3();
    return VAR_10;
  }

  VAR_18 = VAR_15;
  FUNC_11(VAR_20, VAR_2, VAR_18);
  FUNC_10("CURLOPT_SHARE\n");
  FUNC_11(VAR_20, VAR_1, VAR_21);

  FUNC_10("PERFORM\n");
  FUNC_2(VAR_20);


  FUNC_10("try SHARE_CLEANUP...\n");
  VAR_17 = FUNC_5(VAR_21);
  if(VAR_17 == VAR_3) {
    FUNC_9(VAR_14, "curl_share_cleanup succeed but error expected\n");
    VAR_21 = ((void*)0);
  }
  else {
    FUNC_10("SHARE_CLEANUP failed, correct\n");
  }

test_cleanup:


  FUNC_10("CLEANUP\n");
  FUNC_0(VAR_20);


  FUNC_10("SHARE_CLEANUP\n");
  VAR_17 = FUNC_5(VAR_21);
  if(VAR_17 != VAR_3)
    FUNC_9(VAR_14, "curl_share_cleanup failed, code errno %d\n",
            (int)VAR_17);

  FUNC_10("GLOBAL_CLEANUP\n");
  FUNC_3();

  return VAR_16;
}
