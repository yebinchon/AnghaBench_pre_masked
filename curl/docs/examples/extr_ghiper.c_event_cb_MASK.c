
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
typedef int gboolean ;
struct TYPE_3__ {scalar_t__ timer_event; scalar_t__ still_running; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int GIOCondition ;
typedef int GIOChannel ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static gboolean FUNC_6(GIOChannel *VAR_6, GIOCondition VAR_7, gpointer VAR_8)
{
  GlobalInfo *VAR_9 = (GlobalInfo*) VAR_8;
  CURLMcode VAR_10;
  int VAR_11 = FUNC_3(VAR_6);

  int VAR_12 =
    ((VAR_7 & VAR_3) ? VAR_0 : 0) |
    ((VAR_7 & VAR_4) ? VAR_1 : 0);

  VAR_10 = FUNC_2(VAR_9->multi, VAR_11, VAR_12, &VAR_9->still_running);
  FUNC_5("event_cb: curl_multi_socket_action", VAR_10);

  FUNC_1(VAR_9);
  if(VAR_9->still_running) {
    return VAR_5;
  }
  else {
    FUNC_0("last transfer done, kill timeout\n");
    if(VAR_9->timer_event) {
      FUNC_4(VAR_9->timer_event);
    }
    return VAR_2;
  }
}
