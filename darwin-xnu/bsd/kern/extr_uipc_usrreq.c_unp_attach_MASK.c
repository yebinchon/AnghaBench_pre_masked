
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unpcb {scalar_t__ unp_gencnt; struct socket* unp_socket; int unp_refs; int unp_mtx; } ;
struct TYPE_4__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct socket {int so_type; TYPE_2__ so_snd; TYPE_1__ so_rcv; scalar_t__ so_pcb; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct unpcb*,int ) ;
 int VAR_1 ;


 int FUNC_2 (struct unpcb*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct socket*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_15)
{
 struct unpcb *VAR_16;
 int VAR_17 = 0;

 if (VAR_15->so_snd.sb_hiwat == 0 || VAR_15->so_rcv.sb_hiwat == 0) {
  switch (VAR_15->so_type) {

  case 128:
   VAR_17 = FUNC_7(VAR_15, VAR_14, VAR_13);
   break;

  case 129:
   VAR_17 = FUNC_7(VAR_15, VAR_12, VAR_11);
   break;

  default:
   FUNC_6("unp_attach");
  }
  if (VAR_17)
   return (VAR_17);
 }
 VAR_16 = (struct unpcb *)FUNC_8(VAR_10);
 if (VAR_16 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_16, sizeof (*VAR_16));

 FUNC_3(&VAR_16->unp_mtx,
  VAR_8, VAR_7);

 FUNC_5(VAR_6);
 FUNC_0(&VAR_16->unp_refs);
 VAR_16->unp_socket = VAR_15;
 VAR_16->unp_gencnt = ++VAR_4;
 VAR_2++;
 FUNC_1(VAR_15->so_type == 129 ?
     &VAR_3 : &VAR_9, VAR_16, VAR_5);
 FUNC_4(VAR_6);
 VAR_15->so_pcb = (caddr_t)VAR_16;
 VAR_15->so_rcv.sb_flags |= VAR_1;
 VAR_15->so_snd.sb_flags |= VAR_1;
 return (0);
}
