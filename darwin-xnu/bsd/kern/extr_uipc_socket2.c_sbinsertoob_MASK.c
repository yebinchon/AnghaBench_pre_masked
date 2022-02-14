
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; struct mbuf* sb_lastrecord; struct mbuf* sb_mb; int sb_so; } ;
struct mbuf {int m_flags; int m_type; struct mbuf* m_next; struct mbuf* m_nextpkt; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockbuf*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,struct mbuf*,int *,int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*) ;
 int FUNC_4 (struct sockbuf*,struct mbuf*,struct mbuf*) ;
 int FUNC_5 (int ,int *,struct mbuf**,int *,int ) ;
 int VAR_4 ;

int
FUNC_6(struct sockbuf *VAR_5, struct mbuf *VAR_6)
{
 struct mbuf *VAR_7;
 struct mbuf **VAR_8;

 if (VAR_6 == 0)
  return (0);

 FUNC_0(VAR_5, "sbinsertoob 1");

 if ((VAR_5->sb_flags & VAR_3 && !(VAR_6->m_flags & VAR_2)) != 0) {
  int VAR_9 = FUNC_5(VAR_5->sb_so, ((void*)0), &VAR_6, ((void*)0),
      VAR_4);

  FUNC_0(VAR_5, "sbinsertoob 2");






  if (VAR_9) {
   if (VAR_9 != VAR_0) {
    FUNC_2(VAR_6);
   }
   return (0);
  }
 } else if (VAR_6) {
  VAR_6->m_flags &= ~VAR_2;
 }

 for (VAR_8 = &VAR_5->sb_mb; *VAR_8; VAR_8 = &((*VAR_8)->m_nextpkt)) {
  VAR_7 = *VAR_8;
again:
  switch (VAR_7->m_type) {

  case 128:
   continue;

  case 129:
   VAR_7 = VAR_7->m_next;
   if (VAR_7)
    goto again;
  }
  break;
 }




 FUNC_3(VAR_5, VAR_6);
 VAR_6->m_nextpkt = *VAR_8;
 if (*VAR_8 == ((void*)0)) {

  VAR_5->sb_lastrecord = VAR_6;
 }
 *VAR_8 = VAR_6;
 VAR_7 = VAR_6->m_next;
 VAR_6->m_next = 0;
 if (VAR_7 && (VAR_6->m_flags & VAR_1)) {
  VAR_6->m_flags &= ~VAR_1;
  VAR_7->m_flags |= VAR_1;
 }
 FUNC_4(VAR_5, VAR_7, VAR_6);
 FUNC_0(VAR_5, "sbinsertoob 3");
 return (1);
}
