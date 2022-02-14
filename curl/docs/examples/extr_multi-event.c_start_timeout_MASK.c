
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int CURLM ;


 int FUNC_0 (int ,struct timeval*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(CURLM *VAR_1, long VAR_2, void *VAR_3)
{
  if(VAR_2 < 0) {
    FUNC_1(VAR_0);
  }
  else {
    if(VAR_2 == 0)
      VAR_2 = 1;

    struct timeval VAR_4;
    VAR_4.tv_sec = VAR_2 / 1000;
    VAR_4.tv_usec = (VAR_2 % 1000) * 1000;
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, &VAR_4);
  }
  return 0;
}
