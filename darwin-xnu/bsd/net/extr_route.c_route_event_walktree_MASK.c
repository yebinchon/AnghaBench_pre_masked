
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; struct rtentry* rt_gwroute; } ;
struct route_event {int route_event_code; struct rtentry* rt; } ;
struct radix_node {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct rtentry*,struct rtentry*,int ,int *,int ) ;

int
FUNC_4(struct radix_node *VAR_5, void *VAR_6)
{
 struct route_event *VAR_7 = (struct route_event *)VAR_6;
 struct rtentry *VAR_8 = (struct rtentry *)VAR_5;
 struct rtentry *VAR_9 = VAR_7->rt;

 FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_8);


 if (VAR_8->rt_flags & VAR_2) {
  FUNC_2(VAR_8);
  return (0);
 }


 if (!(VAR_8->rt_flags & VAR_1)) {
  FUNC_2(VAR_8);
  return (0);
 }

 if (VAR_8->rt_gwroute != VAR_9) {
  FUNC_2(VAR_8);
  return (0);
 }

 FUNC_3(VAR_8, VAR_9, VAR_7->route_event_code,
     ((void*)0), VAR_3);
 FUNC_2(VAR_8);

 return (0);
}
