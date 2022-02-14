
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct wlp* data; int cb; } ;
struct TYPE_5__ {int channel_changed; struct uwb_rc* rc; } ;
struct wlp {TYPE_3__ uwb_notifs_handler; struct uwb_rc* rc; TYPE_1__ pal; int eda; struct net_device* ndev; int * start_queue; int * stop_queue; int * xmit_frame; int * fill_device_info; } ;
struct uwb_rc {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uwb_rc*,TYPE_3__*) ;
 int FUNC_2 (struct uwb_rc*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

int FUNC_6(struct wlp *VAR_2, struct uwb_rc *VAR_3, struct net_device *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2->fill_device_info == ((void*)0));
 FUNC_0(VAR_2->xmit_frame == ((void*)0));
 FUNC_0(VAR_2->stop_queue == ((void*)0));
 FUNC_0(VAR_2->start_queue == ((void*)0));

 VAR_2->rc = VAR_3;
 VAR_2->ndev = VAR_4;
 FUNC_5(&VAR_2->eda);
 VAR_2->uwb_notifs_handler.cb = VAR_1;
 VAR_2->uwb_notifs_handler.data = VAR_2;
 FUNC_2(VAR_3, &VAR_2->uwb_notifs_handler);

 FUNC_3(&VAR_2->pal);
 VAR_2->pal.rc = VAR_3;
 VAR_2->pal.channel_changed = VAR_0;
 VAR_5 = FUNC_4(&VAR_2->pal);
 if (VAR_5 < 0)
  FUNC_1(VAR_2->rc, &VAR_2->uwb_notifs_handler);

 return VAR_5;
}
