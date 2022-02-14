
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct rlimit {void* rlim_max; void* rlim_cur; } ;
struct in_addr {int dummy; } ;
struct TYPE_2__ {int listen_fd; int param_port; struct in_addr listenip; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (struct in_addr,int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,void*,void*) ;
 int FUNC_5 (int ,struct rlimit*) ;

void FUNC_6(void)
{
 int VAR_6, VAR_7;
 struct rlimit VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++){
  struct in_addr VAR_9;
  uint16_t VAR_10;

  VAR_9 = VAR_4[VAR_7].listenip;
  VAR_10 = VAR_4[VAR_7].param_port;

  VAR_4[VAR_7].listen_fd = FUNC_2(VAR_9, VAR_10);
 }

 VAR_8.rlim_cur = VAR_3;
 VAR_8.rlim_max = VAR_3;

 VAR_6 = FUNC_5(VAR_1, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_3("Set core limit failed");
  FUNC_0();
 }

 FUNC_1(VAR_1, &VAR_8);
 FUNC_4("Core limit %ld %ld\n", VAR_8.rlim_cur, VAR_8.rlim_max);

 VAR_8.rlim_cur = VAR_0;
 VAR_8.rlim_max = VAR_0;

 VAR_6 = FUNC_5(VAR_2, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_3("Set open file limit failed");
  FUNC_0();
 }

 FUNC_1(VAR_2, &VAR_8);
 FUNC_4("Open file limit %ld %ld\n", VAR_8.rlim_cur, VAR_8.rlim_max);
}
