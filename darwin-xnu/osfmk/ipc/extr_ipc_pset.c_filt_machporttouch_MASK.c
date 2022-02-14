
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_mqueue; } ;
struct knote {int kn_sfflags; int * kn_ext; TYPE_1__ kn_ptr; } ;
struct kevent_internal_s {int fflags; int flags; int * ext; } ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef int ipc_kmsg_t ;
struct TYPE_8__ {int imq_messages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct knote*,int ) ;
 int FUNC_1 (struct knote*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(
 struct knote *VAR_5,
 struct kevent_internal_s *VAR_6)
{
 ipc_mqueue_t VAR_7 = VAR_5->kn_ptr.p_mqueue;
 ipc_kmsg_t VAR_8;
 int VAR_9 = 0;


 VAR_5->kn_sfflags = VAR_6->fflags;
 VAR_5->kn_ext[0] = VAR_6->ext[0];
 VAR_5->kn_ext[1] = VAR_6->ext[1];

 if (VAR_6->flags & VAR_0) {




  FUNC_1(VAR_5);
 }
 FUNC_4(VAR_7);
 if (FUNC_3(VAR_7) && !FUNC_2(VAR_7) &&
     (VAR_8 = FUNC_6(&VAR_7->imq_messages)) != VAR_3) {
  VAR_9 = VAR_1 | FUNC_0(VAR_5, VAR_8);
 } else if (VAR_5->kn_sfflags & VAR_4) {
  VAR_9 = VAR_2;
 }
 FUNC_5(VAR_7);

 return VAR_9;
}
