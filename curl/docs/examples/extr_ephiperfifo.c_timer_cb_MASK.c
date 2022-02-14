
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ssize_t ;
struct TYPE_4__ {int tfd; int still_running; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLMcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(GlobalInfo* VAR_5, int VAR_6)
{
  CURLMcode VAR_7;
  uint64_t VAR_8 = 0;
  ssize_t VAR_9 = 0;

  VAR_9 = FUNC_5(VAR_5->tfd, &VAR_8, sizeof(uint64_t));
  if(VAR_9 == -1) {





    if(VAR_3 == VAR_1) {
      FUNC_2(VAR_2, "EAGAIN on tfd %d\n", VAR_5->tfd);
      return;
    }
  }
  if(VAR_9 != sizeof(uint64_t)) {
    FUNC_2(VAR_4, "read(tfd) == %zd", VAR_9);
    FUNC_4("read(tfd)");
  }

  VAR_7 = FUNC_1(VAR_5->multi,
                                  VAR_0, 0, &VAR_5->still_running);
  FUNC_3("timer_cb: curl_multi_socket_action", VAR_7);
  FUNC_0(VAR_5);
}
