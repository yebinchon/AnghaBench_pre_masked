
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct httprequest {scalar_t__ testno; int partno; scalar_t__ open; void* pipelining; void* sin6_port; int sin6_addr; void* sin6_family; void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct TYPE_4__ {int sa; struct httprequest sa6; struct httprequest sa4; } ;
typedef TYPE_2__ srvr_sockaddr_union_t ;
typedef int req ;
typedef int flag ;
typedef scalar_t__ curl_socket_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (int ) ;
 unsigned short FUNC_4 (unsigned long) ;
 int VAR_16 ;
 int FUNC_5 (int ,char*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct httprequest*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_17 ;
 void* FUNC_8 (unsigned short) ;
 int VAR_18 ;
 int FUNC_9 () ;
 char* VAR_19 ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct httprequest*,int ,int) ;
 char* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__,struct httprequest*) ;
 char* VAR_24 ;
 int VAR_25 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__,int ,int ,void*,int) ;
 scalar_t__ FUNC_21 (void*,int ,int ) ;
 int VAR_26 ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (char*) ;
 unsigned long FUNC_25 (char*,char**,int) ;
 int FUNC_26 (char const*) ;
 void* VAR_27 ;
 int VAR_28 ;
 int FUNC_27 () ;
 int FUNC_28 (char const*) ;

