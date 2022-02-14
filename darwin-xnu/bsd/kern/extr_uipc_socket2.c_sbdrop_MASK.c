
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockbuf {int sb_flags; int sb_ctl; struct mbuf* sb_lastrecord; int * sb_mbtail; struct mbuf* sb_mb; TYPE_2__* sb_so; scalar_t__ sb_cc; scalar_t__ sb_mbcnt; } ;
struct mbuf {int m_len; int m_data; scalar_t__ m_type; struct mbuf* m_nextpkt; struct mbuf* m_next; } ;
struct TYPE_8__ {int so_flags; int so_flags1; TYPE_1__* so_msg_state; } ;
struct TYPE_7__ {scalar_t__ msg_serial_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockbuf*,int,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (TYPE_2__*,struct mbuf*,int) ;
 int FUNC_7 (TYPE_2__*,struct mbuf*,unsigned int) ;
 int FUNC_8 (int ,struct sockbuf*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct sockbuf*,struct mbuf*) ;

void
FUNC_11(struct sockbuf *VAR_14, int VAR_15)
{
 struct mbuf *VAR_16, *VAR_17, *VAR_18;
 struct mbuf *VAR_19, *VAR_20;

 VAR_19 = (VAR_16 = VAR_14->sb_mb) ? VAR_16->m_nextpkt : 0;
 FUNC_0((VAR_0 | VAR_2), VAR_14, VAR_15, 0, 0, 0);

 VAR_17 = VAR_20 = VAR_16;
 VAR_18 = (struct mbuf *)0;

 while (VAR_15 > 0) {
  if (VAR_16 == ((void*)0)) {
   if (VAR_19 == ((void*)0)) {
    FUNC_9("sbdrop - count not zero\n");
    VAR_15 = 0;




    VAR_14->sb_cc = 0;
    VAR_14->sb_mbcnt = 0;
    if (!(VAR_14->sb_flags & VAR_9) &&
        (VAR_14->sb_so->so_flags & VAR_12)) {
     VAR_14->sb_so->so_msg_state->
         msg_serial_bytes = 0;
    }
    break;
   }
   VAR_16 = VAR_20 = VAR_19;
   VAR_19 = VAR_16->m_nextpkt;
   continue;
  }
  if (VAR_16->m_len > VAR_15) {
   VAR_16->m_len -= VAR_15;
   VAR_16->m_data += VAR_15;
   VAR_14->sb_cc -= VAR_15;

   if (VAR_14->sb_flags & VAR_10)
     FUNC_4(VAR_14->sb_so, VAR_15);
   if (VAR_16->m_type != VAR_5 && VAR_16->m_type != VAR_6 &&
       VAR_16->m_type != VAR_7)
    VAR_14->sb_ctl -= VAR_15;
   break;
  }
  VAR_15 -= VAR_16->m_len;
  FUNC_10(VAR_14, VAR_16);

  VAR_18 = VAR_16;
  VAR_16 = VAR_16->m_next;
 }
 while (VAR_16 && VAR_16->m_len == 0) {
  FUNC_10(VAR_14, VAR_16);

  VAR_18 = VAR_16;
  VAR_16 = VAR_16->m_next;
 }
 if (VAR_18) {
  VAR_18->m_next = (struct mbuf *)0;
  VAR_20->m_nextpkt = (struct mbuf *)0;
  FUNC_5(VAR_17);
 }
 if (VAR_16) {
  VAR_14->sb_mb = VAR_16;
  VAR_16->m_nextpkt = VAR_19;
 } else {
  VAR_14->sb_mb = VAR_19;
 }






 VAR_16 = VAR_14->sb_mb;
 if (VAR_16 == ((void*)0)) {
  VAR_14->sb_mbtail = ((void*)0);
  VAR_14->sb_lastrecord = ((void*)0);
 } else if (VAR_16->m_nextpkt == ((void*)0)) {
  VAR_14->sb_lastrecord = VAR_16;
 }





 FUNC_8(0, VAR_14, VAR_3);

 FUNC_0((VAR_0 | VAR_1), VAR_14, 0, 0, 0, 0);
}
