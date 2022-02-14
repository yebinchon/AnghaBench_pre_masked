
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int so_options; int so_flags; void* so_pcb; } ;
struct proc {int dummy; } ;
struct TYPE_5__ {scalar_t__ sp_protocol; } ;
struct TYPE_6__ {TYPE_1__ rcb_proto; int * rcb_faddr; int * rcb_laddr; } ;
struct keycb {TYPE_2__ kp_raw; scalar_t__ kp_registered; scalar_t__ kp_promisc; } ;
typedef void* caddr_t ;
struct TYPE_8__ {int any_count; int key_count; } ;
struct TYPE_7__ {int (* pru_attach ) (struct socket*,int,struct proc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct keycb*,int ) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int) ;
 TYPE_3__ VAR_11 ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*,int,struct proc*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_12, int VAR_13, struct proc *VAR_14)
{
 struct keycb *VAR_15;
 int VAR_16;

 if (FUNC_4(VAR_12) != 0)
  return VAR_0;
 VAR_15 = (struct keycb *)FUNC_1(sizeof (*VAR_15), VAR_2,
     VAR_3 | VAR_4);
 if (VAR_15 == 0)
  return VAR_1;

 VAR_12->so_pcb = (caddr_t)VAR_15;
 VAR_15->kp_promisc = VAR_15->kp_registered = 0;
 VAR_15->kp_raw.rcb_laddr = &VAR_10;
 VAR_15->kp_raw.rcb_faddr = &VAR_9;

 VAR_16 = VAR_11.pru_attach(VAR_12, VAR_13, VAR_14);
 VAR_15 = (struct keycb *)FUNC_4(VAR_12);
 if (VAR_16) {
  FUNC_0(VAR_15, VAR_2);
  VAR_12->so_pcb = (caddr_t) 0;
  VAR_12->so_flags |= VAR_6;
  FUNC_2("key_usrreq: key_usrreq results %d\n", VAR_16);
  return VAR_16;
 }


 if (VAR_15->kp_raw.rcb_proto.sp_protocol == VAR_5)
  VAR_8.key_count++;
 VAR_8.any_count++;
 FUNC_3(VAR_12);
 VAR_12->so_options |= VAR_7;

 return 0;
}