int FUNC_29(int VAR_29, char *VAR_30[])
{
  srvr_sockaddr_union_t VAR_31;
  curl_socket_t VAR_32 = VAR_2;
  curl_socket_t VAR_33 = VAR_2;
  int VAR_34 = 0;
  int VAR_35;
  unsigned short VAR_36 = VAR_3;
  const char *VAR_37 = ".rtsp.pid";
  struct httprequest VAR_38;
  int VAR_39;
  int VAR_40;
  int VAR_41 = 1;
  long VAR_42;

  FUNC_12(&VAR_38, 0, sizeof(VAR_38));

  while(VAR_29>VAR_41) {
    if(!FUNC_22("--version", VAR_30[VAR_41])) {
      FUNC_13("rtspd IPv4%s"
             "\n"
             ,



             ""

             );
      return 0;
    }
    else if(!FUNC_22("--pidfile", VAR_30[VAR_41])) {
      VAR_41++;
      if(VAR_29>VAR_41)
        VAR_37 = VAR_30[VAR_41++];
    }
    else if(!FUNC_22("--logfile", VAR_30[VAR_41])) {
      VAR_41++;
      if(VAR_29>VAR_41)
        VAR_24 = VAR_30[VAR_41++];
    }
    else if(!FUNC_22("--ipv4", VAR_30[VAR_41])) {




      VAR_41++;
    }
    else if(!FUNC_22("--ipv6", VAR_30[VAR_41])) {




      VAR_41++;
    }
    else if(!FUNC_22("--port", VAR_30[VAR_41])) {
      VAR_41++;
      if(VAR_29>VAR_41) {
        char *VAR_43;
        unsigned long VAR_44 = FUNC_25(VAR_30[VAR_41], &VAR_43, 10);
        if((VAR_43 != VAR_30[VAR_41] + FUNC_24(VAR_30[VAR_41])) ||
           (VAR_44 < 1025UL) || (VAR_44 > 65535UL)) {
          FUNC_5(VAR_26, "rtspd: invalid --port argument (%s)\n",
                  VAR_30[VAR_41]);
          return 0;
        }
        VAR_36 = FUNC_4(VAR_44);
        VAR_41++;
      }
    }
    else if(!FUNC_22("--srcdir", VAR_30[VAR_41])) {
      VAR_41++;
      if(VAR_29>VAR_41) {
        VAR_20 = VAR_30[VAR_41];
        VAR_41++;
      }
    }
    else {
      FUNC_14("Usage: rtspd [option]\n"
           " --version\n"
           " --logfile [file]\n"
           " --pidfile [file]\n"
           " --ipv4\n"
           " --ipv6\n"
           " --port [port]\n"
           " --srcdir [path]");
      return 0;
    }
  }






  FUNC_9();

  VAR_42 = (long)FUNC_7();




    VAR_32 = FUNC_21(VAR_0, VAR_11, 0);





  if(VAR_2 == VAR_32) {
    VAR_40 = VAR_10;
    FUNC_11("Error creating socket: (%d) %s",
           VAR_40, FUNC_23(VAR_40));
    goto server_cleanup;
  }

  VAR_35 = 1;
  if(0 != FUNC_20(VAR_32, VAR_12, VAR_13,
            (void *)&VAR_35, sizeof(VAR_35))) {
    VAR_40 = VAR_10;
    FUNC_11("setsockopt(SO_REUSEADDR) failed with error: (%d) %s",
           VAR_40, FUNC_23(VAR_40));
    goto server_cleanup;
  }




    FUNC_12(&VAR_31.sa4, 0, sizeof(VAR_31.sa4));
    VAR_31.sa4.sin_family = VAR_0;
    VAR_31.sa4.sin_addr.s_addr = VAR_7;
    VAR_31.sa4.sin_port = FUNC_8(VAR_36);
    VAR_39 = FUNC_2(VAR_32, &VAR_31.sa, sizeof(VAR_31.sa4));
  if(0 != VAR_39) {
    VAR_40 = VAR_10;
    FUNC_11("Error binding socket on port %hu: (%d) %s",
           VAR_36, VAR_40, FUNC_23(VAR_40));
    goto server_cleanup;
  }

  FUNC_11("Running %s version on port %d", VAR_19, (int)VAR_36);


  VAR_39 = FUNC_10(VAR_32, 5);
  if(0 != VAR_39) {
    VAR_40 = VAR_10;
    FUNC_11("listen() failed with error: (%d) %s",
           VAR_40, FUNC_23(VAR_40));
    goto server_cleanup;
  }






  VAR_34 = FUNC_28(VAR_37);
  if(!VAR_34)
    goto server_cleanup;

  for(;;) {
    VAR_33 = FUNC_0(VAR_32, ((void*)0), ((void*)0));

    if(VAR_17)
      break;
    if(VAR_2 == VAR_33) {
      VAR_40 = VAR_10;
      FUNC_11("MAJOR ERROR: accept() failed with error: (%d) %s",
             VAR_40, FUNC_23(VAR_40));
      break;
    }







    FUNC_19(VAR_9);
    VAR_25 = 1;

    FUNC_11("====> Client connect");
    VAR_38.pipelining = VAR_6;

    do {
      if(VAR_17)
        break;

      if(FUNC_6(VAR_33, &VAR_38))

        break;

      if(VAR_21) {

        if((VAR_38.testno == VAR_23) &&
           (VAR_38.partno == VAR_22)) {
          VAR_38.partno++;
          FUNC_11("BOUNCE part number to %ld", VAR_38.partno);
        }
        else {
          VAR_21 = VAR_6;
          VAR_23 = -1;
          VAR_22 = -1;
        }
      }

      FUNC_18(VAR_33, &VAR_38);
      if(VAR_17)
        break;

      if((VAR_38.testno < 0) && (VAR_38.testno != VAR_4)) {
        FUNC_11("special request received, no persistency");
        break;
      }
      if(!VAR_38.open) {
        FUNC_11("instructed to close connection after server-reply");
        break;
      }

      if(VAR_38.open)
        FUNC_11("=> persistent connection request ended, awaits new request");

    } while(VAR_38.open || (VAR_38.testno == VAR_4));

    if(VAR_17)
      break;

    FUNC_11("====> Client disconnect");
    FUNC_17(VAR_33);
    VAR_33 = VAR_2;

    if(VAR_25) {
      VAR_25 = 0;
      FUNC_3(VAR_9);
    }

    if(VAR_38.testno == VAR_5)
      break;
  }

server_cleanup:

  if((VAR_33 != VAR_32) && (VAR_33 != VAR_2))
    FUNC_17(VAR_33);

  if(VAR_32 != VAR_2)
    FUNC_17(VAR_32);

  if(VAR_17)
    FUNC_11("signalled to die");

  if(VAR_34)
    FUNC_26(VAR_37);

  if(VAR_25) {
    VAR_25 = 0;
    FUNC_3(VAR_9);
  }

  FUNC_16();

  if(VAR_17) {
    FUNC_11("========> %s rtspd (port: %d pid: %ld) exits with signal (%d)",
           VAR_19, (int)VAR_36, VAR_42, VAR_16);





    FUNC_15(VAR_16);
  }

  FUNC_11("========> rtspd quits");
  return 0;
}
