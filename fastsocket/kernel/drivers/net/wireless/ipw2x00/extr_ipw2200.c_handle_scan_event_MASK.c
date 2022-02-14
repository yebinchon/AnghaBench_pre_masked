
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct ipw_priv {int net_dev; int scan_event; scalar_t__ user_requested_scan; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_1)
{

 if (!VAR_1->user_requested_scan) {
  if (!FUNC_1(&VAR_1->scan_event))
   FUNC_4(&VAR_1->scan_event,
           FUNC_3(FUNC_2(4000)));
 } else {
  union iwreq_data VAR_2;

  VAR_1->user_requested_scan = 0;
  FUNC_0(&VAR_1->scan_event);

  VAR_2.data.length = 0;
  VAR_2.data.flags = 0;
  FUNC_5(VAR_1->net_dev, VAR_0, &VAR_2, ((void*)0));
 }
}
