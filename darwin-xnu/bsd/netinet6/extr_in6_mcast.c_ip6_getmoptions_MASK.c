
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sockopt {int sopt_name; } ;
struct ip6_moptions {int im6o_multicast_loop; int im6o_multicast_hlim; TYPE_1__* im6o_multicast_ifp; } ;
struct inpcb {int inp_socket; struct ip6_moptions* in6p_moptions; } ;
struct TYPE_2__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip6_moptions*) ;
 int FUNC_1 (struct ip6_moptions*) ;
 scalar_t__ VAR_3 ;




 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct inpcb*,struct sockopt*) ;
 int VAR_7 ;
 int FUNC_5 (struct sockopt*,int *,int) ;

int
FUNC_6(struct inpcb *VAR_8, struct sockopt *VAR_9)
{
 struct ip6_moptions *VAR_10;
 int VAR_11;
 u_int VAR_12;

 VAR_10 = VAR_8->in6p_moptions;




 if (FUNC_2(VAR_8->inp_socket) == VAR_3 ||
     (FUNC_3(VAR_8->inp_socket) != VAR_5 &&
     FUNC_3(VAR_8->inp_socket) != VAR_4)) {
  return (VAR_2);
 }

 VAR_11 = 0;
 switch (VAR_9->sopt_name) {
 case 129:
  if (VAR_10 != ((void*)0))
   FUNC_0(VAR_10);
  if (VAR_10 == ((void*)0) || VAR_10->im6o_multicast_ifp == ((void*)0)) {
   VAR_12 = 0;
  } else {
   VAR_12 = VAR_10->im6o_multicast_ifp->if_index;
  }
  if (VAR_10 != ((void*)0))
   FUNC_1(VAR_10);
  VAR_11 = FUNC_5(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 130:
  if (VAR_10 == ((void*)0)) {
   VAR_12 = VAR_7;
  } else {
   FUNC_0(VAR_10);
   VAR_12 = VAR_10->im6o_multicast_hlim;
   FUNC_1(VAR_10);
  }
  VAR_11 = FUNC_5(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 128:
  if (VAR_10 == ((void*)0)) {
   VAR_12 = VAR_6;
  } else {
   FUNC_0(VAR_10);
   VAR_12 = VAR_10->im6o_multicast_loop;
   FUNC_1(VAR_10);
  }
  VAR_11 = FUNC_5(VAR_9, &VAR_12, sizeof(u_int));
  break;

 case 131:
  if (VAR_10 == ((void*)0)) {
   VAR_11 = VAR_0;
  } else {
   VAR_11 = FUNC_4(VAR_8, VAR_9);
  }
  break;

 default:
  VAR_11 = VAR_1;
  break;
 }

 return (VAR_11);
}
