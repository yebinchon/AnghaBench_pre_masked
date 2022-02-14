
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ curl_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_8 ;
 unsigned short VAR_9 ;
 char* VAR_10 ;
 int FUNC_2 (unsigned long) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 char* VAR_13 ;
 int FUNC_7 (char*,...) ;
 int VAR_14 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 char* VAR_15 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,int *) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 unsigned long FUNC_19 (char*,char**,int) ;
 int FUNC_20 (char const*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_21 () ;
 int FUNC_22 (char const*) ;

int FUNC_23(int VAR_21, char *VAR_22[])
{
  curl_socket_t VAR_23 = VAR_2;
  curl_socket_t VAR_24 = VAR_2;
  int VAR_25 = 0;
  const char *VAR_26 = ".socksd.pid";
  bool VAR_27;
  int VAR_28;
  int VAR_29 = 1;

  while(VAR_21>VAR_29) {
    if(!FUNC_16("--version", VAR_22[VAR_29])) {
      FUNC_8("socksd IPv4%s\n",



             ""

             );
      return 0;
    }
    else if(!FUNC_16("--pidfile", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29)
        VAR_26 = VAR_22[VAR_29++];
    }
    else if(!FUNC_16("--config", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29)
        VAR_10 = VAR_22[VAR_29++];
    }
    else if(!FUNC_16("--backend", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29)
        VAR_8 = VAR_22[VAR_29++];
    }
    else if(!FUNC_16("--backendport", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29)
        VAR_9 = (unsigned short)FUNC_1(VAR_22[VAR_29++]);
    }
    else if(!FUNC_16("--logfile", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29)
        VAR_15 = VAR_22[VAR_29++];
    }
    else if(!FUNC_16("--ipv6", VAR_22[VAR_29])) {




      VAR_29++;
    }
    else if(!FUNC_16("--ipv4", VAR_22[VAR_29])) {





      VAR_29++;
    }
    else if(!FUNC_16("--port", VAR_22[VAR_29])) {
      VAR_29++;
      if(VAR_21>VAR_29) {
        char *VAR_30;
        unsigned long VAR_31 = FUNC_19(VAR_22[VAR_29], &VAR_30, 10);
        if((VAR_30 != VAR_22[VAR_29] + FUNC_18(VAR_22[VAR_29])) ||
           ((VAR_31 != 0UL) && ((VAR_31 < 1025UL) || (VAR_31 > 65535UL)))) {
          FUNC_4(VAR_16, "socksd: invalid --port argument (%s)\n",
                  VAR_22[VAR_29]);
          return 0;
        }
        VAR_14 = FUNC_2(VAR_31);
        VAR_29++;
      }
    }
    else {
      FUNC_9("Usage: socksd [option]\n"
           " --backend [ipv4 addr]\n"
           " --backendport [TCP port]\n"
           " --config [file]\n"
           " --version\n"
           " --logfile [file]\n"
           " --pidfile [file]\n"
           " --ipv4\n"
           " --ipv6\n"
           " --bindonly\n"
           " --port [port]\n");
      return 0;
    }
  }
  FUNC_6();




    VAR_23 = FUNC_15(VAR_0, VAR_6, 0);





  if(VAR_2 == VAR_23) {
    VAR_28 = VAR_5;
    FUNC_7("Error creating socket: (%d) %s",
           VAR_28, FUNC_17(VAR_28));
    goto socks5_cleanup;
  }

  {

    VAR_23 = FUNC_14(VAR_23, &VAR_14);
    if(VAR_2 == VAR_23) {
      goto socks5_cleanup;
    }
    VAR_24 = VAR_2;
  }

  FUNC_7("Running %s version", VAR_13);
  FUNC_7("Listening on port %hu", VAR_14);

  VAR_25 = FUNC_22(VAR_26);
  if(!VAR_25) {
    goto socks5_cleanup;
  }

  do {
    VAR_27 = FUNC_5(VAR_23);
  } while(VAR_27);

socks5_cleanup:

  if((VAR_24 != VAR_23) && (VAR_24 != VAR_2))
    FUNC_12(VAR_24);

  if(VAR_23 != VAR_2)
    FUNC_12(VAR_23);

  if(VAR_25)
    FUNC_20(VAR_26);

  FUNC_11();

  if(VAR_12) {
    FUNC_7("============> socksd exits with signal (%d)", VAR_11);





    FUNC_10(VAR_11);
  }

  FUNC_7("============> socksd quits");
  return 0;
}
