
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ u_int64_t ;
struct timespec {int dummy; } ;
struct TYPE_2__ {int pkt_flags; int pkt_flowsrc; scalar_t__ pkt_timestamp; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; int * m_nextpkt; } ;
struct ifnet {int if_eflags; int if_start_delay_timeout; scalar_t__ if_start_delay_swin; int if_start_delay_cnt; int if_start_delay_idle; int if_start_delay_qlen; int if_snd; void* if_rt_sendts; void* if_fg_sendts; } ;
typedef int errno_t ;
typedef int classq_pkt_type_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int FUNC_1 (int ) ;
 void* VAR_11 ;
 int FUNC_2 (int *,struct mbuf*,int const,scalar_t__*) ;
 int VAR_12 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct timespec*) ;
 int FUNC_5 (struct timespec*,scalar_t__*) ;

__attribute__((used)) static inline errno_t
FUNC_6(struct ifnet *VAR_13, void *VAR_14, classq_pkt_type_t VAR_15,
    boolean_t VAR_16, boolean_t *VAR_17)
{
 volatile uint64_t *VAR_18 = ((void*)0);
 volatile uint64_t *VAR_19 = ((void*)0);
 struct mbuf *VAR_20 = VAR_14;
 struct timespec VAR_21;
 u_int64_t VAR_22 = 0;
 int VAR_23 = 0;

 FUNC_0(VAR_13->if_eflags & VAR_5);







 switch (VAR_15) {
 case 128:
  FUNC_0(VAR_20->m_flags & VAR_6);
  FUNC_0(VAR_20->m_nextpkt == ((void*)0));

  if (!(VAR_20->m_pkthdr.pkt_flags & VAR_10) ||
      VAR_20->m_pkthdr.pkt_timestamp == 0) {
   FUNC_4(&VAR_21);
   FUNC_5(&VAR_21, &VAR_22);
   VAR_20->m_pkthdr.pkt_timestamp = VAR_22;
  }
  VAR_20->m_pkthdr.pkt_flags &= ~VAR_10;





  if ((VAR_20->m_pkthdr.pkt_flags & VAR_7) &&
      VAR_20->m_pkthdr.pkt_flowsrc == VAR_2) {
   if (!(VAR_20->m_pkthdr.pkt_flags & VAR_8)) {
    VAR_13->if_fg_sendts = VAR_11;
    if (VAR_18 != ((void*)0))
     *VAR_18 = VAR_11;
   }
   if (VAR_20->m_pkthdr.pkt_flags & VAR_9) {
    VAR_13->if_rt_sendts = VAR_11;
    if (VAR_19 != ((void*)0))
     *VAR_19 = VAR_11;
   }
  }
  break;


 default:
  FUNC_1(0);

 }

 if (VAR_13->if_eflags & VAR_4) {
  if (VAR_22 == 0) {
   FUNC_4(&VAR_21);
   FUNC_5(&VAR_21, &VAR_22);
  }
  u_int64_t VAR_24 = (VAR_13->if_start_delay_timeout << 1);
  if (VAR_13->if_start_delay_swin > 0) {
   if ((VAR_13->if_start_delay_swin + VAR_24) > VAR_22) {
    VAR_13->if_start_delay_cnt++;
   } else if ((VAR_22 - VAR_13->if_start_delay_swin)
       >= (200 * 1000 * 1000)) {
    VAR_13->if_start_delay_swin = VAR_22;
    VAR_13->if_start_delay_cnt = 1;
    VAR_13->if_start_delay_idle = 0;
    if (VAR_13->if_eflags & VAR_3) {
     VAR_13->if_eflags &=
         ~(VAR_3);
     VAR_12++;
    }
   } else {
    if (VAR_13->if_start_delay_cnt >=
        VAR_13->if_start_delay_qlen) {
     VAR_13->if_eflags |= VAR_3;
     VAR_13->if_start_delay_idle = 0;
    } else {
     if (VAR_13->if_start_delay_idle >= 10) {
      VAR_13->if_eflags &= ~(VAR_3);
      VAR_12++;
     } else {
      VAR_13->if_start_delay_idle++;
     }
    }
    VAR_13->if_start_delay_swin = VAR_22;
    VAR_13->if_start_delay_cnt = 1;
   }
  } else {
   VAR_13->if_start_delay_swin = VAR_22;
   VAR_13->if_start_delay_cnt = 1;
   VAR_13->if_start_delay_idle = 0;
   VAR_13->if_eflags &= ~(VAR_3);
  }
 } else {
  VAR_13->if_eflags &= ~(VAR_3);
 }

 switch (VAR_15) {
 case 128:

  VAR_23 = FUNC_2(&VAR_13->if_snd, VAR_20, 128, VAR_17);
  VAR_20 = ((void*)0);
  break;


 default:
  break;
 }






 if (!(VAR_13->if_eflags & VAR_4) &&
     ((VAR_23 == 0 && VAR_16) || VAR_23 == VAR_0 || VAR_23 == VAR_1))
  FUNC_3(VAR_13);

 return (VAR_23);
}
