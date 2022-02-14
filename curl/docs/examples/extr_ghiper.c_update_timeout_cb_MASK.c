
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_3__ {int timer_event; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLM ;


 int FUNC_0 (char*,long,long,long) ;
 int FUNC_1 (long,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(CURLM *VAR_1, long VAR_2, void *VAR_3)
{
  struct timeval VAR_4;
  GlobalInfo *VAR_5 = (GlobalInfo *)VAR_3;
  VAR_4.tv_sec = VAR_2/1000;
  VAR_4.tv_usec = (VAR_2%1000)*1000;

  FUNC_0("*** update_timeout_cb %ld => %ld:%ld ***\n",
          VAR_2, VAR_4.tv_sec, VAR_4.tv_usec);







  if(VAR_2 >= 0)
    VAR_5->timer_event = FUNC_1(VAR_2, VAR_0, VAR_5);
  return 0;
}
