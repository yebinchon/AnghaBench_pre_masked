
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int,int,int,int,int,int,int ) ;
 int FUNC_4 () ;

char *FUNC_5(char *VAR_0) {
  struct tm VAR_1, *VAR_2;
  struct timeval VAR_3;
  time_t VAR_4;

  FUNC_0(&VAR_3, ((void*)0));
  VAR_4 = VAR_3.tv_sec;
  VAR_2 = FUNC_1(&VAR_4, &VAR_1);


  FUNC_3(VAR_0, "%02d/%02d %02d:%02d:%02d.%06d 0x%lld ", VAR_2->tm_mon + 1, VAR_2->tm_mday, VAR_2->tm_hour, VAR_2->tm_min,
          VAR_2->tm_sec, (int)VAR_3.tv_usec, FUNC_4());




  return VAR_0;
}
