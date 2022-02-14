
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_len; int m_flags; int m_data; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mbuf*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct mbuf*,int ,int ) ;
 int FUNC_4 (struct mbuf*,int ,int ) ;
 int FUNC_5 (char*,int ,unsigned int) ;
 int VAR_7 ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;

struct mbuf *
FUNC_8(char *VAR_9, int VAR_10, int VAR_11, struct ifnet *VAR_12,
    void (*VAR_13)(const void *, void *, size_t))
{
 struct mbuf *VAR_14;
 struct mbuf *VAR_15 = ((void*)0), **VAR_16 = &VAR_15;
 int VAR_17 = VAR_11, VAR_18;
 char *VAR_19;
 char *VAR_20;

 VAR_19 = VAR_9;
 VAR_20 = VAR_19 + VAR_10;
 if (VAR_17) {




  VAR_19 += VAR_17 + 2 * sizeof (u_int16_t);
  VAR_10 -= 2 * sizeof (u_int16_t);
 }
 FUNC_4(VAR_14, VAR_5, VAR_4);
 if (VAR_14 == ((void*)0))
  return (((void*)0));
 VAR_14->m_pkthdr.rcvif = VAR_12;
 VAR_14->m_pkthdr.len = VAR_10;
 VAR_14->m_len = VAR_1;

 while (VAR_10 > 0) {
  if (VAR_15 != ((void*)0)) {
   FUNC_3(VAR_14, VAR_5, VAR_4);
   if (VAR_14 == ((void*)0)) {
    FUNC_6(VAR_15);
    return (((void*)0));
   }
   VAR_14->m_len = VAR_3;
  }
  VAR_18 = FUNC_1(VAR_10, VAR_20 - VAR_19);
  if (VAR_18 >= VAR_2) {
   FUNC_0(VAR_14, VAR_5);
   if (VAR_14->m_flags & VAR_6) {
    VAR_14->m_len = VAR_18 = FUNC_1(VAR_18, FUNC_7(VAR_0));
   } else {

    if (VAR_15 != ((void*)0))
     FUNC_6(VAR_15);
    FUNC_6(VAR_14);
    return (((void*)0));
   }
  } else {



   if (VAR_18 < VAR_14->m_len) {
    if (VAR_15 == ((void*)0) &&
        VAR_18 + VAR_8 <= VAR_14->m_len)
     VAR_14->m_data += VAR_8;
    VAR_14->m_len = VAR_18;
   } else {
    VAR_18 = VAR_14->m_len;
   }
  }
  if (VAR_13)
   VAR_13(VAR_19, FUNC_2(VAR_14, VAR_7), (unsigned)VAR_18);
  else
   FUNC_5(VAR_19, FUNC_2(VAR_14, VAR_7), (unsigned)VAR_18);
  VAR_19 += VAR_18;
  *VAR_16 = VAR_14;
  VAR_16 = &VAR_14->m_next;
  VAR_10 -= VAR_18;
  if (VAR_19 == VAR_20)
   VAR_19 = VAR_9;
 }
 return (VAR_15);
}
