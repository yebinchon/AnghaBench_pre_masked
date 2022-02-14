
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_7__ {int pkt_flags; scalar_t__ pkt_flowsrc; int bufstatus_sndbuf; int bufstatus_if; int pkt_svc; int pkt_proto; int pkt_flowid; } ;
struct mbuf {TYPE_3__ m_pkthdr; } ;
struct bpf_packet {scalar_t__ bpfp_type; int bpfp_total_length; struct mbuf* bpfp_mbuf; } ;
struct TYPE_6__ {int tv_usec; int tv_sec; } ;
struct bpf_hdr_ext {int bh_hdrlen; int bh_caplen; int bh_flags; int bh_unsent_snd; int bh_unsent_bytes; int bh_pktflags; int bh_svc; int bh_proto; int bh_flowid; int bh_datalen; TYPE_2__ bh_tstamp; } ;
struct TYPE_8__ {int tv_usec; int tv_sec; } ;
struct bpf_hdr {int bh_hdrlen; int bh_caplen; int bh_datalen; TYPE_4__ bh_tstamp; } ;
struct bpf_d {int bd_flags; int bd_bufsize; int bd_slen; scalar_t__ bd_hbuf_read; scalar_t__ bd_headdrop; scalar_t__ bd_state; int bd_scnt; scalar_t__ bd_sbuf; scalar_t__ bd_immediate; int * bd_hbuf; int * bd_fbuf; scalar_t__ bd_hcnt; scalar_t__ bd_dcount; TYPE_1__* bd_bif; } ;
struct TYPE_5__ {int bif_exthdrlen; int bif_hdrlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct bpf_d*) ;
 int FUNC_2 (struct bpf_d*) ;
 int FUNC_3 (struct bpf_packet*,int *,int) ;
 int FUNC_4 (struct bpf_hdr_ext*,int ,int) ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct bpf_d *VAR_16, struct bpf_packet * VAR_17,
 u_int VAR_18, int VAR_19)
{
 struct bpf_hdr *VAR_20;
 struct bpf_hdr_ext *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = 0;
 u_char *VAR_27;
 struct timeval VAR_28;

 VAR_24 = (VAR_16->bd_flags & VAR_0) ? VAR_16->bd_bif->bif_exthdrlen :
     VAR_16->bd_bif->bif_hdrlen;






 VAR_22 = VAR_24 + FUNC_6(VAR_18, VAR_17->bpfp_total_length);
 if (VAR_22 > VAR_16->bd_bufsize)
  VAR_22 = VAR_16->bd_bufsize;

 if (VAR_24 > VAR_22)
  return;




 VAR_23 = FUNC_0(VAR_16->bd_slen);
 if (VAR_23 + VAR_22 > VAR_16->bd_bufsize) {
  if (VAR_16->bd_hbuf_read != 0) {
   ++VAR_16->bd_dcount;
   return;
  }

  if (VAR_16->bd_fbuf == ((void*)0)) {
   if (VAR_16->bd_headdrop == 0) {




    ++VAR_16->bd_dcount;
    return;
   }



   VAR_16->bd_dcount += VAR_16->bd_hcnt;
   VAR_16->bd_fbuf = VAR_16->bd_hbuf;
   FUNC_1(VAR_16);
  } else {
   FUNC_1(VAR_16);
  }
  VAR_26 = 1;
  VAR_23 = 0;
 } else if (VAR_16->bd_immediate || VAR_16->bd_state == VAR_7)





  VAR_26 = 1;




 FUNC_5(&VAR_28);
 if (VAR_16->bd_flags & VAR_0) {
  struct mbuf *VAR_29;

  VAR_29 = (VAR_17->bpfp_type == VAR_3)
   ? VAR_17->bpfp_mbuf : ((void*)0);
  VAR_21 = (struct bpf_hdr_ext *)(void *)(VAR_16->bd_sbuf + VAR_23);
  FUNC_4(VAR_21, 0, sizeof(*VAR_21));
  VAR_21->bh_tstamp.tv_sec = VAR_28.tv_sec;
  VAR_21->bh_tstamp.tv_usec = VAR_28.tv_usec;

  VAR_21->bh_datalen = VAR_17->bpfp_total_length;
  VAR_21->bh_hdrlen = VAR_24;
  VAR_25 = VAR_21->bh_caplen = VAR_22 - VAR_24;
  if (VAR_29 == ((void*)0)) {
   if (VAR_19) {
    VAR_21->bh_flags |= VAR_2;
   } else {
    VAR_21->bh_flags |= VAR_1;
   }
  } else if (VAR_19) {
   VAR_21->bh_flags |= VAR_2;


   if ((VAR_29->m_pkthdr.pkt_flags & (VAR_9|
       VAR_10|VAR_11)) ==
       (VAR_9|VAR_10) &&
       VAR_29->m_pkthdr.pkt_flowsrc == VAR_8) {
    VAR_21->bh_flowid = VAR_29->m_pkthdr.pkt_flowid;
    VAR_21->bh_proto = VAR_29->m_pkthdr.pkt_proto;
   }
   VAR_21->bh_svc = FUNC_7(VAR_29->m_pkthdr.pkt_svc);
   if (VAR_29->m_pkthdr.pkt_flags & VAR_14)
    VAR_21->bh_pktflags |= VAR_6;
   if (VAR_29->m_pkthdr.pkt_flags & VAR_13)
    VAR_21->bh_pktflags |= VAR_5;
   if (VAR_29->m_pkthdr.pkt_flags & VAR_12)
    VAR_21->bh_pktflags |= VAR_4;
   if (VAR_29->m_pkthdr.pkt_flags & VAR_15) {
    VAR_21->bh_unsent_bytes =
        VAR_29->m_pkthdr.bufstatus_if;
    VAR_21->bh_unsent_snd =
        VAR_29->m_pkthdr.bufstatus_sndbuf;
   }
  } else
   VAR_21->bh_flags |= VAR_1;
  VAR_27 = (u_char *)VAR_21 + VAR_24;
 } else {
  VAR_20 = (struct bpf_hdr *)(void *)(VAR_16->bd_sbuf + VAR_23);
  VAR_20->bh_tstamp.tv_sec = VAR_28.tv_sec;
  VAR_20->bh_tstamp.tv_usec = VAR_28.tv_usec;
  VAR_20->bh_datalen = VAR_17->bpfp_total_length;
  VAR_20->bh_hdrlen = VAR_24;
  VAR_25 = VAR_20->bh_caplen = VAR_22 - VAR_24;
  VAR_27 = (u_char *)VAR_20 + VAR_24;
 }



 FUNC_3(VAR_17, VAR_27, VAR_25);
 VAR_16->bd_slen = VAR_23 + VAR_22;
 VAR_16->bd_scnt += 1;

 if (VAR_26)
  FUNC_2(VAR_16);
}
