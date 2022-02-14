
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {struct mbuf* sb_mb; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,struct mbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (int ,struct sockbuf*,int ) ;
 int FUNC_3 (struct sockbuf*,struct mbuf*) ;

void
FUNC_4(struct sockbuf *VAR_1)
{
 struct mbuf *VAR_2, *VAR_3;

 VAR_2 = VAR_1->sb_mb;
 if (VAR_2) {
  VAR_1->sb_mb = VAR_2->m_nextpkt;
  do {
   FUNC_3(VAR_1, VAR_2);
   FUNC_0(VAR_2, VAR_3);
   VAR_2 = VAR_3;
  } while (VAR_2);
 }
 FUNC_1(VAR_1);
 FUNC_2(0, VAR_1, VAR_0);
}
