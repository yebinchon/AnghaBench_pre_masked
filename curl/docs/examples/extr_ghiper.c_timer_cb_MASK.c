
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gpointer ;
typedef int gboolean ;
struct TYPE_3__ {int still_running; int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static gboolean FUNC_3(gpointer VAR_2)
{
  GlobalInfo *VAR_3 = (GlobalInfo *)VAR_2;
  CURLMcode VAR_4;

  VAR_4 = FUNC_1(VAR_3->multi,
                                VAR_0, 0, &VAR_3->still_running);
  FUNC_2("timer_cb: curl_multi_socket_action", VAR_4);
  FUNC_0(VAR_3);
  return VAR_1;
}
