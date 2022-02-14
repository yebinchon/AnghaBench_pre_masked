
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct TYPE_2__ {scalar_t__ cnt; } ;
struct pipe {int pipe_state; int pipe_sel; TYPE_1__ pipe_buffer; struct pipe* pipe_peer; } ;
struct fileproc {scalar_t__ f_data; } ;




 scalar_t__ FUNC_0 (struct pipe*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pipe*) ;
 int VAR_4 ;
 int FUNC_2 (struct pipe*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,struct pipe*,int) ;
 int FUNC_4 (int ,int *,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct fileproc *VAR_6, int VAR_7, void *VAR_8, vfs_context_t VAR_9)
{
 struct pipe *VAR_10 = (struct pipe *)VAR_6->f_data;
 struct pipe *VAR_11;
 int VAR_12 = 0;

 if (VAR_10 == ((void*)0) || VAR_10 == (struct pipe *)-1)
         return (VAR_12);

 FUNC_1(VAR_10);

 VAR_11 = VAR_10->pipe_peer;
        switch (VAR_7) {

        case 129:
  if ((VAR_10->pipe_state & VAR_1) ||
      (VAR_10->pipe_buffer.cnt > 0) ||
      (VAR_10->pipe_state & (VAR_2 | VAR_3))) {

          VAR_12 = 1;
  } else {
          VAR_10->pipe_state |= VAR_4;
          FUNC_4(FUNC_5(VAR_9), &VAR_10->pipe_sel, VAR_8);
  }
  break;

        case 128:
  if (VAR_11)
   VAR_11->pipe_state |= VAR_5;
  if (VAR_11 == ((void*)0) || (VAR_11->pipe_state & (VAR_2 | VAR_3)) ||
      (((VAR_11->pipe_state & VAR_1) == 0) &&
       (FUNC_0(VAR_11) - VAR_11->pipe_buffer.cnt) >= VAR_0)) {

          VAR_12 = 1;
  } else {
          VAR_11->pipe_state |= VAR_4;
   FUNC_4(FUNC_5(VAR_9), &VAR_11->pipe_sel, VAR_8);
  }
  break;
        case 0:
         VAR_10->pipe_state |= VAR_4;
  FUNC_4(FUNC_5(VAR_9), &VAR_10->pipe_sel, VAR_8);
  break;
        }
 FUNC_2(VAR_10);

        return (VAR_12);
}
