
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;
struct evtchn_bind_interdomain {int remote_port; int local_port; int remote_dom; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_bind_interdomain*) ;
 int FUNC_1 (struct xenbus_device*,int,char*,int,int ) ;

int FUNC_2(struct xenbus_device *VAR_1, int VAR_2, int *VAR_3)
{
 struct evtchn_bind_interdomain VAR_4;
 int VAR_5;

 VAR_4.remote_dom = VAR_1->otherend_id;
 VAR_4.remote_port = VAR_2;

 VAR_5 = FUNC_0(VAR_0,
       &VAR_4);
 if (VAR_5)
  FUNC_1(VAR_1, VAR_5,
     "binding to event channel %d from domain %d",
     VAR_2, VAR_1->otherend_id);
 else
  *VAR_3 = VAR_4.local_port;

 return VAR_5;
}
