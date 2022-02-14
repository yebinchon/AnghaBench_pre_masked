
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sockopt {int sopt_name; int sopt_valsize; } ;
struct TYPE_2__ {int s_addr; } ;
struct ip_moptions {int imo_multicast_ttl; int imo_multicast_loop; TYPE_1__ imo_multicast_addr; struct ifnet* imo_multicast_ifp; } ;
struct inpcb {int inp_socket; } ;
struct ifnet {int if_flags; } ;
typedef int ifindex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ip_moptions*) ;
 int FUNC_1 (struct ip_moptions*) ;
 int FUNC_2 (struct ip_moptions*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_10 ;
 struct ifnet** VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct inpcb*,struct sockopt*) ;
 struct ip_moptions* FUNC_8 (struct inpcb*) ;
 int FUNC_9 (struct inpcb*,struct sockopt*) ;
 int FUNC_10 (struct inpcb*,struct sockopt*) ;
 int FUNC_11 (struct inpcb*,struct sockopt*) ;
 int FUNC_12 (struct inpcb*,struct sockopt*) ;
 int FUNC_13 (struct sockopt*,...) ;

int
FUNC_14(struct inpcb *VAR_12, struct sockopt *VAR_13)
{
 struct ip_moptions *VAR_14;
 int VAR_15;
 unsigned int VAR_16;
 struct ifnet *VAR_17;

 VAR_15 = 0;





 if (FUNC_3(VAR_12->inp_socket) == VAR_7 ||
     (FUNC_4(VAR_12->inp_socket) != VAR_9 &&
      FUNC_4(VAR_12->inp_socket) != VAR_8))
  return (VAR_4);

 switch (VAR_13->sopt_name) {
 case 138:
  VAR_15 = FUNC_11(VAR_12, VAR_13);
  break;

 case 137:



  VAR_15 = FUNC_13(VAR_13, &VAR_16, sizeof (VAR_16),
      sizeof (VAR_16));
  if (VAR_15)
   break;

  VAR_14 = FUNC_8(VAR_12);
  if (VAR_14 == ((void*)0)) {
   VAR_15 = VAR_2;
   break;
  }





  if (VAR_16 == 0) {
   FUNC_0(VAR_14);
   VAR_14->imo_multicast_ifp = ((void*)0);
   FUNC_2(VAR_14);
   FUNC_1(VAR_14);
   break;
  }

  FUNC_6();

  if ((unsigned int)VAR_10 < VAR_16) {
   FUNC_5();
   FUNC_1(VAR_14);
   VAR_15 = VAR_3;
   break;
  }
  VAR_17 = VAR_11[VAR_16];
  FUNC_5();


  if (VAR_17 == ((void*)0) || !(VAR_17->if_flags & VAR_5)) {
   FUNC_1(VAR_14);
   VAR_15 = VAR_0;
   break;
  }
  FUNC_0(VAR_14);
  VAR_14->imo_multicast_ifp = VAR_17;







  VAR_14->imo_multicast_addr.s_addr = VAR_6;
  FUNC_2(VAR_14);
  FUNC_1(VAR_14);
  break;

 case 135: {
  u_char VAR_18;







  if (VAR_13->sopt_valsize == sizeof(u_char)) {
   VAR_15 = FUNC_13(VAR_13, &VAR_18, sizeof(u_char),
       sizeof(u_char));
   if (VAR_15)
    break;
  } else {
   u_int VAR_19;

   VAR_15 = FUNC_13(VAR_13, &VAR_19, sizeof(u_int),
       sizeof(u_int));
   if (VAR_15)
    break;
   if (VAR_19 > 255) {
    VAR_15 = VAR_1;
    break;
   }
   VAR_18 = (u_char)VAR_19;
  }
  VAR_14 = FUNC_8(VAR_12);
  if (VAR_14 == ((void*)0)) {
   VAR_15 = VAR_2;
   break;
  }
  FUNC_0(VAR_14);
  VAR_14->imo_multicast_ttl = VAR_18;
  FUNC_2(VAR_14);
  FUNC_1(VAR_14);
  break;
 }

 case 136: {
  u_char VAR_20;







  if (VAR_13->sopt_valsize == sizeof(u_char)) {
   VAR_15 = FUNC_13(VAR_13, &VAR_20, sizeof(u_char),
       sizeof(u_char));
   if (VAR_15)
    break;
  } else {
   u_int VAR_21;

   VAR_15 = FUNC_13(VAR_13, &VAR_21, sizeof(u_int),
         sizeof(u_int));
   if (VAR_15)
    break;
   VAR_20 = (u_char)VAR_21;
  }
  VAR_14 = FUNC_8(VAR_12);
  if (VAR_14 == ((void*)0)) {
   VAR_15 = VAR_2;
   break;
  }
  FUNC_0(VAR_14);
  VAR_14->imo_multicast_loop = !!VAR_20;
  FUNC_2(VAR_14);
  FUNC_1(VAR_14);
  break;
 }

 case 144:
 case 143:
 case 132:
 case 131:
  VAR_15 = FUNC_9(VAR_12, VAR_13);
  break;

 case 141:
 case 140:
 case 130:
 case 129:
  VAR_15 = FUNC_10(VAR_12, VAR_13);
  break;

 case 142:
 case 134:
 case 133:
 case 128:
  VAR_15 = FUNC_7(VAR_12, VAR_13);
  break;

 case 139:
  VAR_15 = FUNC_12(VAR_12, VAR_13);
  break;

 default:
  VAR_15 = VAR_4;
  break;
 }

 return (VAR_15);
}
