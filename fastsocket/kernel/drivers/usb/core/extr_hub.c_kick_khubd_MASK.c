
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {int event_list; int disconnected; int intfdev; } ;
struct TYPE_2__ {int pm_usage_cnt; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_hub *VAR_3)
{
 unsigned long VAR_4;


 FUNC_0(&FUNC_5(VAR_3->intfdev)->pm_usage_cnt, 1);

 FUNC_3(&VAR_1, VAR_4);
 if (!VAR_3->disconnected && FUNC_2(&VAR_3->event_list)) {
  FUNC_1(&VAR_3->event_list, &VAR_0);
  FUNC_6(&VAR_2);
 }
 FUNC_4(&VAR_1, VAR_4);
}
