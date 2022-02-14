
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct mbuf {struct mbuf* m_next; int m_len; } ;


 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf * VAR_0, void *VAR_1, size_t VAR_2)
{
 u_int VAR_3;
 u_char *VAR_4;

 VAR_4 = VAR_1;
 while (VAR_2 > 0) {
  if (VAR_0 == 0)
   FUNC_3("bpf_mcopy");
  VAR_3 = FUNC_2(VAR_0->m_len, VAR_2);
  FUNC_0(FUNC_1(VAR_0), VAR_4, VAR_3);
  VAR_0 = VAR_0->m_next;
  VAR_4 += VAR_3;
  VAR_2 -= VAR_3;
 }
}
