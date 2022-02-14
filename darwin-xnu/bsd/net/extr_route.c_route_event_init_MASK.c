
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int dummy; } ;
struct route_event {int route_event_code; struct rtentry* gwrt; struct rtentry* rt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct route_event*,int) ;

void FUNC_2(struct route_event *VAR_0, struct rtentry *VAR_1,
    struct rtentry *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_1(VAR_0, sizeof(*VAR_0));

 VAR_0->rt = VAR_1;
 VAR_0->gwrt = VAR_2;
 VAR_0->route_event_code = VAR_3;
}
