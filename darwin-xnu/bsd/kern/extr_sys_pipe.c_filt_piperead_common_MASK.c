
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cnt; scalar_t__ size; } ;
struct pipe {int pipe_state; TYPE_1__ pipe_buffer; struct pipe* pipe_peer; } ;
struct knote {scalar_t__ kn_data; int kn_sfflags; scalar_t__ kn_sdata; int kn_flags; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pipe*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_4, struct pipe *VAR_5)
{
 struct pipe *VAR_6;
 int VAR_7;






 VAR_6 = VAR_5->pipe_peer;
 VAR_4->kn_data = VAR_5->pipe_buffer.cnt;
 if ((VAR_5->pipe_state & (VAR_2 | VAR_3)) ||
     (VAR_6 == ((void*)0)) || (VAR_6->pipe_state & (VAR_2 | VAR_3))) {
  VAR_4->kn_flags |= VAR_0;
  VAR_7 = 1;
 } else {
  int64_t VAR_8 = 1;
  if (VAR_4->kn_sfflags & VAR_1) {
   if (VAR_5->pipe_buffer.size && VAR_4->kn_sdata > FUNC_0(VAR_5))
    VAR_8 = FUNC_0(VAR_5);
   else if (VAR_4->kn_sdata > VAR_8)
    VAR_8 = VAR_4->kn_sdata;
  }
  VAR_7 = VAR_4->kn_data >= VAR_8;
 }
 return (VAR_7);
}
