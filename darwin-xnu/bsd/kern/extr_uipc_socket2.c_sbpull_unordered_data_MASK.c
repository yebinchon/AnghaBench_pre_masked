
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct mbuf* sb_mb; struct mbuf* sb_lastrecord; struct mbuf* sb_mbtail; } ;
struct socket {TYPE_2__ so_snd; TYPE_1__* so_msg_state; } ;
struct msg_priq {int msgq_flags; scalar_t__ msgq_bytes; struct mbuf* msgq_lastmsg; int * msgq_tail; struct mbuf* msgq_head; } ;
struct mbuf {scalar_t__ m_len; int m_flags; struct mbuf* m_next; struct mbuf* m_nextpkt; } ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {scalar_t__ msg_serial_bytes; struct msg_priq* msg_priq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct socket *VAR_4, int32_t VAR_5, int32_t VAR_6)
{
 int32_t VAR_7, VAR_8;
 struct msg_priq *VAR_9 = ((void*)0);

 FUNC_0(VAR_4->so_msg_state != ((void*)0));

 VAR_7 = (VAR_5 + VAR_6) - VAR_4->so_msg_state->msg_serial_bytes;

 VAR_8 = VAR_1;
 while (VAR_8 >= VAR_2 && VAR_7 > 0) {
  struct mbuf *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  VAR_9 = &VAR_4->so_msg_state->msg_priq[VAR_8];
  if ((VAR_9->msgq_flags & VAR_0) &&
      VAR_9->msgq_head == ((void*)0)) {





   FUNC_0(VAR_9->msgq_lastmsg == ((void*)0) &&
       VAR_9->msgq_tail == ((void*)0));
   return;
  }
  if (VAR_9->msgq_head != ((void*)0)) {
   int32_t VAR_13 = 0, VAR_14 = VAR_7;




   VAR_10 = VAR_9->msgq_head;
   VAR_11 = VAR_10;
   VAR_12 = VAR_10;






   while (VAR_11->m_next != ((void*)0) && VAR_14 > 0) {
    VAR_13 += VAR_11->m_len;
    VAR_14 -= VAR_11->m_len;
    VAR_12 = VAR_11;
    VAR_11 = VAR_11->m_next;
   }

   if (VAR_11->m_next == ((void*)0)) {






    VAR_13 += VAR_11->m_len;
    VAR_12 = VAR_11;
    VAR_11 = VAR_10->m_nextpkt;
    if (!(VAR_12->m_flags & VAR_3)) {





     VAR_9->msgq_flags |= VAR_0;
    } else {

     VAR_12->m_flags &= ~(VAR_3);
    }
   } else {

    VAR_11->m_nextpkt = VAR_10->m_nextpkt;
   }
   VAR_9->msgq_head = VAR_11;






   if (VAR_9->msgq_lastmsg == VAR_10)
    VAR_9->msgq_lastmsg = VAR_9->msgq_head;

   VAR_10->m_nextpkt = ((void*)0);
   VAR_12->m_next = ((void*)0);

   if (VAR_9->msgq_head == ((void*)0)) {

    VAR_9->msgq_tail = ((void*)0);
    FUNC_0(VAR_9->msgq_lastmsg == ((void*)0));
   }


   if (VAR_4->so_snd.sb_mb == ((void*)0)) {
    VAR_4->so_snd.sb_mb = VAR_10;
   } else {
    VAR_4->so_snd.sb_mbtail->m_next = VAR_10;
   }

   VAR_9->msgq_bytes -= VAR_13;
   FUNC_0(VAR_9->msgq_bytes >= 0);
   FUNC_3(&VAR_4->so_snd);

   VAR_4->so_msg_state->msg_serial_bytes += VAR_13;
   VAR_4->so_snd.sb_mbtail = VAR_12;
   VAR_4->so_snd.sb_lastrecord = VAR_4->so_snd.sb_mb;

   VAR_7 =
       (VAR_5 + VAR_6) - VAR_4->so_msg_state->msg_serial_bytes;

   if (VAR_9->msgq_flags & VAR_0)
    break;
  } else {
   --VAR_8;
  }
 }
 FUNC_2(&VAR_4->so_snd, "sbpull_unordered_data");
 FUNC_1(&VAR_4->so_snd, "sbpull_unordered_data");
}
