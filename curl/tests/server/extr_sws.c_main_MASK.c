
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long member_1; int member_0; } ;
struct stat {int st_mode; } ;
struct TYPE_3__ {int s_addr; } ;
struct httprequest {int sin_family; int sin6_family; int sun_family; scalar_t__ testno; int open; int connmon; int sun_path; void* sin6_port; int sin6_addr; void* sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_4__ {int sa; struct httprequest sau; struct httprequest sa6; struct httprequest sa4; } ;
typedef TYPE_2__ srvr_sockaddr_union_t ;
typedef int req ;
typedef int port_str ;
typedef int flag ;
typedef int fd_set ;
typedef int curl_socket_t ;





 int VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int) ;
 int* VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int *,int) ;
 scalar_t__ FUNC_9 (int,void*) ;
 unsigned short FUNC_10 (unsigned long) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_18 ;
 void* FUNC_13 (unsigned short) ;
 int VAR_19 ;
 int FUNC_14 (struct httprequest*) ;
 int FUNC_15 () ;
 void* VAR_20 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char const*,struct stat*) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (struct httprequest*,int ,int) ;
 int FUNC_21 (char*,int,char*,unsigned short) ;
 int VAR_21 ;
 char* VAR_22 ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 (int) ;
 int FUNC_26 (int,int *,int *,int *,struct timeval*) ;
 char* VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_27 (int,struct httprequest*,int,char const*) ;
 scalar_t__ FUNC_28 (int,int ,int ,void*,int) ;
 int FUNC_29 (int const,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_30 (char const*,int) ;
 int FUNC_31 (char*,char*) ;
 int FUNC_32 (int) ;
 int FUNC_33 (char const*) ;
 int FUNC_34 (int ,char const*,int) ;
 unsigned long FUNC_35 (char*,char**,int) ;
 int FUNC_36 (char const*) ;
 void* VAR_27 ;
 int FUNC_37 (int) ;
 int VAR_28 ;
 int FUNC_38 () ;
 int FUNC_39 (char const*) ;

int FUNC_40(int VAR_29, char *VAR_30[])
{
  srvr_sockaddr_union_t VAR_31;
  curl_socket_t VAR_32 = VAR_0;
  int VAR_33 = 0;
  int VAR_34;
  unsigned short VAR_35 = VAR_1;




  const char *VAR_36 = ".http.pid";
  struct httprequest VAR_37;
  int VAR_38 = 0;
  int VAR_39;
  int VAR_40 = 1;
  long VAR_41;
  const char *VAR_42 = "127.0.0.1";
  const char *VAR_43 = "IPv4";
  char VAR_44[11];
  const char *VAR_45 = VAR_44;


  size_t VAR_46;

  FUNC_20(&VAR_37, 0, sizeof(VAR_37));

  while(VAR_29>VAR_40) {
    if(!FUNC_31("--version", VAR_30[VAR_40])) {
      FUNC_22("sws IPv4"






          );
      return 0;
    }
    else if(!FUNC_31("--pidfile", VAR_30[VAR_40])) {
      VAR_40++;
      if(VAR_29>VAR_40)
        VAR_36 = VAR_30[VAR_40++];
    }
    else if(!FUNC_31("--logfile", VAR_30[VAR_40])) {
      VAR_40++;
      if(VAR_29>VAR_40)
        VAR_23 = VAR_30[VAR_40++];
    }
    else if(!FUNC_31("--gopher", VAR_30[VAR_40])) {
      VAR_40++;
      VAR_27 = VAR_13;
      VAR_15 = "\r\n";
    }
    else if(!FUNC_31("--ipv4", VAR_30[VAR_40])) {
      VAR_43 = "IPv4";
      VAR_25 = 130;
      VAR_45 = VAR_44;
      VAR_40++;
    }
    else if(!FUNC_31("--ipv6", VAR_30[VAR_40])) {





      VAR_40++;
    }
    else if(!FUNC_31("--unix-socket", VAR_30[VAR_40])) {
      VAR_40++;
      if(VAR_29>VAR_40) {
        VAR_40++;
      }
    }
    else if(!FUNC_31("--port", VAR_30[VAR_40])) {
      VAR_40++;
      if(VAR_29>VAR_40) {
        char *VAR_47;
        unsigned long VAR_48 = FUNC_35(VAR_30[VAR_40], &VAR_47, 10);
        if((VAR_47 != VAR_30[VAR_40] + FUNC_33(VAR_30[VAR_40])) ||
           (VAR_48 < 1025UL) || (VAR_48 > 65535UL)) {
          FUNC_11(VAR_26, "sws: invalid --port argument (%s)\n",
                  VAR_30[VAR_40]);
          return 0;
        }
        VAR_35 = FUNC_10(VAR_48);
        VAR_40++;
      }
    }
    else if(!FUNC_31("--srcdir", VAR_30[VAR_40])) {
      VAR_40++;
      if(VAR_29>VAR_40) {
        VAR_22 = VAR_30[VAR_40];
        VAR_40++;
      }
    }
    else if(!FUNC_31("--connect", VAR_30[VAR_40])) {



      VAR_40++;
      if(VAR_29>VAR_40) {
        VAR_42 = VAR_30[VAR_40];
        VAR_40++;
        VAR_20 = VAR_13;
        FUNC_17("Run as proxy, CONNECT to host %s", VAR_42);
      }
    }
    else {
      FUNC_22("Usage: sws [option]\n"
           " --version\n"
           " --logfile [file]\n"
           " --pidfile [file]\n"
           " --ipv4\n"
           " --ipv6\n"
           " --unix-socket [file]\n"
           " --port [port]\n"
           " --srcdir [path]\n"
           " --connect [ip4-addr]\n"
           " --gopher");
      return 0;
    }
  }

  FUNC_21(VAR_44, sizeof(VAR_44), "port %hu", VAR_35);






  FUNC_15();

  VAR_41 = (long)FUNC_12();

  VAR_32 = FUNC_29(VAR_25, VAR_9, 0);

  VAR_14[0] = VAR_32;
  VAR_21 = 1;

  if(VAR_0 == VAR_32) {
    VAR_39 = VAR_8;
    FUNC_17("Error creating socket: (%d) %s",
           VAR_39, FUNC_32(VAR_39));
    goto sws_cleanup;
  }

  VAR_34 = 1;
  if(0 != FUNC_28(VAR_32, VAR_10, VAR_11,
                     (void *)&VAR_34, sizeof(VAR_34))) {
    VAR_39 = VAR_8;
    FUNC_17("setsockopt(SO_REUSEADDR) failed with error: (%d) %s",
           VAR_39, FUNC_32(VAR_39));
    goto sws_cleanup;
  }
  if(0 != FUNC_9(VAR_32, VAR_13)) {
    VAR_39 = VAR_8;
    FUNC_17("curlx_nonblock failed with error: (%d) %s",
           VAR_39, FUNC_32(VAR_39));
    goto sws_cleanup;
  }

  switch(VAR_25) {
  case 130:
    FUNC_20(&VAR_31.sa4, 0, sizeof(VAR_31.sa4));
    VAR_31.sa4.sin_family = 130;
    VAR_31.sa4.sin_addr.s_addr = VAR_6;
    VAR_31.sa4.sin_port = FUNC_13(VAR_35);
    VAR_38 = FUNC_5(VAR_32, &VAR_31.sa, sizeof(VAR_31.sa4));
    break;
  }
  if(0 != VAR_38) {
    VAR_39 = VAR_8;
    FUNC_17("Error binding socket on %s: (%d) %s",
           VAR_45, VAR_39, FUNC_32(VAR_39));
    goto sws_cleanup;
  }

  FUNC_17("Running %s %s version on %s",
         VAR_27?"GOPHER":"HTTP", VAR_43, VAR_45);


  VAR_38 = FUNC_16(VAR_32, 5);
  if(0 != VAR_38) {
    VAR_39 = VAR_8;
    FUNC_17("listen() failed with error: (%d) %s",
           VAR_39, FUNC_32(VAR_39));
    goto sws_cleanup;
  }
  VAR_33 = FUNC_39(VAR_36);
  if(!VAR_33)
    goto sws_cleanup;





  FUNC_14(&VAR_37);

  for(;;) {
    fd_set VAR_49;
    fd_set VAR_50;
    struct timeval VAR_51 = {0, 250000L};
    curl_socket_t VAR_52 = (curl_socket_t)-1;


    for(VAR_46 = VAR_21 - 1; VAR_46 >= 1; --VAR_46) {
      if(VAR_0 == VAR_14[VAR_46]) {
        char *VAR_53 = (char *) (VAR_14 + VAR_46);
        char *VAR_54 = (char *) (VAR_14 + VAR_46 + 1);
        char *VAR_55 = (char *) (VAR_14 + VAR_21);
        FUNC_19(VAR_53, VAR_54, VAR_55 - VAR_54);
        VAR_21 -= 1;
      }
    }

    if(VAR_18)
      goto sws_cleanup;


    FUNC_2(&VAR_49);
    FUNC_2(&VAR_50);

    for(VAR_46 = 0; VAR_46 < VAR_21; ++VAR_46) {

      FUNC_1(VAR_14[VAR_46], &VAR_49);
      if(VAR_14[VAR_46] > VAR_52)
        VAR_52 = VAR_14[VAR_46];
    }

    if(VAR_18)
      goto sws_cleanup;

    do {
      VAR_38 = FUNC_26((int)VAR_52 + 1, &VAR_49, &VAR_50, ((void*)0), &VAR_51);
    } while(VAR_38 < 0 && VAR_16 == VAR_5 && !VAR_18);

    if(VAR_18)
      goto sws_cleanup;

    if(VAR_38 < 0) {
      VAR_39 = VAR_8;
      FUNC_17("select() failed with error: (%d) %s",
             VAR_39, FUNC_32(VAR_39));
      goto sws_cleanup;
    }

    if(VAR_38 == 0) {

      continue;
    }


    if(FUNC_0(VAR_14[0], &VAR_49)) {

      curl_socket_t VAR_56;
      do {
        VAR_56 = FUNC_3(VAR_32);
        FUNC_17("accept_connection %d returned %d", VAR_32, VAR_56);
        if(VAR_0 == VAR_56)
          goto sws_cleanup;
      } while(VAR_56 > 0);
    }


    for(VAR_46 = 1; VAR_46 < VAR_21; ++VAR_46) {
      if(FUNC_0(VAR_14[VAR_46], &VAR_49)) {
        if(VAR_18)
          goto sws_cleanup;


        do {
          VAR_38 = FUNC_27(VAR_14[VAR_46], &VAR_37, VAR_32,
                                  VAR_42);
          if(VAR_18)
            goto sws_cleanup;

          if(VAR_38 < 0) {
            FUNC_17("====> Client disconnect %d", VAR_37.connmon);

            if(VAR_37.connmon) {
              const char *VAR_57 = "[DISCONNECT]\n";
              FUNC_30(VAR_57, FUNC_33(VAR_57));
            }

            if(!VAR_37.open)




              FUNC_37(50);

            if(VAR_14[VAR_46] != VAR_0) {
              FUNC_25(VAR_14[VAR_46]);
              VAR_14[VAR_46] = VAR_0;
            }

            VAR_24 -= 1;
            if(!VAR_24)
              FUNC_6(VAR_7);

            if(VAR_37.testno == VAR_2)
              goto sws_cleanup;
          }


          if(VAR_38 != 0)
            FUNC_14(&VAR_37);
        } while(VAR_38 > 0);
      }
    }

    if(VAR_18)
      goto sws_cleanup;
  }

sws_cleanup:

  for(VAR_46 = 1; VAR_46 < VAR_21; ++VAR_46)
    if((VAR_14[VAR_46] != VAR_32) &&
     (VAR_14[VAR_46] != VAR_0))
      FUNC_25(VAR_14[VAR_46]);

  if(VAR_32 != VAR_0)
    FUNC_25(VAR_32);
  if(VAR_18)
    FUNC_17("signalled to die");

  if(VAR_33)
    FUNC_36(VAR_36);

  if(VAR_24) {
    VAR_24 = 0;
    FUNC_6(VAR_7);
  }

  FUNC_24();

  if(VAR_18) {
    FUNC_17("========> %s sws (%s pid: %ld) exits with signal (%d)",
           VAR_43, VAR_45, VAR_41, VAR_17);





    FUNC_23(VAR_17);
  }

  FUNC_17("========> sws quits");
  return 0;
}
