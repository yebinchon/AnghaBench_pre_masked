
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logfilename ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char**,size_t*,char*,char*,int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,int ,long) ;
 char const* VAR_4 ;
 char* FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (char*,char*,int) ;
 long FUNC_18 (char const*,char**,int) ;
 char* FUNC_19 (long) ;

int FUNC_20(int VAR_9, char *VAR_10[])
{
  char VAR_11[1024];
  char VAR_12[256];
  FILE *VAR_13;
  char *VAR_14;
  int VAR_15;
  char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
  char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
  size_t VAR_20 = 0;
  long VAR_21;
  const char *VAR_22;
  int VAR_23 = 1;
  const char *VAR_24 = "unknown";
  const char *VAR_25 = "unknown";
  const char *VAR_26 = "unknown";
  bool VAR_27 = VAR_0;
  char *VAR_28;

  VAR_11[0] = '\0';

  while(VAR_9 > VAR_23) {
    if(!FUNC_14("--use-cached-creds", VAR_10[VAR_23])) {
      VAR_27 = VAR_2;
      VAR_23++;
    }
    else if(!FUNC_14("--helper-protocol", VAR_10[VAR_23])) {
      VAR_23++;
      if(VAR_9 > VAR_23)
        VAR_25 = VAR_10[VAR_23++];
    }
    else if(!FUNC_14("--username", VAR_10[VAR_23])) {
      VAR_23++;
      if(VAR_9 > VAR_23)
        VAR_24 = VAR_10[VAR_23++];
    }
    else if(!FUNC_14("--domain", VAR_10[VAR_23])) {
      VAR_23++;
      if(VAR_9 > VAR_23)
        VAR_26 = VAR_10[VAR_23++];
    }
    else {
      FUNC_13("Usage: fake_ntlm [option]\n"
           " --use-cached-creds\n"
           " --helper-protocol [protocol]\n"
           " --username [username]\n"
           " --domain [domain]");
      FUNC_0(1);
    }
  }

  VAR_22 = FUNC_7("CURL_NTLM_AUTH_TESTNUM");
  if(VAR_22) {
    char *VAR_29;
    long VAR_30 = FUNC_18(VAR_22, &VAR_29, 10);
    if((VAR_29 != VAR_22 + FUNC_16(VAR_22)) || (VAR_30 < 1L)) {
      FUNC_5(VAR_6, "Test number not valid in CURL_NTLM_AUTH_TESTNUM");
      FUNC_0(1);
    }
    VAR_21 = VAR_30;
  }
  else {
    FUNC_5(VAR_6, "Test number not specified in CURL_NTLM_AUTH_TESTNUM");
    FUNC_0(1);
  }


  FUNC_10(VAR_12, sizeof(VAR_12), VAR_1, VAR_21);
  VAR_5 = VAR_12;

  FUNC_9("fake_ntlm (user: %s) (proto: %s) (domain: %s) (cached creds: %s)",
         VAR_24, VAR_25, VAR_26,
         (VAR_27) ? "yes" : "no");

  VAR_22 = FUNC_7("CURL_NTLM_AUTH_SRCDIR");
  if(VAR_22) {
    VAR_4 = VAR_22;
  }

  VAR_14 = FUNC_19(VAR_21);
  VAR_13 = FUNC_4(VAR_14, "rb");
  if(!VAR_13) {
    VAR_15 = VAR_3;
    FUNC_9("fopen() failed with error: %d %s", VAR_15, FUNC_15(VAR_15));
    FUNC_9("Error opening file: %s", VAR_14);
    FUNC_9("Couldn't open test file %ld", VAR_21);
    FUNC_0(1);
  }
  else {

    VAR_15 = FUNC_8(&VAR_16, &VAR_20, "ntlm_auth_type1", "input", VAR_13);
    FUNC_1(VAR_13);
    if(VAR_15 || VAR_20 == 0) {
      FUNC_9("getpart() type 1 input failed with error: %d", VAR_15);
      FUNC_0(1);
    }
  }

  VAR_13 = FUNC_4(VAR_14, "rb");
  if(!VAR_13) {
    VAR_15 = VAR_3;
    FUNC_9("fopen() failed with error: %d %s", VAR_15, FUNC_15(VAR_15));
    FUNC_9("Error opening file: %s", VAR_14);
    FUNC_9("Couldn't open test file %ld", VAR_21);
    FUNC_0(1);
  }
  else {
    VAR_20 = 0;
    VAR_15 = FUNC_8(&VAR_17, &VAR_20, "ntlm_auth_type3", "input", VAR_13);
    FUNC_1(VAR_13);
    if(VAR_15 || VAR_20 == 0) {
      FUNC_9("getpart() type 3 input failed with error: %d", VAR_15);
      FUNC_0(1);
    }
  }

  while(FUNC_3(VAR_11, sizeof(VAR_11), VAR_7)) {
    if(FUNC_14(VAR_11, VAR_16) == 0) {
      VAR_13 = FUNC_4(VAR_14, "rb");
      if(!VAR_13) {
        VAR_15 = VAR_3;
        FUNC_9("fopen() failed with error: %d %s", VAR_15, FUNC_15(VAR_15));
        FUNC_9("Error opening file: %s", VAR_14);
        FUNC_9("Couldn't open test file %ld", VAR_21);
        FUNC_0(1);
      }
      else {
        VAR_20 = 0;
        VAR_15 = FUNC_8(&VAR_18, &VAR_20, "ntlm_auth_type1", "output",
                        VAR_13);
        FUNC_1(VAR_13);
        if(VAR_15 || VAR_20 == 0) {
          FUNC_9("getpart() type 1 output failed with error: %d", VAR_15);
          FUNC_0(1);
        }
      }
      FUNC_12("%s", VAR_18);
      FUNC_2(VAR_8);
    }
    else if(FUNC_17(VAR_11, VAR_17, FUNC_16(VAR_17)) == 0) {
      VAR_13 = FUNC_4(VAR_14, "rb");
      if(!VAR_13) {
        VAR_15 = VAR_3;
        FUNC_9("fopen() failed with error: %d %s", VAR_15, FUNC_15(VAR_15));
        FUNC_9("Error opening file: %s", VAR_14);
        FUNC_9("Couldn't open test file %ld", VAR_21);
        FUNC_0(1);
      }
      else {
        VAR_20 = 0;
        VAR_15 = FUNC_8(&VAR_19, &VAR_20, "ntlm_auth_type3", "output",
                        VAR_13);
        FUNC_1(VAR_13);
        if(VAR_15 || VAR_20 == 0) {
          FUNC_9("getpart() type 3 output failed with error: %d", VAR_15);
          FUNC_0(1);
        }
      }
      FUNC_12("%s", VAR_19);
      FUNC_2(VAR_8);
    }
    else {
      FUNC_12("Unknown request\n");
      VAR_28 = FUNC_11(VAR_11, 0);
      if(VAR_28) {
        FUNC_9("invalid input: '%s'\n", VAR_28);
        FUNC_6(VAR_28);
      }
      else
        FUNC_9("OOM formatting invalid input: '%s'\n", VAR_11);
      FUNC_0(1);
    }
  }
  FUNC_9("Exit");
  return 1;
}
