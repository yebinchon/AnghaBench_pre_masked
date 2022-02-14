
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct flow_divert_pcb {size_t send_window; TYPE_2__* so; } ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_14__ {size_t sb_cc; TYPE_1__* sb_mb; } ;
struct TYPE_13__ {TYPE_3__ so_snd; } ;
struct TYPE_12__ {scalar_t__ m_type; struct TYPE_12__* m_nextpkt; struct TYPE_12__* m_next; } ;
typedef int Boolean ;


 int FUNC_0 (int ,struct flow_divert_pcb*,char*,size_t) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 struct sockaddr* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct flow_divert_pcb*,TYPE_1__*,size_t,struct sockaddr*,int ) ;
 int FUNC_5 (TYPE_1__*,size_t,size_t,int ,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,size_t) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(struct flow_divert_pcb *VAR_7, Boolean VAR_8)
{
 size_t VAR_9;
 size_t VAR_10 = 0;
 int VAR_11 = 0;
 mbuf_t VAR_12;

 VAR_9 = VAR_7->so->so_snd.sb_cc;
 VAR_12 = VAR_7->so->so_snd.sb_mb;

 if (VAR_12 == ((void*)0) && VAR_9 > 0) {
  FUNC_0(VAR_2, VAR_7, "Send buffer is NULL, but size is supposed to be %lu", VAR_9);
  return;
 }


 if (!VAR_8 && (VAR_9 > VAR_7->send_window)) {
  VAR_9 = VAR_7->send_window;
 }

 if (FUNC_2(VAR_7->so) == VAR_6) {
  while (VAR_10 < VAR_9) {
   mbuf_t VAR_13;
   size_t VAR_14;

   VAR_14 = VAR_9 - VAR_10;
   if (VAR_14 > VAR_0) {
    VAR_14 = VAR_0;
   }

   VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_14, VAR_3, &VAR_13);
   if (VAR_11) {
    FUNC_0(VAR_2, VAR_7, "mbuf_copym failed: %d", VAR_11);
    break;
   }

   VAR_11 = FUNC_4(VAR_7, VAR_13, VAR_14, ((void*)0), VAR_8);
   if (VAR_11) {
    FUNC_6(VAR_13);
    break;
   }

   VAR_10 += VAR_14;
  }
  FUNC_8(&VAR_7->so->so_snd, VAR_10);
  FUNC_10(VAR_7->so);
 } else if (FUNC_2(VAR_7->so) == VAR_5) {
  mbuf_t VAR_15;
  mbuf_t VAR_16;
  size_t VAR_17;

  while(VAR_12) {
   struct sockaddr *VAR_18 = FUNC_3(VAR_12);

   VAR_16 = VAR_12;
   if (VAR_18 != ((void*)0)) {

    do {
     VAR_16 = VAR_16->m_next;
     if (VAR_16 != ((void*)0) && VAR_16->m_type == VAR_4) {
      break;
     }
    } while(VAR_16);
    if (VAR_16 == ((void*)0)) {

     FUNC_1(VAR_2, VAR_7, "failed to find type MT_DATA in the mbuf chain.");
     goto move_on;
    }
   }
   VAR_17 = FUNC_7(VAR_16);
   if (VAR_17 > 0) {
    FUNC_0(VAR_1, VAR_7, "mbuf_copym() data_len = %lu", VAR_17);
    VAR_11 = FUNC_5(VAR_16, 0, VAR_17, VAR_3, &VAR_15);
    if (VAR_11) {
     FUNC_0(VAR_2, VAR_7, "mbuf_copym failed: %d", VAR_11);
     break;
    }
   } else {
    VAR_15 = ((void*)0);
   }
   VAR_11 = FUNC_4(VAR_7, VAR_15, VAR_17, VAR_18, VAR_8);
   if (VAR_11) {
    FUNC_6(VAR_15);
    break;
   }
   VAR_10 += VAR_17;
move_on:
   VAR_12 = VAR_12->m_nextpkt;
   (void) FUNC_9(&(VAR_7->so->so_snd));
  }
 }

 if (VAR_10 > 0) {
  FUNC_0(VAR_1, VAR_7, "sent %lu bytes of buffered data", VAR_10);
  if (VAR_7->send_window >= VAR_10) {
   VAR_7->send_window -= VAR_10;
  } else {
   VAR_7->send_window = 0;
  }
 }
}
