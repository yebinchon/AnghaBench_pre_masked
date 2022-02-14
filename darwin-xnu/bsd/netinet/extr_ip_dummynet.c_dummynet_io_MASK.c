
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {int ro_dst; } ;
struct route {int ro_dst; } ;
struct sockaddr_in6 {int dn_dir; int dn_client; int dn_ipoa; int dn_flags; int dn_exthdrs; int dn_unfragpartlen; int dn_alwaysfrag; int dn_mtu; int dn_origifp; int dn_dst6; TYPE_2__ dn_ro6; int dn_ro6_pmtu; int dn_dst; struct route dn_ro; int dn_ifp; int dn_pf_rule; TYPE_4__* dn_ipfw_rule; } ;
struct sockaddr_in {int dn_dir; int dn_client; int dn_ipoa; int dn_flags; int dn_exthdrs; int dn_unfragpartlen; int dn_alwaysfrag; int dn_mtu; int dn_origifp; int dn_dst6; TYPE_2__ dn_ro6; int dn_ro6_pmtu; int dn_dst; struct route dn_ro; int dn_ifp; int dn_pf_rule; TYPE_4__* dn_ipfw_rule; } ;
struct TYPE_11__ {int len; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_3__ m_pkthdr; } ;
struct m_tag {int dummy; } ;
struct ip_fw_args {scalar_t__ fwa_flags; int * fwa_ipoa; int fwa_oflags; struct sockaddr_in6* fwa_exthdrs; int fwa_unfragpartlen; int fwa_alwaysfrag; int fwa_mtu; int fwa_origifp; struct sockaddr_in6* fwa_dst6; TYPE_1__* fwa_ro6; scalar_t__ fwa_ro6_pmtu; struct sockaddr_in6* fwa_dst; struct route* fwa_ro; int fwa_oif; int fwa_pf_rule; TYPE_4__* fwa_ipfw_rule; int fwa_id; } ;
struct ip6_exthdrs {int dummy; } ;
struct dn_pkt_tag {int dn_dir; int dn_client; int dn_ipoa; int dn_flags; int dn_exthdrs; int dn_unfragpartlen; int dn_alwaysfrag; int dn_mtu; int dn_origifp; int dn_dst6; TYPE_2__ dn_ro6; int dn_ro6_pmtu; int dn_dst; struct route dn_ro; int dn_ifp; int dn_pf_rule; TYPE_4__* dn_ipfw_rule; } ;
struct TYPE_14__ {scalar_t__ elements; } ;
struct dn_flow_set {int parent_nr; int fs_nr; scalar_t__ plr; int flags_fs; scalar_t__ qsize; int backlogged; scalar_t__ weight; struct dn_pipe* pipe; } ;
struct dn_pipe {scalar_t__ V; scalar_t__ numbytes; void* sched_time; int pipe_nr; TYPE_6__ scheduler_heap; TYPE_6__ not_eligible_heap; int idle_heap; int sum; scalar_t__ bandwidth; struct dn_flow_set fs; } ;
struct dn_flow_queue {int tot_bytes; scalar_t__ len_bytes; scalar_t__ len; scalar_t__ S; scalar_t__ F; int drops; void* sched_time; struct mbuf* head; struct mbuf* tail; int tot_pkts; } ;
struct TYPE_13__ {scalar_t__ opcode; } ;
typedef TYPE_5__ ipfw_insn ;
typedef scalar_t__ dn_key ;
struct TYPE_12__ {int act_ofs; int fw_flg; TYPE_5__* cmd; } ;
struct TYPE_9__ {int ro_dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_4 (struct mbuf*,struct dn_flow_queue*,struct dn_pipe*) ;
 scalar_t__ FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct sockaddr_in6*,int *,int) ;
 int FUNC_7 (int ,int *,struct timespec*) ;
 int FUNC_8 (struct sockaddr_in6*,int) ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct mbuf*) ;
 struct dn_flow_queue* FUNC_10 (struct dn_flow_set*,int *) ;
 int FUNC_11 (int *,struct dn_flow_queue*) ;
 int FUNC_12 (TYPE_6__*,scalar_t__,struct dn_flow_queue*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct dn_flow_set* FUNC_15 (int) ;
 struct dn_pipe* FUNC_16 (int) ;
 int FUNC_17 (struct mbuf*) ;
 struct m_tag* FUNC_18 (int ,int ,int,int ,struct mbuf*) ;
 int FUNC_19 (struct mbuf*,struct m_tag*) ;
 int FUNC_20 (struct timeval*) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (struct dn_flow_queue*,struct mbuf**,struct mbuf**) ;
 int FUNC_24 (struct dn_pipe*,struct mbuf**,struct mbuf**) ;
 TYPE_6__ VAR_20 ;
 scalar_t__ FUNC_25 (struct dn_flow_set*,struct dn_flow_queue*,int) ;
 int FUNC_26 (struct route*,struct route*,int) ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_27(struct mbuf *VAR_22, int VAR_23, int VAR_24, struct ip_fw_args *VAR_25, int VAR_26)
{
    struct mbuf *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
    struct dn_pkt_tag *VAR_29;
    struct m_tag *VAR_30;
    struct dn_flow_set *VAR_31 = ((void*)0);
    struct dn_pipe *VAR_32 ;
    u_int64_t VAR_33 = VAR_22->m_pkthdr.len ;
    struct dn_flow_queue *VAR_34 = ((void*)0) ;
    int VAR_35 = 0;
    struct timespec VAR_36;
    struct timeval VAR_37;

    FUNC_1(("dummynet_io m: 0x%llx pipe: %d dir: %d client: %d\n",
        (uint64_t)FUNC_5(VAR_22), VAR_23, VAR_24, VAR_26));
    VAR_23 &= 0xffff ;

  FUNC_13(VAR_18);





    FUNC_20(&VAR_37);
 VAR_17 = (VAR_37.tv_sec * 1000) + (VAR_37.tv_usec / 1000);




    if (VAR_35) {
  VAR_32 = FUNC_16(VAR_23);
  if (VAR_32 != ((void*)0))
   VAR_31 = &(VAR_32->fs);
 } else
  VAR_31 = FUNC_15(VAR_23);


    if (VAR_31 == ((void*)0)){
 goto dropit ;
    }
    VAR_32 = VAR_31->pipe ;
    if (VAR_32 == ((void*)0)) {
 VAR_32 = FUNC_16(VAR_31->parent_nr);

 if (VAR_32 != ((void*)0))
     VAR_31->pipe = VAR_32 ;
 else {
     FUNC_22("dummynet: no pipe %d for queue %d, drop pkt\n",
  VAR_31->parent_nr, VAR_31->fs_nr);
     goto dropit ;
 }
    }
    VAR_34 = FUNC_10(VAR_31, &(VAR_25->fwa_id));
    if ( VAR_34 == ((void*)0) )
 goto dropit ;



    VAR_34->tot_bytes += VAR_33 ;
    VAR_34->tot_pkts++ ;
    if ( VAR_31->plr && (FUNC_21() < VAR_31->plr))
 goto dropit ;
    if ( VAR_31->flags_fs & VAR_5) {
     if (VAR_34->len_bytes > VAR_31->qsize)
     goto dropit ;
    } else {
 if (VAR_34->len >= VAR_31->qsize)
     goto dropit ;
    }
    if ( VAR_31->flags_fs & VAR_3 && FUNC_25(VAR_31, VAR_34, VAR_33) )
 goto dropit ;


    VAR_30 = FUNC_18(VAR_11, VAR_12,
      sizeof(struct dn_pkt_tag), VAR_14, VAR_22);
    if ( VAR_30 == ((void*)0) )
  goto dropit ;
    FUNC_19(VAR_22, VAR_30);

    VAR_29 = (struct dn_pkt_tag *)(VAR_30+1);
    FUNC_8(VAR_29, sizeof(struct dn_pkt_tag));







    if (VAR_26 == VAR_0)
     VAR_29->dn_ipfw_rule = VAR_25->fwa_ipfw_rule;
    VAR_29->dn_pf_rule = VAR_25->fwa_pf_rule;
    VAR_29->dn_dir = VAR_24 ;
    VAR_29->dn_client = VAR_26;

    VAR_29->dn_ifp = VAR_25->fwa_oif;
    if (VAR_24 == VAR_7) {





  if (VAR_25->fwa_ro) {
   FUNC_26(&VAR_29->dn_ro, VAR_25->fwa_ro, sizeof (VAR_29->dn_ro));
  }
  if (VAR_25->fwa_dst) {
   if (VAR_25->fwa_dst == (struct sockaddr_in *)&VAR_25->fwa_ro->ro_dst)
    VAR_25->fwa_dst = (struct sockaddr_in *)&(VAR_29->dn_ro.ro_dst) ;

   FUNC_6 (VAR_25->fwa_dst, &VAR_29->dn_dst, sizeof(VAR_29->dn_dst));
  }
    } else if (VAR_24 == VAR_6) {
  if (VAR_25->fwa_ro6) {
   FUNC_26((struct route *)&VAR_29->dn_ro6,
       (struct route *)VAR_25->fwa_ro6, sizeof (VAR_29->dn_ro6));
  }
  if (VAR_25->fwa_ro6_pmtu) {
   FUNC_26((struct route *)&VAR_29->dn_ro6_pmtu,
       (struct route *)VAR_25->fwa_ro6_pmtu, sizeof (VAR_29->dn_ro6_pmtu));
  }
  if (VAR_25->fwa_dst6) {
   if (VAR_25->fwa_dst6 == (struct sockaddr_in6 *)&VAR_25->fwa_ro6->ro_dst)
    VAR_25->fwa_dst6 = (struct sockaddr_in6 *)&(VAR_29->dn_ro6.ro_dst) ;

   FUNC_6 (VAR_25->fwa_dst6, &VAR_29->dn_dst6, sizeof(VAR_29->dn_dst6));
  }
  VAR_29->dn_origifp = VAR_25->fwa_origifp;
  VAR_29->dn_mtu = VAR_25->fwa_mtu;
  VAR_29->dn_alwaysfrag = VAR_25->fwa_alwaysfrag;
  VAR_29->dn_unfragpartlen = VAR_25->fwa_unfragpartlen;
  if (VAR_25->fwa_exthdrs) {
   FUNC_6 (VAR_25->fwa_exthdrs, &VAR_29->dn_exthdrs, sizeof(VAR_29->dn_exthdrs));




   FUNC_8(VAR_25->fwa_exthdrs, sizeof(struct ip6_exthdrs));
  }
    }
    if (VAR_24 == VAR_7 || VAR_24 == VAR_6) {
  VAR_29->dn_flags = VAR_25->fwa_oflags;
  if (VAR_25->fwa_ipoa != ((void*)0))
   VAR_29->dn_ipoa = *(VAR_25->fwa_ipoa);
    }
    if (VAR_34->head == ((void*)0))
 VAR_34->head = VAR_22;
    else
 VAR_34->tail->m_nextpkt = VAR_22;
    VAR_34->tail = VAR_22;
    VAR_34->len++;
    VAR_34->len_bytes += VAR_33 ;

    if ( VAR_34->head != VAR_22 )
 goto done;





    if (VAR_35) {



 dn_key VAR_38 = 0 ;
 if (VAR_32->bandwidth)
     VAR_38 = FUNC_4(VAR_22, VAR_34, VAR_32);
 VAR_34->sched_time = VAR_17 ;
 if (VAR_38 == 0)
     FUNC_23( VAR_34 , &VAR_27, &VAR_28 );
 else
     FUNC_12(&VAR_20, VAR_17 + VAR_38 , VAR_34 );
    } else {
 if (FUNC_0(VAR_34->S, VAR_34->F)) {
     VAR_34->S = VAR_32->V ;
     VAR_32->sum += VAR_31->weight ;
 } else {
     FUNC_11(&(VAR_32->idle_heap), VAR_34);
     VAR_34->S = FUNC_3(VAR_34->F, VAR_32->V ) ;
 }
 VAR_34->F = VAR_34->S + ( VAR_33<<VAR_13 )/(u_int64_t) VAR_31->weight;

 if (VAR_32->not_eligible_heap.elements == 0 &&
  VAR_32->scheduler_heap.elements == 0)
     VAR_32->V = FUNC_3 ( VAR_34->S, VAR_32->V );
 VAR_31->backlogged++ ;
 if (FUNC_0(VAR_34->S, VAR_32->V) ) {
     if (VAR_32->scheduler_heap.elements == 0)
  FUNC_22("dummynet: ++ ouch! not eligible but empty scheduler!\n");
     FUNC_12(&(VAR_32->not_eligible_heap), VAR_34->S, VAR_34);
 } else {
     FUNC_12(&(VAR_32->scheduler_heap), VAR_34->F, VAR_34);
     if (VAR_32->numbytes >= 0) {
  if (VAR_32->scheduler_heap.elements != 1)
      FUNC_22("dummynet: OUCH! pipe should have been idle!\n");
  FUNC_1(("dummynet: waking up pipe %d at %d\n",
   VAR_32->pipe_nr, (int)(VAR_34->F >> VAR_13)));
  VAR_32->sched_time = VAR_17 ;
  FUNC_24(VAR_32, &VAR_27, &VAR_28);
     }
 }
    }
done:

 if (!VAR_21) {
  VAR_36.tv_sec = 0;
  VAR_36.tv_nsec = 1 * 1000000;
  VAR_21 = 1;
  FUNC_7(VAR_19, ((void*)0), &VAR_36);
 }

 FUNC_14(VAR_18);

 if (VAR_27 != ((void*)0)) {
  FUNC_9(VAR_27);
 }

    return 0;

dropit:
    if (VAR_34)
 VAR_34->drops++ ;
 FUNC_14(VAR_18);
    FUNC_17(VAR_22);
    return ( (VAR_31 && (VAR_31->flags_fs & VAR_4)) ? 0 : VAR_8);
}
