
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockopt {int sopt_name; int sopt_valsize; } ;
struct ip6_moptions {int im6o_multicast_hlim; int im6o_multicast_loop; } ;
struct inpcb {int inp_socket; } ;
typedef int hlim ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip6_moptions*) ;
 int FUNC_1 (struct ip6_moptions*) ;
 int FUNC_2 (struct ip6_moptions*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inpcb*,struct sockopt*) ;
 struct ip6_moptions* FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct inpcb*,struct sockopt*) ;
 int FUNC_8 (struct inpcb*,struct sockopt*) ;
 int FUNC_9 (struct inpcb*,struct sockopt*) ;
 int FUNC_10 (struct inpcb*,struct sockopt*) ;
 int VAR_6 ;
 int FUNC_11 (struct sockopt*,int*,int,int) ;

int
FUNC_12(struct inpcb *VAR_7, struct sockopt *VAR_8)
{
 struct ip6_moptions *VAR_9;
 int VAR_10;

 VAR_10 = 0;





 if (FUNC_3(VAR_7->inp_socket) == VAR_3 ||
     (FUNC_4(VAR_7->inp_socket) != VAR_5 &&
      FUNC_4(VAR_7->inp_socket) != VAR_4))
  return (VAR_2);

 switch (VAR_8->sopt_name) {
 case 135:
  VAR_10 = FUNC_9(VAR_7, VAR_8);
  break;

 case 136: {
  int VAR_11;

  if (VAR_8->sopt_valsize != sizeof(int)) {
   VAR_10 = VAR_0;
   break;
  }
  VAR_10 = FUNC_11(VAR_8, &VAR_11, sizeof(VAR_11), sizeof(int));
  if (VAR_10)
   break;
  if (VAR_11 < -1 || VAR_11 > 255) {
   VAR_10 = VAR_0;
   break;
  } else if (VAR_11 == -1) {
   VAR_11 = VAR_6;
  }
  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 == ((void*)0)) {
   VAR_10 = VAR_1;
   break;
  }
  FUNC_0(VAR_9);
  VAR_9->im6o_multicast_hlim = VAR_11;
  FUNC_2(VAR_9);
  FUNC_1(VAR_9);
  break;
 }

 case 134: {
  u_int VAR_12;





  if (VAR_8->sopt_valsize != sizeof(u_int)) {
   VAR_10 = VAR_0;
   break;
  }
  VAR_10 = FUNC_11(VAR_8, &VAR_12, sizeof(u_int), sizeof(u_int));
  if (VAR_10)
   break;
  if (VAR_12 > 1) {
   VAR_10 = VAR_0;
   break;
  }
  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9 == ((void*)0)) {
   VAR_10 = VAR_1;
   break;
  }
  FUNC_0(VAR_9);
  VAR_9->im6o_multicast_loop = VAR_12;
  FUNC_2(VAR_9);
  FUNC_1(VAR_9);
  break;
 }

 case 139:
 case 132:
 case 131:
  VAR_10 = FUNC_7(VAR_7, VAR_8);
  break;

 case 138:
 case 130:
 case 129:
  VAR_10 = FUNC_8(VAR_7, VAR_8);
  break;

 case 133:
 case 128:
  VAR_10 = FUNC_5(VAR_7, VAR_8);
  break;

 case 137:
  VAR_10 = FUNC_10(VAR_7, VAR_8);
  break;

 default:
  VAR_10 = VAR_2;
  break;
 }

 return (VAR_10);
}
