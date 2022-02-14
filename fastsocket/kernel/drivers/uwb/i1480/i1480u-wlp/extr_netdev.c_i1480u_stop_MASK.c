
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp {int pal; int wss; int * rc; } ;
struct net_device {int dummy; } ;
struct i1480u {int notif_urb; struct wlp wlp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i1480u*) ;
 int FUNC_2 (struct i1480u*) ;
 struct i1480u* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct net_device *VAR_0)
{
 struct i1480u *VAR_1 = FUNC_3(VAR_0);
 struct wlp *VAR_2 = &VAR_1->wlp;

 FUNC_0(VAR_2->rc == ((void*)0));
 FUNC_8(&VAR_2->wss);
 FUNC_4(VAR_0);



 FUNC_5(VAR_0);
 FUNC_7(&VAR_2->pal);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 return 0;
}
