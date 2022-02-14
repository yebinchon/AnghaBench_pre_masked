
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rtentry {int rt_flags; int rt_evhdlr_ctxt; } ;
struct route_event {int route_event_code; int rt_addr; int * evtag; struct rtentry* rt; } ;
typedef int * eventhandler_tag ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ,int,struct sockaddr*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct route_event *VAR_3 = (struct route_event *)VAR_2;
 struct rtentry *VAR_4 = VAR_3->rt;
 eventhandler_tag VAR_5 = VAR_3->evtag;
 int VAR_6 = VAR_3->route_event_code;

 if (VAR_6 == VAR_0) {
  FUNC_2(VAR_5 != ((void*)0));
  FUNC_0(&VAR_4->rt_evhdlr_ctxt, VAR_1,
      VAR_5);
  FUNC_4(VAR_4);
  return;
 }

 FUNC_1(&VAR_4->rt_evhdlr_ctxt, VAR_1, FUNC_3(VAR_4),
     VAR_6, (struct sockaddr *)&VAR_3->rt_addr,
     VAR_4->rt_flags);


 FUNC_4(VAR_4);

}
