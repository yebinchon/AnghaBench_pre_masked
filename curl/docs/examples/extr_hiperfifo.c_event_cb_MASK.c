
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ still_running; int timer_event; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_5, short VAR_6, void *VAR_7)
{
  GlobalInfo *VAR_8 = (GlobalInfo*) VAR_7;
  CURLMcode VAR_9;

  int VAR_10 =
    ((VAR_6 & VAR_2) ? VAR_0 : 0) |
    ((VAR_6 & VAR_3) ? VAR_1 : 0);

  VAR_9 = FUNC_1(VAR_8->multi, VAR_5, VAR_10, &VAR_8->still_running);
  FUNC_5("event_cb: curl_multi_socket_action", VAR_9);

  FUNC_0(VAR_8);
  if(VAR_8->still_running <= 0) {
    FUNC_4(VAR_4, "last transfer done, kill timeout\n");
    if(FUNC_3(&VAR_8->timer_event, ((void*)0))) {
      FUNC_2(&VAR_8->timer_event);
    }
  }
}
