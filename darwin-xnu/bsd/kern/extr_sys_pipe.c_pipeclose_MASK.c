
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct pipe {int pipe_state; struct pipe* pipe_peer; TYPE_1__ pipe_sel; int * pipe_label; scalar_t__ pipe_busy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pipe*) ;
 int * FUNC_2 (struct pipe*) ;
 int FUNC_3 (struct pipe*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct pipe*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct pipe*) ;
 int FUNC_7 (struct pipe*,int *,int ,char*,int ) ;
 int FUNC_8 (struct pipe*) ;
 int FUNC_9 (struct pipe*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct pipe*,struct pipe*) ;
 int FUNC_11 (struct pipe*,int ) ;
 int FUNC_12 (struct pipe*) ;
 int FUNC_13 (int ,struct pipe*) ;

__attribute__((used)) static void
FUNC_14(struct pipe *VAR_9)
{
 struct pipe *VAR_10;

 if (VAR_9 == ((void*)0))
  return;

 if (FUNC_2(VAR_9) != ((void*)0))
  FUNC_1(VAR_9);






 VAR_9->pipe_state &= ~VAR_1;
 VAR_9->pipe_state |= VAR_2;
 FUNC_10(VAR_9, VAR_9);

 while (VAR_9->pipe_busy) {
  VAR_9->pipe_state |= VAR_4;

  FUNC_12(VAR_9);
   FUNC_7(VAR_9, FUNC_2(VAR_9), VAR_6, "pipecl", 0);
 }
 if ((VAR_10 = VAR_9->pipe_peer) != ((void*)0)) {

  VAR_10->pipe_state &= ~(VAR_1);
  VAR_10->pipe_state |= VAR_2;

  FUNC_10(VAR_10, VAR_10);
  FUNC_12(VAR_10);

  if (VAR_9->pipe_state & VAR_3)
          FUNC_0(&VAR_10->pipe_sel.si_note, 1);

  FUNC_11(VAR_10, VAR_0);

  VAR_10->pipe_peer = ((void*)0);
 }
 FUNC_4(VAR_9);




 if (FUNC_2(VAR_9) != ((void*)0)) {
  if (VAR_10 != ((void*)0)) {




   FUNC_3(VAR_9);
  } else {




   FUNC_3(VAR_9);
   FUNC_5(FUNC_2(VAR_9), VAR_7);
  }
 }
 FUNC_8(VAR_9);
 if (VAR_9->pipe_state & VAR_5) {
  FUNC_9(VAR_9);
 } else {
  FUNC_13(VAR_8, VAR_9);
  FUNC_9(((void*)0));
 }

}
