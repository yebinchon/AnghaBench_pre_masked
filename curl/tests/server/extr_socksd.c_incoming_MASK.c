
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perclient {int used; scalar_t__ clientfd; scalar_t__ remotefd; scalar_t__ fromremote; scalar_t__ fromclient; } ;
typedef int ssize_t ;
typedef int fd_set ;
typedef scalar_t__ curl_socket_t ;
typedef int c ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct perclient*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct perclient*,int *) ;

__attribute__((used)) static bool FUNC_12(curl_socket_t VAR_8)
{
  fd_set VAR_9;
  fd_set VAR_10;
  fd_set VAR_11;
  int VAR_12 = 0;
  struct perclient VAR_13[2];

  FUNC_6(VAR_13, 0, sizeof(VAR_13));
  if(VAR_7) {
    FUNC_5("signalled to die, exiting...");
    return VAR_2;
  }
  do {
    int VAR_14;
    ssize_t VAR_15;
    int VAR_16 = 0;
    curl_socket_t VAR_17 = VAR_8;
    int VAR_18 = (int)VAR_17;

    FUNC_2(&VAR_9);
    FUNC_2(&VAR_10);
    FUNC_2(&VAR_11);


    FUNC_1(VAR_17, &VAR_9);

    for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
      if(VAR_13[VAR_14].used) {
        curl_socket_t VAR_19 = VAR_13[VAR_14].clientfd;
        FUNC_1(VAR_19, &VAR_9);
        if((int)VAR_19 > VAR_18)
          VAR_18 = (int)VAR_19;
        VAR_19 = VAR_13[VAR_14].remotefd;
        FUNC_1(VAR_19, &VAR_9);
        if((int)VAR_19 > VAR_18)
          VAR_18 = (int)VAR_19;
      }
    }

    do {

      VAR_15 = FUNC_8(VAR_18 + 1, &VAR_9, &VAR_10, &VAR_11, ((void*)0));
      if(VAR_7) {
        FUNC_5("signalled to die, exiting...");
        return VAR_2;
      }
    } while((VAR_15 == -1) && ((VAR_16 = VAR_6) == VAR_1));

    if(VAR_15 < 0) {
      FUNC_5("select() failed with error: (%d) %s",
             VAR_16, FUNC_10(VAR_16));
      return VAR_2;
    }

    if((VAR_12 < 2) && FUNC_0(VAR_17, &VAR_9)) {
      curl_socket_t VAR_20 = FUNC_3(VAR_17, ((void*)0), ((void*)0));
      if(VAR_0 == VAR_20) {
        VAR_16 = VAR_3;
        FUNC_5("accept(%d, NULL, NULL) failed with error: (%d) %s",
               VAR_17, VAR_16, FUNC_10(VAR_16));
      }
      else {
        curl_socket_t VAR_21;
        FUNC_5("====> Client connect, fd %d. Read config from %s",
               VAR_20, VAR_5);
        VAR_21 = FUNC_9(VAR_20);
        if(VAR_21 == VAR_0) {
          FUNC_5("====> Client disconnect");
          FUNC_7(VAR_20);
        }
        else {
          struct perclient *VAR_22 = &VAR_13[0];
          FUNC_5("====> Tunnel transfer");

          if(VAR_13[0].used)
            VAR_22 = &VAR_13[1];
          VAR_22->fromremote = 0;
          VAR_22->fromclient = 0;
          VAR_22->clientfd = VAR_20;
          VAR_22->remotefd = VAR_21;
          VAR_22->used = VAR_4;
          VAR_12++;
        }

      }
    }
    for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
      struct perclient *VAR_23 = &VAR_13[VAR_14];
      if(VAR_23->used) {
        if(FUNC_11(VAR_23, &VAR_9)) {
          FUNC_5("SOCKS transfer completed. Bytes: < %zu > %zu",
                 VAR_23->fromremote, VAR_23->fromclient);
          FUNC_7(VAR_23->clientfd);
          FUNC_7(VAR_23->remotefd);
          VAR_23->used = VAR_2;
          VAR_12--;
        }
      }
    }
  } while(VAR_12);

  return VAR_4;
}
