
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct itimerspec {int dummy; } ;
struct TYPE_4__ {scalar_t__ still_running; int tfd; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int,scalar_t__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct itimerspec*,int ,int) ;
 int FUNC_5 (int ,int ,struct itimerspec*,int *) ;

__attribute__((used)) static void FUNC_6(GlobalInfo *VAR_5, int VAR_6, int VAR_7)
{
  CURLMcode VAR_8;
  struct itimerspec VAR_9;

  int VAR_10 = ((VAR_7 & VAR_2) ? VAR_0 : 0) |
               ((VAR_7 & VAR_3) ? VAR_1 : 0);

  VAR_8 = FUNC_1(VAR_5->multi, VAR_6, VAR_10, &VAR_5->still_running);
  FUNC_3("event_cb: curl_multi_socket_action", VAR_8);

  FUNC_0(VAR_5);
  if(VAR_5->still_running <= 0) {
    FUNC_2(VAR_4, "last transfer done, kill timeout\n");
    FUNC_4(&VAR_9, 0, sizeof(struct itimerspec));
    FUNC_5(VAR_5->tfd, 0, &VAR_9, ((void*)0));
  }
}
