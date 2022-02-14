
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sockbuf {struct mbuf* sb_mb; struct mbuf* sb_lastrecord; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(struct sockbuf *VAR_0, const char *VAR_1)
{
 struct mbuf *VAR_2 = VAR_0->sb_mb;

 while (VAR_2 && VAR_2->m_nextpkt)
  VAR_2 = VAR_2->m_nextpkt;

 if (VAR_2 != VAR_0->sb_lastrecord) {
  FUNC_2("sblastrecordchk: mb 0x%llx lastrecord 0x%llx "
      "last 0x%llx\n",
      (uint64_t)FUNC_0(VAR_0->sb_mb),
      (uint64_t)FUNC_0(VAR_0->sb_lastrecord),
      (uint64_t)FUNC_0(VAR_2));
  FUNC_2("packet chain:\n");
  for (VAR_2 = VAR_0->sb_mb; VAR_2 != ((void*)0); VAR_2 = VAR_2->m_nextpkt)
   FUNC_2("\t0x%llx\n", (uint64_t)FUNC_0(VAR_2));
  FUNC_1("sblastrecordchk from %s", VAR_1);
 }
}
