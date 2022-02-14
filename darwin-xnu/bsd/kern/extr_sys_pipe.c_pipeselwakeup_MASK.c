
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct pipe {int pipe_state; int pipe_pgid; TYPE_1__ pipe_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pipe*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct pipe *VAR_5, struct pipe *VAR_6)
{
 if (VAR_5->pipe_state & VAR_3) {
  VAR_5->pipe_state &= ~VAR_3;
  FUNC_4(&VAR_5->pipe_sel);
 }
        if (VAR_5->pipe_state & VAR_2)
        FUNC_0(&VAR_5->pipe_sel.si_note, 1);

 FUNC_2(VAR_5, VAR_0);

 if (VAR_6 && (VAR_6->pipe_state & VAR_1) && VAR_6->pipe_pgid) {
         if (VAR_6->pipe_pgid < 0)
          FUNC_1(-VAR_6->pipe_pgid, VAR_4);
  else
          FUNC_3(VAR_6->pipe_pgid, VAR_4);
        }
}
