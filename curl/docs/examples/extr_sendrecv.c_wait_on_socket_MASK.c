
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int fd_set ;
typedef scalar_t__ curl_socket_t ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_3(curl_socket_t VAR_0, int VAR_1, long VAR_2)
{
  struct timeval VAR_3;
  fd_set VAR_4, VAR_5, VAR_6;
  int VAR_7;

  VAR_3.tv_sec = VAR_2 / 1000;
  VAR_3.tv_usec = (VAR_2 % 1000) * 1000;

  FUNC_1(&VAR_4);
  FUNC_1(&VAR_5);
  FUNC_1(&VAR_6);

  FUNC_0(VAR_0, &VAR_6);

  if(VAR_1) {
    FUNC_0(VAR_0, &VAR_4);
  }
  else {
    FUNC_0(VAR_0, &VAR_5);
  }


  VAR_7 = FUNC_2((int)VAR_0 + 1, &VAR_4, &VAR_5, &VAR_6, &VAR_3);
  return VAR_7;
}
