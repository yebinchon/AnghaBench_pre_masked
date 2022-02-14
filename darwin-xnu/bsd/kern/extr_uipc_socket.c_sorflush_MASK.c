
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct sockbuf {int sb_flags; int * sb_mb; int sb_sel; int * sb_upcallarg; int * sb_upcall; TYPE_1__ sb_timeo; int * sb_lastrecord; int * sb_mbtail; scalar_t__ sb_lowat; scalar_t__ sb_ctl; scalar_t__ sb_mbmax; scalar_t__ sb_mbcnt; scalar_t__ sb_hiwat; scalar_t__ sb_cc; int sb_so; } ;
struct socket {struct protosw* so_proto; struct sockbuf so_rcv; } ;
struct protosw {int pr_flags; TYPE_2__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
typedef int lck_mtx_t ;
typedef int asb ;
struct TYPE_4__ {int (* dom_dispose ) (int *) ;int * dom_mtx; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockbuf*,int) ;
 int FUNC_3 (struct sockbuf*,int) ;
 int FUNC_4 (struct sockbuf*) ;
 int FUNC_5 (struct sockbuf*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct socket*,int ,int *) ;
 int FUNC_8 (struct socket*) ;
 int VAR_11 ;
 int * FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct socket *VAR_12)
{
 struct sockbuf *VAR_13 = &VAR_12->so_rcv;
 struct protosw *VAR_14 = VAR_12->so_proto;
 struct sockbuf VAR_15;
 FUNC_7(VAR_12, VAR_11, ((void*)0));

 FUNC_8(VAR_12);
 (void) FUNC_3(VAR_13, VAR_4 | VAR_3 | VAR_2);
 FUNC_1(VAR_13->sb_flags & VAR_7);
 FUNC_2(&VAR_15, sizeof (VAR_15));
 VAR_15.sb_cc = VAR_13->sb_cc;
 VAR_15.sb_hiwat = VAR_13->sb_hiwat;
 VAR_15.sb_mbcnt = VAR_13->sb_mbcnt;
 VAR_15.sb_mbmax = VAR_13->sb_mbmax;
 VAR_15.sb_ctl = VAR_13->sb_ctl;
 VAR_15.sb_lowat = VAR_13->sb_lowat;
 VAR_15.sb_mb = VAR_13->sb_mb;
 VAR_15.sb_mbtail = VAR_13->sb_mbtail;
 VAR_15.sb_lastrecord = VAR_13->sb_lastrecord;
 VAR_15.sb_so = VAR_13->sb_so;
 VAR_15.sb_flags = VAR_13->sb_flags;
 VAR_15.sb_flags &= ~(VAR_7|VAR_8|VAR_6|VAR_9);
 VAR_15.sb_flags |= VAR_5;
 VAR_13->sb_cc = 0;
 VAR_13->sb_hiwat = 0;
 VAR_13->sb_mbcnt = 0;
 VAR_13->sb_mbmax = 0;
 VAR_13->sb_ctl = 0;
 VAR_13->sb_lowat = 0;
 VAR_13->sb_mb = ((void*)0);
 VAR_13->sb_mbtail = ((void*)0);
 VAR_13->sb_lastrecord = ((void*)0);
 VAR_13->sb_timeo.tv_sec = 0;
 VAR_13->sb_timeo.tv_usec = 0;
 VAR_13->sb_upcall = ((void*)0);
 VAR_13->sb_upcallarg = ((void*)0);
 VAR_13->sb_flags &= ~(VAR_8|VAR_9);
 VAR_13->sb_flags |= VAR_5;

 FUNC_5(VAR_13, VAR_10);







 FUNC_6(&VAR_13->sb_sel);

 if ((VAR_14->pr_flags & VAR_1) && VAR_14->pr_domain->dom_dispose)
  (*VAR_14->pr_domain->dom_dispose)(VAR_15.sb_mb);

 FUNC_4(&VAR_15);
}
