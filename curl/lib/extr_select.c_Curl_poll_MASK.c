
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {scalar_t__ fd; int revents; int events; } ;
struct curltime {int member_1; int member_0; } ;
struct TYPE_8__ {scalar_t__ fd_count; } ;
typedef TYPE_1__ fd_set ;
typedef scalar_t__ curl_socket_t ;


 scalar_t__ VAR_0 ;
 struct curltime FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
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
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct pollfd*,unsigned int,int) ;
 int FUNC_9 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,struct timeval*) ;

int FUNC_10(struct pollfd VAR_12[], unsigned int VAR_13, int VAR_14)
{

  struct timeval VAR_15;
  struct timeval *VAR_16;
  fd_set VAR_17;
  fd_set VAR_18;
  fd_set VAR_19;
  curl_socket_t VAR_20;

  struct curltime VAR_21 = {0, 0};
  bool VAR_22 = VAR_11;
  unsigned int VAR_23;
  int VAR_24 = 0;
  int VAR_25;

  if(VAR_12) {
    for(VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
      if(VAR_12[VAR_23].fd != VAR_0) {
        VAR_22 = VAR_1;
        break;
      }
    }
  }
  if(VAR_22) {
    VAR_25 = FUNC_1(VAR_14);
    return VAR_25;
  }






  if(VAR_14 > 0) {
    VAR_24 = VAR_14;
    VAR_21 = FUNC_0();
  }
  FUNC_6(&VAR_17);
  FUNC_6(&VAR_18);
  FUNC_6(&VAR_19);
  VAR_20 = (curl_socket_t)-1;

  for(VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
    VAR_12[VAR_23].revents = 0;
    if(VAR_12[VAR_23].fd == VAR_0)
      continue;
    FUNC_7(VAR_12[VAR_23].fd);
    if(VAR_12[VAR_23].events & (VAR_4|VAR_5|VAR_6|
                          VAR_8|VAR_9|VAR_7)) {
      if(VAR_12[VAR_23].fd > VAR_20)
        VAR_20 = VAR_12[VAR_23].fd;
      if(VAR_12[VAR_23].events & (VAR_8|VAR_4))
        FUNC_5(VAR_12[VAR_23].fd, &VAR_17);
      if(VAR_12[VAR_23].events & (VAR_9|VAR_5))
        FUNC_5(VAR_12[VAR_23].fd, &VAR_18);
      if(VAR_12[VAR_23].events & (VAR_7|VAR_6))
        FUNC_5(VAR_12[VAR_23].fd, &VAR_19);
    }
  }
  VAR_16 = (VAR_14 < 0) ? ((void*)0) : &VAR_15;

  do {
    int VAR_26;
    if(VAR_14 > 0) {
      VAR_15.tv_sec = VAR_24 / 1000;
      VAR_15.tv_usec = (VAR_24 % 1000) * 1000;
    }
    else if(!VAR_14) {
      VAR_15.tv_sec = 0;
      VAR_15.tv_usec = 0;
    }
    VAR_25 = FUNC_9((int)VAR_20 + 1, &VAR_17, &VAR_18, &VAR_19, VAR_16);

    if(VAR_25 != -1)
      break;
    VAR_26 = VAR_10;
    if(VAR_26 && FUNC_3(VAR_26))
      break;
    if(VAR_14 > 0) {
      VAR_24 = VAR_14 - FUNC_2();
      if(VAR_24 <= 0) {
        VAR_25 = 0;
        break;
      }
    }
  } while(VAR_25 == -1);

  if(VAR_25 < 0)
    return -1;
  if(VAR_25 == 0)
    return 0;

  VAR_25 = 0;
  for(VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
    VAR_12[VAR_23].revents = 0;
    if(VAR_12[VAR_23].fd == VAR_0)
      continue;
    if(FUNC_4(VAR_12[VAR_23].fd, &VAR_17))
      VAR_12[VAR_23].revents |= VAR_4;
    if(FUNC_4(VAR_12[VAR_23].fd, &VAR_18))
      VAR_12[VAR_23].revents |= VAR_5;
    if(FUNC_4(VAR_12[VAR_23].fd, &VAR_19))
      VAR_12[VAR_23].revents |= VAR_6;
    if(VAR_12[VAR_23].revents != 0)
      VAR_25++;
  }



  return VAR_25;
}
