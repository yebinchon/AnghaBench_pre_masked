
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_4 (int,char*,size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;

int FUNC_7(int VAR_5, char *VAR_6, int VAR_7) {
  FUNC_6(VAR_5, 1);

  int VAR_8, VAR_9, VAR_10;
  fd_set VAR_11;
  struct timeval VAR_12;

  VAR_8 = VAR_7;
  while (VAR_8 > 0) {
    VAR_12.tv_sec = 30;
    VAR_12.tv_usec = 0;
    FUNC_1(&VAR_11);
    FUNC_0(VAR_5, &VAR_11);
    if ((VAR_10 = FUNC_3(VAR_5 + 1, ((void*)0), &VAR_11, ((void*)0), &VAR_12)) == 0) {
      VAR_4 = VAR_2;
      FUNC_2("fd %d timeout, no enough space to write", VAR_5);
      break;

    } else if (VAR_10 < 0) {
      if (VAR_4 == VAR_1) continue;

      FUNC_2("select error, %d (%s)", VAR_4, FUNC_5(VAR_4));
      return -1;
    }

    VAR_9 = (int)FUNC_4(VAR_5, VAR_6, (size_t)VAR_8, VAR_3);
    if (VAR_9 <= 0) {
      if (VAR_4 == VAR_0 || VAR_4 == VAR_1) continue;

      FUNC_2("write error, %d (%s)", VAR_4, FUNC_5(VAR_4));
      return -1;
    }

    VAR_8 -= VAR_9;
    VAR_6 += VAR_9;
  }

  FUNC_6(VAR_5, 0);

  return (VAR_7 - VAR_8);
}
