
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sockbuf {struct mbuf* sb_mb; struct mbuf* sb_mbtail; } ;
struct mbuf {struct mbuf* m_next; struct mbuf* m_nextpkt; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(struct sockbuf *VAR_0, const char *VAR_1)
{
 struct mbuf *VAR_2 = VAR_0->sb_mb;
 struct mbuf *VAR_3;

 while (VAR_2 && VAR_2->m_nextpkt)
  VAR_2 = VAR_2->m_nextpkt;

 while (VAR_2 && VAR_2->m_next)
  VAR_2 = VAR_2->m_next;

 if (VAR_2 != VAR_0->sb_mbtail) {
  FUNC_2("sblastmbufchk: mb 0x%llx mbtail 0x%llx last 0x%llx\n",
      (uint64_t)FUNC_0(VAR_0->sb_mb),
      (uint64_t)FUNC_0(VAR_0->sb_mbtail),
      (uint64_t)FUNC_0(VAR_2));
  FUNC_2("packet tree:\n");
  for (VAR_2 = VAR_0->sb_mb; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_nextpkt) {
   FUNC_2("\t");
   for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->m_next)
    FUNC_2("0x%llx ",
        (uint64_t)FUNC_0(VAR_3));
   FUNC_2("\n");
  }
  FUNC_1("sblastmbufchk from %s", VAR_1);
 }
}
