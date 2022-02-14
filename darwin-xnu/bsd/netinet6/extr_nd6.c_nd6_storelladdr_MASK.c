
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_dl {scalar_t__ sdl_alen; } ;
struct sockaddr {int dummy; } ;
struct rtentry {TYPE_2__* rt_gateway; } ;
struct mbuf {int m_flags; } ;
struct ifnet {int if_type; int if_addrlen; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
struct TYPE_3__ {int sin6_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int VAR_1 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 struct sockaddr_dl* FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (struct sockaddr*) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct ifnet *VAR_2, struct rtentry *VAR_3, struct mbuf *VAR_4,
    struct sockaddr *VAR_5, u_char *VAR_6)
{
 int VAR_7;
 struct sockaddr_dl *VAR_8;

 if (VAR_4->m_flags & VAR_1) {
  switch (VAR_2->if_type) {
  case 133:
  case 132:
  case 128:
  case 129:

  case 130:

  case 134:
   FUNC_0(&FUNC_5(VAR_5)->sin6_addr, VAR_6);
   return (1);
  case 131:
   for (VAR_7 = 0; VAR_7 < VAR_2->if_addrlen; VAR_7++)
    VAR_6[VAR_7] = ~0;
   return (1);
  case 135:
   *VAR_6 = 0;
   return (1);
  default:
   return (0);
  }
 }

 if (VAR_3 == ((void*)0)) {

  return (0);
 }
 FUNC_2(VAR_3);
 if (VAR_3->rt_gateway->sa_family != VAR_0) {
  FUNC_7("nd6_storelladdr: something odd happens\n");
  FUNC_3(VAR_3);
  return (0);
 }
 VAR_8 = FUNC_4(VAR_3->rt_gateway);
 if (VAR_8->sdl_alen == 0) {

  FUNC_7("nd6_storelladdr: sdl_alen == 0\n");
  FUNC_3(VAR_3);
  return (0);
 }

 FUNC_6(FUNC_1(VAR_8), VAR_6, VAR_8->sdl_alen);
 FUNC_3(VAR_3);
 return (1);
}
