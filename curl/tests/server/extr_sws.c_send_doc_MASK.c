
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int weare ;
struct httprequest {int rcmd; int open; int testno; int writedelay; scalar_t__ partno; scalar_t__ close; scalar_t__ connect_request; } ;
typedef size_t ssize_t ;
typedef int partbuf ;
typedef int msgbuf ;
typedef int curl_socket_t ;
typedef int FILE ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 char const* VAR_7 ;
 void* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int,size_t,int *) ;
 int FUNC_4 (char**,size_t*,char*,char*,int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,...) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (char*,char*,char*,int*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int) ;
 size_t FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 size_t FUNC_14 (int ,char const*,size_t) ;
 char* FUNC_15 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(curl_socket_t VAR_18, struct httprequest *VAR_19)
{
  ssize_t VAR_20;
  size_t VAR_21;
  const char *VAR_22;
  char *VAR_23 = ((void*)0);
  FILE *VAR_24;
  char *VAR_25 = ((void*)0);
  size_t VAR_26 = 0;
  FILE *VAR_27;
  bool VAR_28 = VAR_8;
  bool VAR_29 = VAR_3;
  size_t VAR_30;
  int VAR_31 = 0;
  int VAR_32;
  const char *VAR_33 = VAR_13?VAR_5:VAR_4;
  static char VAR_34[256];

  switch(VAR_19->rcmd) {
  default:
  case 129:
    break;
  case 128:

    VAR_21 = FUNC_12("a string to stream 01234567890\n");
    for(;;) {
      VAR_20 = FUNC_14(VAR_18, "a string to stream 01234567890\n", VAR_21);
      if(VAR_12)
        return -1;
      if(VAR_20 != (ssize_t)VAR_21) {
        FUNC_6("Stopped streaming");
        break;
      }
    }
    return -1;
  case 130:

    return 0;
  }

  VAR_19->open = VAR_3;

  if(VAR_19->testno < 0) {
    size_t VAR_35;
    char VAR_36[64];

    switch(VAR_19->testno) {
    case 132:
      FUNC_6("Replying to QUIT");
      VAR_22 = VAR_10;
      break;
    case 131:

      FUNC_6("Identifying ourselves as friends");
      FUNC_7(VAR_36, sizeof(VAR_36), "WE ROOLZ: %ld\r\n", (long)FUNC_5());
      VAR_35 = FUNC_12(VAR_36);
      if(VAR_17)
        FUNC_7(VAR_34, sizeof(VAR_34), "%s", VAR_36);
      else
        FUNC_7(VAR_34, sizeof(VAR_34),
                  "HTTP/1.1 200 OK\r\nContent-Length: %zu\r\n\r\n%s",
                  VAR_35, VAR_36);
      VAR_22 = VAR_34;
      break;
    case 133:
    default:
      FUNC_6("Replying to with a 404");
      VAR_22 = VAR_9;
      break;
    }

    VAR_21 = FUNC_12(VAR_22);
  }
  else {
    char VAR_37[80];
    char *VAR_38 = FUNC_15(VAR_19->testno);



    const char *VAR_39 = VAR_19->connect_request?"connect":"data";

    if(VAR_19->partno)
      FUNC_7(VAR_37, sizeof(VAR_37), "%s%ld", VAR_39, VAR_19->partno);
    else
      FUNC_7(VAR_37, sizeof(VAR_37), "%s", VAR_39);

    FUNC_6("Send response test%ld section <%s>", VAR_19->testno, VAR_37);

    VAR_24 = FUNC_1(VAR_38, "rb");
    if(!VAR_24) {
      VAR_31 = VAR_11;
      FUNC_6("fopen() failed with error: %d %s", VAR_31, FUNC_11(VAR_31));
      FUNC_6("  [3] Error opening file: %s", VAR_38);
      return 0;
    }
    else {
      VAR_31 = FUNC_4(&VAR_23, &VAR_21, "reply", VAR_37, VAR_24);
      FUNC_0(VAR_24);
      if(VAR_31) {
        FUNC_6("getpart() failed with error: %d", VAR_31);
        return 0;
      }
      VAR_22 = VAR_23;
    }

    if(VAR_12) {
      FUNC_2(VAR_23);
      return -1;
    }


    VAR_24 = FUNC_1(VAR_38, "rb");
    if(!VAR_24) {
      VAR_31 = VAR_11;
      FUNC_6("fopen() failed with error: %d %s", VAR_31, FUNC_11(VAR_31));
      FUNC_6("  [4] Error opening file: %s", VAR_38);
      FUNC_2(VAR_23);
      return 0;
    }
    else {

      VAR_31 = FUNC_4(&VAR_25, &VAR_26, "reply", "postcmd", VAR_24);
      FUNC_0(VAR_24);
      if(VAR_31) {
        FUNC_6("getpart() failed with error: %d", VAR_31);
        FUNC_2(VAR_23);
        return 0;
      }
    }
  }

  if(VAR_12) {
    FUNC_2(VAR_23);
    FUNC_2(VAR_25);
    return -1;
  }




  if(FUNC_13(VAR_22, "swsclose") || !VAR_21 || VAR_19->close) {
    VAR_28 = VAR_3;
    FUNC_6("connection close instruction \"swsclose\" found in response");
  }
  if(FUNC_13(VAR_22, "swsbounce")) {
    VAR_14 = VAR_8;
    FUNC_6("enable \"swsbounce\" in the next request");
  }
  else
    VAR_14 = VAR_3;

  VAR_27 = FUNC_1(VAR_33, "ab");
  if(!VAR_27) {
    VAR_31 = VAR_11;
    FUNC_6("fopen() failed with error: %d %s", VAR_31, FUNC_11(VAR_31));
    FUNC_6("  [5] Error opening file: %s", VAR_33);
    FUNC_2(VAR_23);
    FUNC_2(VAR_25);
    return -1;
  }

  VAR_30 = VAR_21;
  do {



    size_t VAR_40 = VAR_21;
    if(VAR_40 > 20)
      VAR_40 = 20;

    retry:
    VAR_20 = FUNC_14(VAR_18, VAR_22, VAR_40);
    if(VAR_20 < 0) {
      if((VAR_2 == VAR_6) || (VAR_0 == VAR_6)) {
        FUNC_16(10);
        goto retry;
      }
      VAR_29 = VAR_8;
      break;
    }


    FUNC_3(VAR_22, 1, (size_t)VAR_20, VAR_27);

    VAR_21 -= VAR_20;
    VAR_22 += VAR_20;

    if(VAR_19->writedelay) {
      int VAR_41 = VAR_19->writedelay * 4;
      FUNC_6("Pausing %d seconds", VAR_19->writedelay);
      while((VAR_41 > 0) && !VAR_12) {
        VAR_41--;
        FUNC_16(250);
      }
    }
  } while((VAR_21 > 0) && !VAR_12);

  do {
    VAR_32 = FUNC_0(VAR_27);
  } while(VAR_32 && ((VAR_31 = VAR_11) == VAR_1));
  if(VAR_32)
    FUNC_6("Error closing file %s error: %d %s",
           VAR_33, VAR_31, FUNC_11(VAR_31));

  if(VAR_12) {
    FUNC_2(VAR_23);
    FUNC_2(VAR_25);
    return -1;
  }

  if(VAR_29) {
    FUNC_6("Sending response failed. Only (%zu bytes) of (%zu bytes) "
           "were sent",
           VAR_30-VAR_21, VAR_30);
    FUNC_2(VAR_23);
    FUNC_2(VAR_25);
    return -1;
  }

  FUNC_6("Response sent (%zu bytes) and written to %s",
         VAR_30, VAR_33);
  FUNC_2(VAR_23);

  if(VAR_26 > 0) {
    char VAR_42[32];
    int VAR_43;
    int VAR_44;
    VAR_23 = VAR_25;
    do {
      if(2 == FUNC_8(VAR_23, "%31s %d", VAR_42, &VAR_44)) {
        if(!FUNC_10("wait", VAR_42)) {
          FUNC_6("Told to sleep for %d seconds", VAR_44);
          VAR_43 = VAR_44 * 4;
          while((VAR_43 > 0) && !VAR_12) {
            VAR_43--;
            VAR_32 = FUNC_16(250);
            if(VAR_32) {

              VAR_31 = VAR_11;
              FUNC_6("wait_ms() failed with error: (%d) %s",
                     VAR_31, FUNC_11(VAR_31));
              break;
            }
          }
          if(!VAR_43)
            FUNC_6("Continuing after sleeping %d seconds", VAR_44);
        }
        else
          FUNC_6("Unknown command in reply command section");
      }
      VAR_23 = FUNC_9(VAR_23, '\n');
      if(VAR_23)
        VAR_23++;
      else
        VAR_23 = ((void*)0);
    } while(VAR_23 && *VAR_23);
  }
  FUNC_2(VAR_25);
  VAR_19->open = VAR_17?VAR_3:VAR_28;

  VAR_16 = VAR_19->testno;
  VAR_15 = VAR_19->partno;

  return 0;
}
