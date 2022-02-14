
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct tcpiphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct tcpcb {int t_flags; int t_maxopd; int t_maxseg; scalar_t__ t_srtt; int snd_ssthresh; int t_rttmin; struct inpcb* t_inpcb; } ;
struct TYPE_6__ {int sb_hiwat; } ;
struct socket {TYPE_2__ so_rcv; TYPE_2__ so_snd; } ;
struct TYPE_7__ {int rmx_rtt; scalar_t__ rmx_mtu; int rmx_sendpipe; int rmx_recvpipe; int rmx_ssthresh; } ;
struct rtentry {TYPE_3__ rt_rmx; struct ifnet* rt_ifp; } ;
struct rmxp_tao {int tao_mssopt; } ;
struct ip6_hdr {int dummy; } ;
struct inpcb {int inp_vflag; struct socket* inp_socket; } ;
struct ifnet {scalar_t__ if_type; int if_baudrate; } ;
struct TYPE_8__ {int (* cwnd_init ) (struct tcpcb*) ;} ;
struct TYPE_5__ {int tcps_usedssthresh; } ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (struct tcpcb*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtentry*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct tcpcb*,int ) ;
 int FUNC_6 (struct inpcb*,int) ;
 struct rmxp_tao* FUNC_7 (TYPE_3__) ;
 int VAR_15 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct socket*) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (struct tcpcb*) ;
 int VAR_17 ;
 int FUNC_11 (struct tcpcb*,int *,int ) ;
 int FUNC_12 (struct tcpcb*,struct rtentry*) ;
 int FUNC_13 (struct rtentry*) ;
 int FUNC_14 (struct rtentry*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct rtentry* FUNC_15 (struct inpcb*,unsigned int) ;
 struct rtentry* FUNC_16 (struct inpcb*,unsigned int) ;
 int FUNC_17 (struct socket*,struct ifnet*) ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;

void
FUNC_18(struct tcpcb *VAR_22, int VAR_23, unsigned int VAR_24)
{
 struct rtentry *VAR_25;
 struct ifnet *VAR_26;
 int VAR_27, VAR_28;
 u_int32_t VAR_29;
 struct inpcb *VAR_30;
 struct socket *VAR_31;
 struct rmxp_tao *VAR_32;
 int VAR_33 = VAR_23;
 u_int32_t VAR_34;
 int VAR_35 = 0;





 VAR_30 = VAR_22->t_inpcb;
 {
  VAR_25 = FUNC_15(VAR_30, VAR_24);
 }
 VAR_35 = (VAR_22->t_flags & VAR_10);

 if (VAR_25 == ((void*)0)) {
  VAR_22->t_maxopd = VAR_22->t_maxseg =



  VAR_19;
  return;
 }
 VAR_26 = VAR_25->rt_ifp;







 if (VAR_26->if_type == VAR_1 && VAR_16 > 0 &&
     VAR_26->if_baudrate > 9600 && VAR_26->if_baudrate <= 128000) {
  VAR_22->t_flags |= VAR_14;
 }
 VAR_31 = VAR_30->inp_socket;

 VAR_32 = FUNC_7(VAR_25->rt_rmx);




 if (VAR_23 == -1)
  VAR_23 = VAR_32->tao_mssopt;




 if (VAR_23 == 0)
  VAR_23 =



   VAR_19;
 else {




  VAR_23 = FUNC_3(VAR_23, VAR_18);






  VAR_23 = FUNC_3(VAR_23, 64);
 }
 VAR_32->tao_mssopt = VAR_23;






 if (VAR_22->t_srtt == 0 && (VAR_27 = VAR_25->rt_rmx.rmx_rtt) != 0) {
  FUNC_12(VAR_22, VAR_25);
 } else {
  VAR_22->t_rttmin = VAR_35 ? VAR_17 : VAR_6;
 }




 VAR_28 = FUNC_13(VAR_25);







 VAR_28 -= (sizeof (struct tcpiphdr));

 if (VAR_25->rt_rmx.rmx_mtu == 0) {






  if (!VAR_35)
   VAR_28 = FUNC_4(VAR_28, VAR_19);
 }

 VAR_28 = FUNC_4(VAR_28, VAR_23);







 VAR_22->t_maxopd = VAR_28;





 if ((VAR_22->t_flags & (VAR_13|VAR_11)) == VAR_13 &&
     (VAR_33 == -1 ||
      (VAR_22->t_flags & VAR_12) == VAR_12))
  VAR_28 -= VAR_5;




 VAR_22->t_maxseg = VAR_28;





 VAR_34 = (VAR_15 * (u_int64_t)VAR_3) / (VAR_4 + VAR_3);
  VAR_29 = VAR_31->so_snd.sb_hiwat;
 if (VAR_29 < VAR_28)
  VAR_28 = VAR_29;
 else {
  VAR_29 = (((VAR_29 + (u_int64_t)VAR_28 - 1) / (u_int64_t)VAR_28) * (u_int64_t)VAR_28);
  if (VAR_29 > VAR_34)
   VAR_29 = VAR_34;
  (void)FUNC_8(&VAR_31->so_snd, VAR_29);
 }
 VAR_22->t_maxseg = VAR_28;

 FUNC_0(VAR_22->t_maxseg);





 FUNC_17(VAR_31, VAR_26);





  VAR_29 = VAR_31->so_rcv.sb_hiwat;
 if (VAR_29 > VAR_28) {
  VAR_29 = (((VAR_29 + (u_int64_t)VAR_28 - 1) / (u_int64_t)VAR_28) * (u_int64_t)VAR_28);
  if (VAR_29 > VAR_34)
   VAR_29 = VAR_34;
  (void)FUNC_8(&VAR_31->so_rcv, VAR_29);
 }

 FUNC_9(VAR_31);

 if (VAR_25->rt_rmx.rmx_ssthresh) {






  VAR_22->snd_ssthresh = FUNC_3(2 * VAR_28, VAR_25->rt_rmx.rmx_ssthresh);
  VAR_21.tcps_usedssthresh++;
 } else {
  VAR_22->snd_ssthresh = VAR_8 << VAR_9;
 }





 if (FUNC_1(VAR_22)->cwnd_init != ((void*)0))
  FUNC_1(VAR_22)->cwnd_init(VAR_22);

 FUNC_11(VAR_22, ((void*)0), VAR_7);


 FUNC_2(VAR_25);
}
