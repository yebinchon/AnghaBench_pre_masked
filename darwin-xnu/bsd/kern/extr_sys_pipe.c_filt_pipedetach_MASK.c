
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct pipe {int pipe_state; TYPE_1__ pipe_sel; struct pipe* pipe_peer; } ;
struct knote {scalar_t__ kn_filter; TYPE_2__* kn_fp; } ;
struct TYPE_4__ {scalar_t__ f_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct knote*) ;
 int VAR_1 ;
 int FUNC_1 (struct pipe*) ;
 int FUNC_2 (struct pipe*) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_2)
{
 struct pipe *VAR_3 = (struct pipe *)VAR_2->kn_fp->f_data;

 FUNC_1(VAR_3);

 if (VAR_2->kn_filter == VAR_0) {
         if (VAR_3->pipe_peer == ((void*)0)) {
          FUNC_2(VAR_3);
   return;
  }
  VAR_3 = VAR_3->pipe_peer;
 }
 if (VAR_3->pipe_state & VAR_1) {
         if (FUNC_0(&VAR_3->pipe_sel.si_note, VAR_2))
          VAR_3->pipe_state &= ~VAR_1;
 }
 FUNC_2(VAR_3);
}
