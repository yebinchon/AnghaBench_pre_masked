
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ sb_cc; int sb_mb; } ;
struct socket {TYPE_1__ so_rcv; struct flow_divert_pcb* so_fd_pcb; void* so_proto; int so_flags; } ;
struct inpcb {struct ifnet* inp_last_outifp; } ;
struct ifnet {int dummy; } ;
struct flow_divert_pcb {int flags; struct socket* so; } ;
struct flow_divert_group {int dummy; } ;
typedef int * mbuf_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (struct flow_divert_pcb*) ;
 int FUNC_1 (int ,int *,char*,size_t) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int FUNC_3 (struct flow_divert_pcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct socket*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (struct socket*) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct socket*) ;
 struct flow_divert_pcb* FUNC_8 (size_t,struct flow_divert_group*) ;
 int FUNC_9 (struct socket*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct flow_divert_group** VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int **) ;
 int VAR_12 ;
 void* FUNC_13 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct socket*,int ) ;
 int FUNC_17 (struct socket*,int ) ;
 int FUNC_18 (struct socket*) ;
 struct inpcb* FUNC_19 (struct socket*) ;

__attribute__((used)) static errno_t
FUNC_20(struct socket *VAR_13, uint32_t VAR_14, uint32_t VAR_15)
{
 int VAR_16 = 0;
 struct flow_divert_pcb *VAR_17 = ((void*)0);
 struct ifnet *VAR_18 = ((void*)0);
 struct inpcb *VAR_19 = ((void*)0);
 struct socket *VAR_20;
 mbuf_t VAR_21 = ((void*)0);

 FUNC_17(VAR_13, 0);

 FUNC_1(VAR_4, &VAR_12, "Attaching socket to flow %u", VAR_14);


 FUNC_11(&VAR_10);
 if (VAR_11 != ((void*)0) && VAR_9 > 0) {
  struct flow_divert_group *VAR_22 = VAR_11[VAR_15];
  if (VAR_22 != ((void*)0)) {
   VAR_17 = FUNC_8(VAR_14, VAR_22);
  }
 }
 FUNC_10(&VAR_10);

 if (VAR_17 == ((void*)0)) {
  VAR_16 = VAR_0;
  goto done;
 }

 FUNC_0(VAR_17);


 VAR_20 = VAR_17->so;

 VAR_19 = FUNC_19(VAR_20);

 FUNC_6(VAR_19 != ((void*)0));

 FUNC_16(VAR_20, 0);
 FUNC_7(VAR_20);
 VAR_20->so_flags &= ~VAR_8;
 VAR_20->so_fd_pcb = ((void*)0);
 if (FUNC_5(VAR_20) == VAR_7) {
  VAR_20->so_proto = FUNC_13(FUNC_4(VAR_20), VAR_2, VAR_7);
 } else if (FUNC_5(VAR_20) == VAR_6) {
  VAR_20->so_proto = FUNC_13(FUNC_4(VAR_20), VAR_3, VAR_6);
 }
 VAR_17->so = ((void*)0);

 VAR_18 = VAR_19->inp_last_outifp;
 if (VAR_20->so_rcv.sb_cc > 0) {
  VAR_16 = FUNC_12(VAR_20->so_rcv.sb_mb, VAR_5, &VAR_21);
  FUNC_15(&VAR_20->so_rcv);
 }
 FUNC_17(VAR_20, 0);


 FUNC_16(VAR_13, 0);
 VAR_13->so_fd_pcb = VAR_17;
 VAR_19 = FUNC_19(VAR_13);
 VAR_19->inp_last_outifp = VAR_18;
 if (VAR_21 != ((void*)0)) {
  if (FUNC_14(&VAR_13->so_rcv, VAR_21)) {
   FUNC_18(VAR_13);
  }
 }
 FUNC_9(VAR_13);
 FUNC_17(VAR_13, 0);

 VAR_17->so = VAR_13;
 VAR_17->flags |= VAR_1;

 FUNC_3(VAR_17);

done:
 FUNC_16(VAR_13, 0);

 if (VAR_17 != ((void*)0)) {
  FUNC_2(VAR_17);
 }

 return VAR_16;
}
