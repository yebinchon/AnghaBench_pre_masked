
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {int so_flags; TYPE_2__* so_cfil; } ;
struct sockbuf {int sb_flags; struct socket* sb_so; } ;
struct TYPE_5__ {int cfi_flags; } ;
struct TYPE_4__ {int cfs_inject_q_in_retry; int cfs_inject_q_out_retry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*,TYPE_2__*,int) ;
 int FUNC_5 (struct socket*,int) ;
 int VAR_5 ;
 int FUNC_6 (struct socket*,TYPE_2__*,int) ;
 int FUNC_7 (struct sockbuf*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_8 (struct socket*) ;

void
FUNC_9(struct sockbuf *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct socket *VAR_10 = VAR_7->sb_so;

    if (FUNC_1(VAR_10)) {
  FUNC_7(VAR_7);
  return;
    }

 if ((VAR_10->so_flags & VAR_4) == 0 || VAR_10->so_cfil == ((void*)0))
  return;

 if (!VAR_5)
  return;

 FUNC_8(VAR_10);

 if ((VAR_7->sb_flags & VAR_3) == 0) {
  if ((VAR_10->so_cfil->cfi_flags & VAR_1) == 0)
   return;
  VAR_8 = 1;
  FUNC_2(&VAR_6.cfs_inject_q_out_retry);
 } else {
  if ((VAR_10->so_cfil->cfi_flags & VAR_0) == 0)
   return;
  VAR_8 = 0;
  FUNC_2(&VAR_6.cfs_inject_q_in_retry);
 }

 FUNC_0(VAR_2, "so %llx outgoing %d",
  (uint64_t)FUNC_3(VAR_10), VAR_8);

 VAR_9 = FUNC_4(VAR_10, VAR_10->so_cfil, VAR_8);
 if (VAR_9 == 0)
  FUNC_6(VAR_10, VAR_10->so_cfil, VAR_8);
 FUNC_5(VAR_10, VAR_8);
}
