
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ sb_cfil_thread; } ;
struct socket {int so_flags; TYPE_2__* so_cfil; TYPE_1__ so_snd; } ;
struct sockbuf {int sb_flags; struct socket* sb_so; } ;
struct cfi_buf {scalar_t__ cfi_pending_last; scalar_t__ cfi_pending_first; scalar_t__ cfi_pending_mbcnt; } ;
typedef int int32_t ;
struct TYPE_4__ {struct cfi_buf cfi_rcv; struct cfi_buf cfi_snd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockbuf*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct socket*) ;

int32_t
FUNC_5(struct sockbuf *VAR_4)
{
 struct socket *VAR_5 = VAR_4->sb_so;
 uint64_t VAR_6 = 0;

 if (FUNC_0(VAR_5)) {
  return (FUNC_2(VAR_4, VAR_3));
 }

 if ((VAR_5->so_flags & VAR_2) != 0 && VAR_5->so_cfil != ((void*)0) &&
  VAR_5->so_snd.sb_cfil_thread != FUNC_3()) {
  struct cfi_buf *VAR_7;

  FUNC_4(VAR_5);

  if ((VAR_4->sb_flags & VAR_1) == 0)
   VAR_7 = &VAR_5->so_cfil->cfi_snd;
  else
   VAR_7 = &VAR_5->so_cfil->cfi_rcv;

  VAR_6 = VAR_7->cfi_pending_last -
   VAR_7->cfi_pending_first;





  if ((uint64_t)VAR_7->cfi_pending_mbcnt > VAR_6)
   VAR_6 = VAR_7->cfi_pending_mbcnt;
 }

 FUNC_1(VAR_6 < VAR_0);

 return (int32_t)(VAR_6);
}
