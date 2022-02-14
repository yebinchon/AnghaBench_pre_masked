
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;
struct ah_algorithm_state {int dummy; } ;
struct ah_algorithm {int (* update ) (struct ah_algorithm_state*,scalar_t__,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ah_algorithm_state*,scalar_t__,int) ;
 int FUNC_3 (struct ah_algorithm_state*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_1,int VAR_2, int VAR_3,
        const struct ah_algorithm *VAR_4,
        struct ah_algorithm_state *VAR_5)
{
 struct mbuf *VAR_6;
 int VAR_7;


 if (VAR_2 + VAR_3 <= VAR_1->m_len) {
  (VAR_4->update)(VAR_5, FUNC_0(VAR_1, VAR_0) + VAR_2, VAR_3);
  return;
 }

 for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->m_next) {
  if (VAR_2 < VAR_6->m_len)
   break;

  VAR_2 -= VAR_6->m_len;
 }

 if (!VAR_6)
  FUNC_1("ah_update_mbuf: wrong offset specified");

 for ( ; VAR_6 && VAR_3 > 0; VAR_6 = VAR_6->m_next) {
  if (VAR_6->m_len == 0)
   continue;
  if (VAR_6->m_len - VAR_2 < VAR_3)
   VAR_7 = VAR_6->m_len - VAR_2;
  else
   VAR_7 = VAR_3;

  (VAR_4->update)(VAR_5, FUNC_0(VAR_6, VAR_0) + VAR_2, VAR_7);

  VAR_3 -= VAR_7;
  VAR_2 = 0;
 }
}
