
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int events; int revents; scalar_t__ fd; } ;
struct curltime {int member_1; int member_0; } ;
struct TYPE_8__ {scalar_t__ fd_count; } ;
typedef TYPE_1__ fd_set ;
typedef scalar_t__ curl_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct curltime FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct pollfd*,int,int) ;
 int FUNC_9 (int,TYPE_1__*,TYPE_1__*,TYPE_1__*,struct timeval*) ;

int FUNC_10(curl_socket_t VAR_16,
                      curl_socket_t VAR_17,
                      curl_socket_t VAR_18,
                      time_t VAR_19)
{




  struct timeval VAR_20;
  struct timeval *VAR_21;
  fd_set VAR_22;
  fd_set VAR_23;
  fd_set VAR_24;
  curl_socket_t VAR_25;

  struct curltime VAR_26 = {0, 0};
  int VAR_27 = 0;
  int VAR_28;
  int VAR_29;







  if((VAR_16 == VAR_4) && (VAR_17 == VAR_4) &&
     (VAR_18 == VAR_4)) {

    VAR_28 = FUNC_1((int)VAR_19);
    return VAR_28;
  }






  if(VAR_19 > 0) {
    VAR_27 = (int)VAR_19;
    VAR_26 = FUNC_0();
  }
  FUNC_6(&VAR_24);
  VAR_25 = (curl_socket_t)-1;

  FUNC_6(&VAR_22);
  if(VAR_16 != VAR_4) {
    FUNC_7(VAR_16);
    FUNC_5(VAR_16, &VAR_22);
    FUNC_5(VAR_16, &VAR_24);
    VAR_25 = VAR_16;
  }
  if(VAR_17 != VAR_4) {
    FUNC_7(VAR_17);
    FUNC_5(VAR_17, &VAR_22);
    FUNC_5(VAR_17, &VAR_24);
    if(VAR_17 > VAR_25)
      VAR_25 = VAR_17;
  }

  FUNC_6(&VAR_23);
  if(VAR_18 != VAR_4) {
    FUNC_7(VAR_18);
    FUNC_5(VAR_18, &VAR_23);
    FUNC_5(VAR_18, &VAR_24);
    if(VAR_18 > VAR_25)
      VAR_25 = VAR_18;
  }

  VAR_21 = (VAR_19 < 0) ? ((void*)0) : &VAR_20;

  do {
    int VAR_30;
    if(VAR_19 > 0) {
      VAR_20.tv_sec = VAR_27 / 1000;
      VAR_20.tv_usec = (VAR_27 % 1000) * 1000;
    }
    else if(!VAR_19) {
      VAR_20.tv_sec = 0;
      VAR_20.tv_usec = 0;
    }
    VAR_28 = FUNC_9((int)VAR_25 + 1, &VAR_22, &VAR_23, &VAR_24, VAR_21);


    if(VAR_28 != -1)
      break;
    VAR_30 = VAR_15;
    if(VAR_30 && FUNC_3(VAR_30))
      break;
    if(VAR_19 > 0) {
      VAR_27 = (int)(VAR_19 - FUNC_2());
      if(VAR_27 <= 0) {
        VAR_28 = 0;
        break;
      }
    }
  } while(VAR_28 == -1);

  if(VAR_28 < 0)
    return -1;
  if(VAR_28 == 0)
    return 0;

  VAR_29 = 0;
  if(VAR_16 != VAR_4) {
    if(FUNC_4(VAR_16, &VAR_22))
      VAR_29 |= VAR_1;
    if(FUNC_4(VAR_16, &VAR_24))
      VAR_29 |= VAR_0;
  }
  if(VAR_17 != VAR_4) {
    if(FUNC_4(VAR_17, &VAR_22))
      VAR_29 |= VAR_2;
    if(FUNC_4(VAR_17, &VAR_24))
      VAR_29 |= VAR_0;
  }
  if(VAR_18 != VAR_4) {
    if(FUNC_4(VAR_18, &VAR_23))
      VAR_29 |= VAR_3;
    if(FUNC_4(VAR_18, &VAR_24))
      VAR_29 |= VAR_0;
  }

  return VAR_29;



}
