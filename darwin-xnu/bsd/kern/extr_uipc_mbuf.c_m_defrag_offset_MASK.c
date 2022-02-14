
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int len; int * pkt_hdr; } ;
struct mbuf {int m_flags; int m_data; int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct mbuf*,struct mbuf*) ;
 int FUNC_2 (struct mbuf*,int,int,int ) ;
 scalar_t__ FUNC_3 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int,int ) ;
 struct mbuf* FUNC_7 (int,int ,int) ;
 struct mbuf* FUNC_8 (int,int ) ;
 int FUNC_9 (struct mbuf*,int ) ;

struct mbuf *
FUNC_10(struct mbuf *VAR_6, u_int32_t VAR_7, int VAR_8)
{
 struct mbuf *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11 = 0, VAR_12, VAR_13;

 if (!(VAR_6->m_flags & VAR_4))
  return (VAR_6);

 FUNC_0(VAR_7 < VAR_1);
 FUNC_4(VAR_6);

 VAR_13 = VAR_6->m_pkthdr.len + VAR_7;
 if (VAR_13 > VAR_1)
  VAR_10 = FUNC_7(VAR_8, VAR_3, VAR_4);
 else
  VAR_10 = FUNC_8(VAR_8, VAR_3);

 if (VAR_10 == ((void*)0))
  goto nospace;

 if (VAR_7 > 0) {
  VAR_13 -= VAR_7;
  VAR_10->m_data += VAR_7;
 }






 FUNC_0(VAR_6->m_pkthdr.pkt_hdr == ((void*)0));

 if (FUNC_3(VAR_10, VAR_6, VAR_8) == 0)
  goto nospace;

 VAR_9 = VAR_10;

 while (VAR_11 < VAR_13) {
  VAR_12 = VAR_13 - VAR_11;
  if (VAR_12 > VAR_0)
   VAR_12 = VAR_0;
  VAR_12 -= ((VAR_9 == VAR_10) ? VAR_7 : 0);
  if (VAR_12 < 0)
   goto nospace;

  if (VAR_9 == ((void*)0)) {
   if (VAR_12 > VAR_2)
    VAR_9 = FUNC_7(VAR_8, VAR_3, 0);
   else
    VAR_9 = FUNC_6(VAR_8, VAR_3);
   if (VAR_9 == ((void*)0))
    goto nospace;
  }

  FUNC_2(VAR_6, VAR_11, VAR_12, FUNC_9(VAR_9, VAR_5));
  VAR_11 += VAR_12;
  VAR_9->m_len = VAR_12;
  if (VAR_9 != VAR_10)
   FUNC_1(VAR_10, VAR_9);
  VAR_9 = ((void*)0);
 }
 FUNC_5(VAR_6);
 VAR_6 = VAR_10;
 return (VAR_6);
nospace:
 if (VAR_10)
  FUNC_5(VAR_10);
 return (((void*)0));
}
