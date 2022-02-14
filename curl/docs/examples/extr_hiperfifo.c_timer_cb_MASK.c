
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int still_running; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLMcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1, short VAR_2, void *VAR_3)
{
  GlobalInfo *VAR_4 = (GlobalInfo *)VAR_3;
  CURLMcode VAR_5;
  (void)VAR_1;
  (void)VAR_2;

  VAR_5 = FUNC_1(VAR_4->multi,
                                  VAR_0, 0, &VAR_4->still_running);
  FUNC_2("timer_cb: curl_multi_socket_action", VAR_5);
  FUNC_0(VAR_4);
}
