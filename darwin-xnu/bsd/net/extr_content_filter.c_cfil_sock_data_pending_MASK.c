
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct socket {int so_flags; TYPE_1__* so_cfil; } ;
struct sockbuf {int sb_flags; struct socket* sb_so; } ;
struct cfi_buf {scalar_t__ cfi_pending_last; scalar_t__ cfi_pending_first; scalar_t__ cfi_pending_mbcnt; } ;
typedef int int32_t ;
struct TYPE_2__ {struct cfi_buf cfi_rcv; struct cfi_buf cfi_snd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockbuf*,int ) ;
 int FUNC_3 (struct socket*) ;

int32_t
FUNC_4(struct sockbuf *VAR_4)
{
 struct socket *VAR_5 = VAR_4->sb_so;
 uint64_t VAR_6 = 0;

 if (FUNC_0(VAR_5)) {
  return (FUNC_2(VAR_4, VAR_0));
 }

 if ((VAR_5->so_flags & VAR_3) != 0 && VAR_5->so_cfil != ((void*)0)) {
  struct cfi_buf *VAR_7;

  FUNC_3(VAR_5);

  if ((VAR_4->sb_flags & VAR_2) == 0)
   VAR_7 = &VAR_5->so_cfil->cfi_snd;
  else
   VAR_7 = &VAR_5->so_cfil->cfi_rcv;

  VAR_6 = VAR_7->cfi_pending_last -
   VAR_7->cfi_pending_first;





  if (VAR_6 > (uint64_t)VAR_7->cfi_pending_mbcnt)
   VAR_6 = VAR_7->cfi_pending_mbcnt;
 }

 FUNC_1(VAR_6 < VAR_1);

 return (int32_t)(VAR_6);
}
