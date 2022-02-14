
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe*) ;

__attribute__((used)) static inline void
FUNC_1(struct pipe *VAR_2)
{
 VAR_2->pipe_state &= ~VAR_0;
 if (VAR_2->pipe_state & VAR_1) {
  VAR_2->pipe_state &= ~VAR_1;
  FUNC_0(VAR_2);
 }
}
