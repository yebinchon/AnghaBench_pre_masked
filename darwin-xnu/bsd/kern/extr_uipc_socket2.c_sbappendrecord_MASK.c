
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; struct mbuf* sb_mbtail; struct mbuf* sb_lastrecord; struct mbuf* sb_mb; int sb_so; } ;
struct mbuf {int m_flags; struct mbuf* m_next; struct mbuf* m_nextpkt; scalar_t__ m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockbuf*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,struct mbuf*,int *,int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*) ;
 int FUNC_4 (struct sockbuf*,struct mbuf*,struct mbuf*) ;
 int FUNC_5 (struct sockbuf*) ;
 int FUNC_6 (int ,int *,struct mbuf**,int *,int ) ;
 int VAR_6 ;

int
FUNC_7(struct sockbuf *VAR_7, struct mbuf *VAR_8)
{
 struct mbuf *VAR_9;
 int VAR_10 = 0;

 if (VAR_8 == ((void*)0) || (VAR_7->sb_flags & VAR_3)) {
  if (VAR_8 != ((void*)0))
   FUNC_2(VAR_8);
  return (0);
 }

 for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = VAR_9->m_next)
  VAR_10 += VAR_9->m_len;

 if (VAR_10 > FUNC_5(VAR_7) && !(VAR_7->sb_flags & VAR_5)) {
  FUNC_2(VAR_8);
  return (0);
 }

 if (VAR_7->sb_flags & VAR_4 && !(VAR_8 && VAR_8->m_flags & VAR_2)) {
  int VAR_11 = FUNC_6(VAR_7->sb_so, ((void*)0), &VAR_8, ((void*)0),
      VAR_6);






  if (VAR_11 != 0) {
   FUNC_0(VAR_7, "sbappendrecord 1");
   if (VAR_11 != VAR_0)
    FUNC_2(VAR_8);
   return (0);
  }
 } else if (VAR_8) {
  VAR_8->m_flags &= ~VAR_2;
 }




 FUNC_3(VAR_7, VAR_8);
 FUNC_0(VAR_7, "sbappendrecord 2");
 if (VAR_7->sb_lastrecord != ((void*)0)) {
  VAR_7->sb_lastrecord->m_nextpkt = VAR_8;
 } else {
  VAR_7->sb_mb = VAR_8;
 }
 VAR_7->sb_lastrecord = VAR_8;
 VAR_7->sb_mbtail = VAR_8;

 VAR_9 = VAR_8->m_next;
 VAR_8->m_next = 0;
 if (VAR_9 && (VAR_8->m_flags & VAR_1)) {
  VAR_8->m_flags &= ~VAR_1;
  VAR_9->m_flags |= VAR_1;
 }
 FUNC_4(VAR_7, VAR_9, VAR_8);
 FUNC_0(VAR_7, "sbappendrecord 3");
 return (1);
}
