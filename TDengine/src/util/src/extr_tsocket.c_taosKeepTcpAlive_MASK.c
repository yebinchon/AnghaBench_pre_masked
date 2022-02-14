
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int probes ;
typedef int nodelay ;
typedef int interval ;
typedef int alivetime ;
typedef int alive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,void*,int) ;

int FUNC_4(int VAR_9) {
  int VAR_10 = 1;
  if (FUNC_3(VAR_9, VAR_1, VAR_3, (void *)&VAR_10, sizeof(VAR_10)) < 0) {
    FUNC_1("fd:%d setsockopt SO_KEEPALIVE failed: %d (%s)", VAR_9, VAR_8, FUNC_2(VAR_8));
    FUNC_0(VAR_9);
    return -1;
  }

  int VAR_11 = 3;
  if (FUNC_3(VAR_9, VAR_2, VAR_4, (void *)&VAR_11, sizeof(VAR_11)) < 0) {
    FUNC_1("fd:%d setsockopt SO_KEEPCNT failed: %d (%s)", VAR_9, VAR_8, FUNC_2(VAR_8));
    FUNC_0(VAR_9);
    return -1;
  }

  int VAR_12 = 10;
  if (FUNC_3(VAR_9, VAR_2, VAR_5, (void *)&VAR_12, sizeof(VAR_12)) < 0) {
    FUNC_1("fd:%d setsockopt SO_KEEPIDLE failed: %d (%s)", VAR_9, VAR_8, FUNC_2(VAR_8));
    FUNC_0(VAR_9);
    return -1;
  }

  int VAR_13 = 3;
  if (FUNC_3(VAR_9, VAR_2, VAR_6, (void *)&VAR_13, sizeof(VAR_13)) < 0) {
    FUNC_1("fd:%d setsockopt SO_KEEPINTVL failed: %d (%s)", VAR_9, VAR_8, FUNC_2(VAR_8));
    FUNC_0(VAR_9);
    return -1;
  }

  int VAR_14 = 1;
  if (FUNC_3(VAR_9, VAR_0, VAR_7, (void *)&VAR_14, sizeof(VAR_14)) < 0) {
    FUNC_1("fd:%d setsockopt TCP_NODELAY failed %d (%s)", VAR_9, VAR_8, FUNC_2(VAR_8));
    FUNC_0(VAR_9);
    return -1;
  }

  return 0;
}
