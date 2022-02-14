
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int ipstr; int fd; int timer; int parsed; } ;
struct TYPE_18__ {TYPE_1__* pServer; } ;
struct TYPE_17__ {int timerHandle; } ;
typedef TYPE_2__ HttpThread ;
typedef TYPE_3__ HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (int ,int ,TYPE_3__*,int ,int *) ;

bool FUNC_10(HttpThread *VAR_4, HttpContext *VAR_5) {
  if (!VAR_5->parsed) {
    FUNC_5(VAR_5);
  }

  if (!FUNC_7(VAR_5)) {
    FUNC_2(VAR_4, VAR_5);
    return 0;
  }

  if (!FUNC_6(VAR_5)) {
    FUNC_2(VAR_4, VAR_5);
    return 0;
  }

  int VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 == VAR_0) {
    FUNC_9(VAR_3, VAR_2, VAR_5, VAR_4->pServer->timerHandle, &VAR_5->timer);
    FUNC_8("context:%p, fd:%d, ip:%s, not finished yet, try another times, timer:%p", VAR_5, VAR_5->fd, VAR_5->ipstr, VAR_5->timer);
    return 0;
  } else if (VAR_6 == VAR_1){
    FUNC_1(VAR_5);
    if (FUNC_3(VAR_5)) {
      return 1;
    } else {
      FUNC_2(VAR_4, VAR_5);
      return 0;
    }
  } else {
    FUNC_1(VAR_5);
    FUNC_4("context:%p, fd:%d, ip:%s, failed to read http body, close connect", VAR_5, VAR_5->fd, VAR_5->ipstr);
    FUNC_2(VAR_4, VAR_5);
    return 0;
  }
}
