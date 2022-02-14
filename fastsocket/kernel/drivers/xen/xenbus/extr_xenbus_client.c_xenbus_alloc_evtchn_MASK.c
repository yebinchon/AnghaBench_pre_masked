
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;
struct evtchn_alloc_unbound {int port; int remote_dom; int dom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct evtchn_alloc_unbound*) ;
 int FUNC_1 (struct xenbus_device*,int,char*) ;

int FUNC_2(struct xenbus_device *VAR_2, int *VAR_3)
{
 struct evtchn_alloc_unbound VAR_4;
 int VAR_5;

 VAR_4.dom = VAR_0;
 VAR_4.remote_dom = VAR_2->otherend_id;

 VAR_5 = FUNC_0(VAR_1,
       &VAR_4);
 if (VAR_5)
  FUNC_1(VAR_2, VAR_5, "allocating event channel");
 else
  *VAR_3 = VAR_4.port;

 return VAR_5;
}
