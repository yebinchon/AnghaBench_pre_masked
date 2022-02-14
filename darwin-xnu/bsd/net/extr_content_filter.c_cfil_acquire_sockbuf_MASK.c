
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int * thread_t ;
struct sockbuf {int sb_flags; scalar_t__ sb_wantlock; scalar_t__ sb_cfil_refs; int * sb_cfil_thread; } ;
struct socket {TYPE_2__* so_proto; struct sockbuf so_rcv; struct sockbuf so_snd; } ;
struct cfil_info {int cfi_flags; } ;
typedef int lck_mtx_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; int * (* pr_getlock ) (struct socket*,int ) ;} ;
struct TYPE_3__ {int * dom_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int*,int *,int ,char*,int *) ;
 int * FUNC_6 (struct socket*,int ) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_7, struct cfil_info *VAR_8, int VAR_9)
{
 thread_t VAR_10 = FUNC_4();
 struct sockbuf *VAR_11 = VAR_9 ? &VAR_7->so_snd : &VAR_7->so_rcv;
 lck_mtx_t *VAR_12;
 int VAR_13 = 0;





 while ((VAR_11->sb_flags & VAR_6) ||
  (VAR_11->sb_cfil_thread != ((void*)0) && VAR_11->sb_cfil_thread != VAR_10)) {
  if (VAR_7->so_proto->pr_getlock != ((void*)0))
   VAR_12 = (*VAR_7->so_proto->pr_getlock)(VAR_7, VAR_4);
  else
   VAR_12 = VAR_7->so_proto->pr_domain->dom_mtx;

  FUNC_1(VAR_12, VAR_2);

  VAR_11->sb_wantlock++;
  FUNC_2(VAR_11->sb_wantlock != 0);

  FUNC_5(&VAR_11->sb_flags, VAR_12, VAR_5, "cfil_acquire_sockbuf",
   ((void*)0));

  FUNC_2(VAR_11->sb_wantlock != 0);
  VAR_11->sb_wantlock--;
 }



 if (VAR_11->sb_cfil_refs == 0) {
  FUNC_2(VAR_11->sb_cfil_thread == ((void*)0));
  FUNC_2((VAR_11->sb_flags & VAR_6) == 0);

  VAR_11->sb_cfil_thread = VAR_10;
  VAR_11->sb_flags |= VAR_6;
 }
 VAR_11->sb_cfil_refs++;


 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_3, "so %llx cfil detached",
   (uint64_t)FUNC_3(VAR_7));
  VAR_13 = 0;
 } else if (VAR_8->cfi_flags & VAR_0) {
  FUNC_0(VAR_3, "so %llx drop set",
   (uint64_t)FUNC_3(VAR_7));
  VAR_13 = VAR_1;
 }

 return (VAR_13);
}
