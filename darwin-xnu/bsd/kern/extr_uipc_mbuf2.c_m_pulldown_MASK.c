
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int m_len; int m_flags; int m_data; struct mbuf* m_next; int m_type; } ;
struct TYPE_2__ {int ip6s_pulldown_alloc; int ip6s_pulldown_copy; int ip6s_pullup2_copy; int ip6s_pullup2_alloc; int ip6s_pullup2; int ip6s_pullup2_fail; int ip6s_pullup_copy; int ip6s_pullup_alloc; int ip6s_pullup; int ip6s_pullup_fail; int ip6s_pulldown; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (struct mbuf*,int) ;
 int FUNC_6 (struct mbuf*,int ,int,scalar_t__) ;
 struct mbuf* FUNC_7 (struct mbuf*,int,int,int ) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*) ;
 int * FUNC_10 (struct mbuf*) ;
 scalar_t__ FUNC_11 (struct mbuf*) ;
 scalar_t__ FUNC_12 (struct mbuf*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;

struct mbuf *
FUNC_15(struct mbuf *VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
 struct mbuf *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 0;






 if (VAR_6 == ((void*)0))
  FUNC_13("m == NULL in m_pulldown()");
 if (VAR_8 > VAR_0) {
  FUNC_9(VAR_6);
  return ((void*)0);
 }
 VAR_10 = VAR_6;







 while (VAR_10 != ((void*)0) && VAR_7 > 0) {
  if (VAR_10->m_len > VAR_7)
   break;
  VAR_7 -= VAR_10->m_len;
  VAR_10 = VAR_10->m_next;
 }


 while (VAR_10 != ((void*)0) && VAR_10->m_len == 0)
  VAR_10 = VAR_10->m_next;

 if (!VAR_10) {
  FUNC_9(VAR_6);
  return ((void*)0);
 }
 if ((VAR_7 == 0 || VAR_9) && VAR_8 <= VAR_10->m_len - VAR_7)
  goto ok;
 if (VAR_8 <= VAR_10->m_len - VAR_7) {
  VAR_11 = FUNC_7(VAR_10, VAR_7, VAR_10->m_len - VAR_7, VAR_2);
  if (VAR_11 == ((void*)0)) {
   FUNC_9(VAR_6);
   return ((void*)0);
  }
  VAR_10->m_len = VAR_7;
  VAR_11->m_next = VAR_10->m_next;
  VAR_10->m_next = VAR_11;
  VAR_10 = VAR_10->m_next;
  VAR_7 = 0;
  goto ok;
 }
 VAR_12 = VAR_10->m_len - VAR_7;
 VAR_13 = VAR_8 - VAR_12;





 VAR_14 = 0;
 for (VAR_11 = VAR_10->m_next; VAR_11 != ((void*)0); VAR_11 = VAR_11->m_next)
  VAR_14 += VAR_11->m_len;
 if (VAR_12 + VAR_14 < VAR_8) {
  FUNC_9(VAR_6);
  return ((void*)0);
 }





 if ((VAR_10->m_flags & VAR_3) == 0)
  VAR_15 = 0;
 else {
  if (FUNC_10(VAR_10) != ((void*)0))
   VAR_15 = 1;
  else if (FUNC_11(VAR_10))
   VAR_15 = 1;
  else
   VAR_15 = 0;
 }






 if ((VAR_7 == 0 || VAR_9) && FUNC_3(VAR_10) >= VAR_13
  && !VAR_15) {
  FUNC_6(VAR_10->m_next, 0, VAR_13, FUNC_12(VAR_10, VAR_4) + VAR_10->m_len);
  VAR_10->m_len += VAR_13;
  FUNC_5(VAR_10->m_next, VAR_13);
  goto ok;
 }







 if ((VAR_7 == 0 || VAR_9) && FUNC_2(VAR_10->m_next) >= VAR_12 &&
     (VAR_10->m_next->m_len + VAR_12) >= VAR_8 && !VAR_15) {
  VAR_10->m_next->m_data -= VAR_12;
  VAR_10->m_next->m_len += VAR_12;
  FUNC_4(FUNC_12(VAR_10, VAR_4) + VAR_7, FUNC_12(VAR_10->m_next, VAR_4), VAR_12);
  VAR_10->m_len -= VAR_12;
  VAR_10 = VAR_10->m_next;
  VAR_7 = 0;
  goto ok;
 }
 FUNC_1(VAR_11, VAR_2, VAR_6->m_type);
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_6);
  return ((void*)0);
 }
 if (VAR_8 > VAR_1) {
  FUNC_0(VAR_11, VAR_2);
  if ((VAR_11->m_flags & VAR_3) == 0) {
   FUNC_9(VAR_6);
   FUNC_8(VAR_11);
   return ((void*)0);
  }
 }

 VAR_11->m_len = VAR_12;
 FUNC_4(FUNC_12(VAR_10, VAR_4) + VAR_7, FUNC_12(VAR_11, VAR_4), VAR_12);
 VAR_10->m_len -= VAR_12;

 FUNC_6(VAR_10->m_next, 0, VAR_13, FUNC_12(VAR_11, VAR_4) + VAR_11->m_len);
 VAR_11->m_len += VAR_13;
 FUNC_5(VAR_10->m_next, VAR_13);
 VAR_11->m_next = VAR_10->m_next;
 VAR_10->m_next = VAR_11;
 VAR_10 = VAR_11;
 VAR_7 = 0;

ok:
 if (VAR_9)
  *VAR_9 = VAR_7;
 return VAR_10;
}
