
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_len; struct in_addr sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rtentry {int dummy; } ;
struct route {struct rtentry* ro_rt; int ro_dst; } ;
struct ifnet {int if_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct route*) ;
 scalar_t__ FUNC_1 (struct route*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ifnet*,struct route*) ;
 int FUNC_6 (struct ifnet*,struct route*) ;
 struct rtentry* FUNC_7 (struct sockaddr*,int ,int ,int ) ;

struct rtentry *
FUNC_8(struct ifnet *VAR_1, struct in_addr VAR_2)
{
 struct route VAR_3;
 struct sockaddr_in *VAR_4;

 VAR_4 = (struct sockaddr_in *)(void *)(&VAR_3.ro_dst);

 FUNC_6(VAR_1, &VAR_3);

 if (FUNC_1(&VAR_3) || VAR_2.s_addr != VAR_4->sin_addr.s_addr) {
  FUNC_0(&VAR_3);
  if (VAR_4->sin_family != VAR_0) {
   FUNC_4(&VAR_3.ro_dst, sizeof (VAR_3.ro_dst));
   VAR_4->sin_len = sizeof (VAR_3.ro_dst);
   VAR_4->sin_family = VAR_0;
  }
  VAR_4->sin_addr = VAR_2;

  FUNC_3(VAR_3.ro_rt == ((void*)0));
  VAR_3.ro_rt = FUNC_7((struct sockaddr *)VAR_4,
      0, 0, VAR_1->if_index);

  if (VAR_3.ro_rt != ((void*)0)) {

   struct rtentry *VAR_5 = VAR_3.ro_rt;
   FUNC_2(VAR_5);
   FUNC_5(VAR_1, &VAR_3);
   VAR_3.ro_rt = VAR_5;
  }
 }

 return (VAR_3.ro_rt);
}
