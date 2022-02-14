
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct socket {int so_flags1; } ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_cc; scalar_t__ sb_idealsize; } ;
struct mptcb {TYPE_2__* mpt_mpte; } ;
struct TYPE_4__ {TYPE_1__* mpte_mppcb; } ;
struct TYPE_3__ {struct socket* mpp_socket; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct sockbuf*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct sockbuf*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct mptcb *VAR_4, struct sockbuf *VAR_5)
{
 struct socket *VAR_6 = VAR_4->mpt_mpte->mpte_mppcb->mpp_socket;
 u_int32_t VAR_7 = FUNC_2(VAR_4->mpt_mpte) << 4;
 u_int32_t VAR_8 = VAR_5->sb_hiwat;

 if (VAR_3 == 1 || FUNC_0(VAR_6))
  return;

 if (VAR_2 == 1 &&
     FUNC_4(VAR_5) &&

     (VAR_6->so_flags1 & VAR_0) == 0 &&
     (VAR_8 - VAR_5->sb_cc) < VAR_7 &&
     VAR_8 < VAR_1 &&
     (VAR_5->sb_idealsize > 0 &&
     VAR_5->sb_hiwat <= (VAR_5->sb_idealsize + VAR_7))) {
  FUNC_3(VAR_5, FUNC_1((VAR_5->sb_hiwat + VAR_7), VAR_1));
 }
}
