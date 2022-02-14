
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {TYPE_3__ sin6_addr; void* sin6_port; void* sin6_family; TYPE_3__ sin_addr; void* sin_port; void* sin_family; } ;
struct TYPE_4__ {int sa; TYPE_2__ sa6; TYPE_2__ sa4; } ;
typedef TYPE_1__ srvr_sockaddr_union_t ;
typedef enum sockmode { ____Placeholder_sockmode } sockmode ;
typedef scalar_t__ curl_socket_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,char const*,TYPE_3__*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (int ) ;
 void* VAR_11 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int VAR_12 ;
 void* FUNC_3 (unsigned long) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 scalar_t__ VAR_14 ;
 void* FUNC_6 (int) ;
 int FUNC_7 () ;
 char* VAR_15 ;
 int FUNC_8 (scalar_t__*,scalar_t__,int*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 void* VAR_16 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 char* VAR_17 ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,void**) ;
 scalar_t__ FUNC_18 (void*,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (char*) ;
 unsigned long FUNC_22 (char*,char**,int) ;
 int FUNC_23 (char const*) ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int FUNC_24 () ;
 int FUNC_25 (char const*) ;
 int FUNC_26 (char*,int) ;

int FUNC_27(int VAR_24, char *VAR_25[])
{
  srvr_sockaddr_union_t VAR_26;
  curl_socket_t VAR_27 = VAR_3;
  curl_socket_t VAR_28 = VAR_3;
  int VAR_29 = 0;
  const char *VAR_30 = ".sockfilt.pid";
  bool VAR_31;
  int VAR_32;
  int VAR_33;
  int VAR_34 = 1;
  enum sockmode VAR_35 = VAR_7;
  const char *VAR_36 = ((void*)0);

  while(VAR_24>VAR_34) {
    if(!FUNC_19("--version", VAR_25[VAR_34])) {
      FUNC_11("sockfilt IPv4%s\n",



             ""

             );
      return 0;
    }
    else if(!FUNC_19("--verbose", VAR_25[VAR_34])) {
      VAR_22 = VAR_10;
      VAR_34++;
    }
    else if(!FUNC_19("--pidfile", VAR_25[VAR_34])) {
      VAR_34++;
      if(VAR_24>VAR_34)
        VAR_30 = VAR_25[VAR_34++];
    }
    else if(!FUNC_19("--logfile", VAR_25[VAR_34])) {
      VAR_34++;
      if(VAR_24>VAR_34)
        VAR_17 = VAR_25[VAR_34++];
    }
    else if(!FUNC_19("--ipv6", VAR_25[VAR_34])) {




      VAR_34++;
    }
    else if(!FUNC_19("--ipv4", VAR_25[VAR_34])) {





      VAR_34++;
    }
    else if(!FUNC_19("--bindonly", VAR_25[VAR_34])) {
      VAR_11 = VAR_10;
      VAR_34++;
    }
    else if(!FUNC_19("--port", VAR_25[VAR_34])) {
      VAR_34++;
      if(VAR_24>VAR_34) {
        char *VAR_37;
        unsigned long VAR_38 = FUNC_22(VAR_25[VAR_34], &VAR_37, 10);
        if((VAR_37 != VAR_25[VAR_34] + FUNC_21(VAR_25[VAR_34])) ||
           ((VAR_38 != 0UL) && ((VAR_38 < 1025UL) || (VAR_38 > 65535UL)))) {
          FUNC_5(VAR_18, "sockfilt: invalid --port argument (%s)\n",
                  VAR_25[VAR_34]);
          return 0;
        }
        VAR_16 = FUNC_3(VAR_38);
        VAR_34++;
      }
    }
    else if(!FUNC_19("--connect", VAR_25[VAR_34])) {


      VAR_34++;
      if(VAR_24>VAR_34) {
        char *VAR_39;
        unsigned long VAR_40 = FUNC_22(VAR_25[VAR_34], &VAR_39, 10);
        if((VAR_39 != VAR_25[VAR_34] + FUNC_21(VAR_25[VAR_34])) ||
           (VAR_40 < 1025UL) || (VAR_40 > 65535UL)) {
          FUNC_5(VAR_18, "sockfilt: invalid --connect argument (%s)\n",
                  VAR_25[VAR_34]);
          return 0;
        }
        VAR_12 = FUNC_3(VAR_40);
        VAR_34++;
      }
    }
    else if(!FUNC_19("--addr", VAR_25[VAR_34])) {

      VAR_34++;
      if(VAR_24>VAR_34) {
        VAR_36 = VAR_25[VAR_34];
        VAR_34++;
      }
    }
    else {
      FUNC_12("Usage: sockfilt [option]\n"
           " --version\n"
           " --verbose\n"
           " --logfile [file]\n"
           " --pidfile [file]\n"
           " --ipv4\n"
           " --ipv6\n"
           " --bindonly\n"
           " --port [port]\n"
           " --connect [port]\n"
           " --addr [address]");
      return 0;
    }
  }
  FUNC_7();




    VAR_27 = FUNC_18(VAR_1, VAR_9, 0);





  if(VAR_3 == VAR_27) {
    VAR_33 = VAR_8;
    FUNC_9("Error creating socket: (%d) %s",
           VAR_33, FUNC_20(VAR_33));
    FUNC_26("FAIL\n", 5);
    goto sockfilt_cleanup;
  }

  if(VAR_12) {

    VAR_35 = VAR_0;



      FUNC_10(&VAR_26.sa4, 0, sizeof(VAR_26.sa4));
      VAR_26.sa4.sin_family = VAR_1;
      VAR_26.sa4.sin_port = FUNC_6(VAR_12);
      VAR_26.sa4.sin_addr.s_addr = VAR_5;
      if(!VAR_36)
        VAR_36 = "127.0.0.1";
      FUNC_0(VAR_1, VAR_36, &VAR_26.sa4.sin_addr);

      VAR_32 = FUNC_2(VAR_27, &VAR_26.sa, sizeof(VAR_26.sa4));
    if(VAR_32) {
      VAR_33 = VAR_8;
      FUNC_9("Error connecting to port %hu: (%d) %s",
             VAR_12, VAR_33, FUNC_20(VAR_33));
      FUNC_26("FAIL\n", 5);
      goto sockfilt_cleanup;
    }
    FUNC_9("====> Client connect");
    VAR_28 = VAR_27;
  }
  else {

    VAR_27 = FUNC_17(VAR_27, &VAR_16);
    if(VAR_3 == VAR_27) {
      FUNC_26("FAIL\n", 5);
      goto sockfilt_cleanup;
    }
    VAR_28 = VAR_3;
  }

  FUNC_9("Running %s version", VAR_15);

  if(VAR_12)
    FUNC_9("Connected to port %hu", VAR_12);
  else if(VAR_11)
    FUNC_9("Bound without listening on port %hu", VAR_16);
  else
    FUNC_9("Listening on port %hu", VAR_16);

  VAR_29 = FUNC_25(VAR_30);
  if(!VAR_29) {
    FUNC_26("FAIL\n", 5);
    goto sockfilt_cleanup;
  }

  do {
    VAR_31 = FUNC_8(&VAR_28, VAR_27, &VAR_35);
  } while(VAR_31);

sockfilt_cleanup:

  if((VAR_28 != VAR_27) && (VAR_28 != VAR_3))
    FUNC_15(VAR_28);

  if(VAR_27 != VAR_3)
    FUNC_15(VAR_27);

  if(VAR_29)
    FUNC_23(VAR_30);

  FUNC_14();

  if(VAR_14) {
    FUNC_9("============> sockfilt exits with signal (%d)", VAR_13);





    FUNC_13(VAR_13);
  }

  FUNC_9("============> sockfilt quits");
  return 0;
}
