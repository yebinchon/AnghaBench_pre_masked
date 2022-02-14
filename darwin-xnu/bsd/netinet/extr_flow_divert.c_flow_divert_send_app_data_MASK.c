
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct flow_divert_pcb {size_t send_window; TYPE_5__* so; } ;
typedef int * mbuf_t ;
struct TYPE_6__ {int sb_cc; } ;
struct TYPE_7__ {TYPE_1__ so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int,...) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct flow_divert_pcb*,int *,size_t,struct sockaddr*,int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,int ,int **) ;
 int FUNC_5 (TYPE_1__*,struct sockaddr*,int *,int *,int*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(struct flow_divert_pcb *VAR_7, mbuf_t VAR_8, struct sockaddr *VAR_9)
{
 size_t VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = 0;

 if (VAR_10 > VAR_7->send_window) {
  VAR_10 = VAR_7->send_window;
 }

 if (VAR_7->so->so_snd.sb_cc > 0) {
  VAR_10 = 0;
 }

 if (FUNC_1(VAR_7->so) == VAR_6) {
  size_t VAR_12 = 0;
  mbuf_t VAR_13 = VAR_8;
  mbuf_t VAR_14 = ((void*)0);
  while (VAR_12 < VAR_10 && VAR_13 != ((void*)0)) {
   size_t VAR_15;

   VAR_14 = VAR_13;

   if ((VAR_10 - VAR_12) > VAR_2) {
    VAR_15 = VAR_2;
   } else {
    VAR_15 = VAR_10 - VAR_12;
   }

   if (VAR_15 < FUNC_3(VAR_14)) {
    VAR_11 = FUNC_4(VAR_14, VAR_15, VAR_4, &VAR_13);
    if (VAR_11) {
     FUNC_0(VAR_3, VAR_7, "mbuf_split failed: %d", VAR_11);
     VAR_14 = ((void*)0);
     break;
    }
   } else {
    VAR_13 = ((void*)0);
   }

   VAR_11 = FUNC_2(VAR_7, VAR_14, VAR_15, ((void*)0), VAR_1);

   if (VAR_11) {
    break;
   }

   VAR_14 = ((void*)0);
   VAR_12 += VAR_15;
  }

  VAR_7->send_window -= VAR_12;

  VAR_11 = 0;

  if (VAR_14 != ((void*)0)) {
   if (FUNC_8(&VAR_7->so->so_snd) > 0) {
    if (!FUNC_7(&VAR_7->so->so_snd, VAR_14)) {
     FUNC_0(VAR_3, VAR_7, "sbappendstream failed with pkt_data, send buffer size = %u, send_window = %u\n",
       VAR_7->so->so_snd.sb_cc, VAR_7->send_window);
    }
   } else {
    VAR_11 = VAR_0;
   }
  }

  if (VAR_13 != ((void*)0)) {
   if (FUNC_8(&VAR_7->so->so_snd) > 0) {
    if (!FUNC_7(&VAR_7->so->so_snd, VAR_13)) {
     FUNC_0(VAR_3, VAR_7, "sbappendstream failed with remaining_data, send buffer size = %u, send_window = %u\n",
       VAR_7->so->so_snd.sb_cc, VAR_7->send_window);
    }
   } else {
    VAR_11 = VAR_0;
   }
  }
 } else if (FUNC_1(VAR_7->so) == VAR_5) {
  if (VAR_10 || FUNC_3(VAR_8) == 0) {
   VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_10, VAR_9, VAR_1);
   if (VAR_11) {
    FUNC_0(VAR_3, VAR_7, "flow_divert_send_data_packet failed. send data size = %lu", VAR_10);
   } else {
    VAR_7->send_window -= VAR_10;
   }
  } else {

   if (FUNC_8(&VAR_7->so->so_snd) >= (int)FUNC_3(VAR_8)) {
    if (VAR_9 != ((void*)0)) {
     if (!FUNC_5(&VAR_7->so->so_snd, VAR_9, VAR_8, ((void*)0), &VAR_11)) {
      FUNC_0(VAR_3, VAR_7,
       "sbappendaddr failed. send buffer size = %u, send_window = %u, error = %d\n",
       VAR_7->so->so_snd.sb_cc, VAR_7->send_window, VAR_11);
     }
    } else {
     if (!FUNC_6(&VAR_7->so->so_snd, VAR_8)) {
      FUNC_0(VAR_3, VAR_7,
       "sbappendrecord failed. send buffer size = %u, send_window = %u, error = %d\n",
       VAR_7->so->so_snd.sb_cc, VAR_7->send_window, VAR_11);
     }
    }
   } else {
    VAR_11 = VAR_0;
   }
  }
 }

 return VAR_11;
}
