
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockbuf {scalar_t__ sb_mbcnt; scalar_t__ sb_mbmax; scalar_t__ sb_cc; scalar_t__ sb_hiwat; } ;
struct mptcb {TYPE_3__* mpt_mpte; } ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {TYPE_2__* mpte_mppcb; } ;
struct TYPE_5__ {TYPE_1__* mpp_socket; } ;
struct TYPE_4__ {struct sockbuf so_rcv; } ;


 scalar_t__ FUNC_0 (struct sockbuf*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mptcb*,struct sockbuf*) ;
 int FUNC_3 (TYPE_3__*) ;

int32_t
FUNC_4(struct mptcb *VAR_0)
{
 struct sockbuf *VAR_1 = &VAR_0->mpt_mpte->mpte_mppcb->mpp_socket->so_rcv;
 uint32_t VAR_2;
 int32_t VAR_3;
 int32_t VAR_4 = 0;

 FUNC_3(VAR_0->mpt_mpte);

 FUNC_2(VAR_0, VAR_1);


 VAR_2 = VAR_1->sb_hiwat;

 VAR_3 = ((int32_t) FUNC_1((VAR_2 - VAR_1->sb_cc),
  (VAR_1->sb_mbmax - VAR_1->sb_mbcnt)));
 if (VAR_3 < 0)
  VAR_3 = 0;





 if (VAR_4 > VAR_3)
  VAR_3 = 0;
 else
  VAR_3 -= VAR_4;

 return (VAR_3);
}
