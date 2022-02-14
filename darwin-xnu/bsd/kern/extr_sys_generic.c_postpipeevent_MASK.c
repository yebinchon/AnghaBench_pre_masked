
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ cnt; int size; } ;
struct TYPE_5__ {struct eventqelt* tqh_first; } ;
struct pipe {int pipe_state; TYPE_3__ pipe_buffer; TYPE_1__ pipe_evlist; } ;
struct TYPE_8__ {int er_eventbits; scalar_t__ er_wcnt; scalar_t__ er_rcnt; } ;
struct TYPE_6__ {struct eventqelt* tqe_next; } ;
struct eventqelt {scalar_t__ ee_eventmask; TYPE_4__ ee_req; TYPE_2__ ee_slist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int,int,int,int,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct eventqelt*) ;

void
FUNC_3(struct pipe *VAR_9, int VAR_10)
{
 int VAR_11;
 struct eventqelt *VAR_12;

 if (VAR_9 == ((void*)0))
         return;
 FUNC_0(VAR_2|VAR_1, VAR_10,0,0,1,0);

 for (VAR_12 = VAR_9->pipe_evlist.tqh_first;
      VAR_12 != ((void*)0); VAR_12 = VAR_12->ee_slist.tqe_next) {

         if (VAR_12->ee_eventmask == 0)
          continue;
         VAR_11 = 0;

  switch (VAR_10 & (129 | 130 | 128)) {

  case 129:
    if ((VAR_12->ee_eventmask & VAR_3) && VAR_9->pipe_buffer.cnt) {
            VAR_11 |= VAR_3;
     VAR_12->ee_req.er_rcnt = VAR_9->pipe_buffer.cnt;
    }
    if ((VAR_12->ee_eventmask & VAR_5) &&
        (FUNC_1(VAR_9->pipe_buffer.size,VAR_8) - VAR_9->pipe_buffer.cnt) >= VAR_6) {

            if (VAR_9->pipe_state & VAR_7) {
             VAR_11 |= VAR_5|VAR_4;
      break;
     }
     VAR_11 |= VAR_5;
     VAR_12->ee_req.er_wcnt = FUNC_1(VAR_9->pipe_buffer.size, VAR_8) - VAR_9->pipe_buffer.cnt;
    }
    break;

  case 128:
  case 130:
    if ((VAR_12->ee_eventmask & VAR_3)) {
            VAR_11 |= VAR_3|130;
    }
    if ((VAR_12->ee_eventmask & VAR_5)) {
            VAR_11 |= VAR_5|128;
    }
    break;

  default:
    return;
  }
  if (VAR_11) {




          VAR_12->ee_eventmask = 0;
          VAR_12->ee_req.er_eventbits |= VAR_11;

   FUNC_0(VAR_2, (uint32_t)VAR_12, VAR_12->ee_req.er_eventbits, VAR_11, 1,0);

   FUNC_2(VAR_12);
  }
 }
 FUNC_0(VAR_2|VAR_0, 0,0,0,1,0);
}
