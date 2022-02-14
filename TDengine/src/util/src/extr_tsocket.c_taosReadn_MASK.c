
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,char*,size_t) ;

int FUNC_6(int VAR_3, char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7, VAR_8 = VAR_5;

  fd_set VAR_9;
  struct timeval VAR_10;

  while (VAR_8 > 0) {
    VAR_10.tv_sec = 30;
    VAR_10.tv_usec = 0;
    FUNC_1(&VAR_9);
    FUNC_0(VAR_3, &VAR_9);
    if ((VAR_7 = FUNC_3(VAR_3 + 1, ((void*)0), &VAR_9, ((void*)0), &VAR_10)) == 0) {
      VAR_2 = VAR_1;
      FUNC_2("fd %d timeout\n", VAR_3);
      break;
    } else if (VAR_7 < 0) {
      if (VAR_2 == VAR_0) continue;
      FUNC_2("select error, %d (%s)", VAR_2, FUNC_4(VAR_2));
      return -1;
    }

    if ((VAR_6 = (int)FUNC_5(VAR_3, VAR_4, (size_t)VAR_8)) < 0) {
      if (VAR_2 == VAR_0) continue;
      FUNC_2("read error, %d (%s)", VAR_2, FUNC_4(VAR_2));
      return -1;

    } else if (VAR_6 == 0) {
      FUNC_2("fd %d EOF", VAR_3);
      break;
    }

    VAR_8 -= VAR_6;
    VAR_4 += VAR_6;
  }

  return (VAR_5 - VAR_8);
}
