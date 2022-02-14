
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int rcvif; } ;
struct mbuf {unsigned int m_len; int m_flags; struct mbuf* m_next; scalar_t__ m_data; int m_ext; int m_type; TYPE_1__ m_pkthdr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mbuf*,unsigned int) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mbuf*,int,int ) ;
 int FUNC_5 (struct mbuf*,int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*,unsigned int,int) ;

__attribute__((used)) static struct mbuf *
FUNC_10(struct mbuf *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct mbuf *VAR_9, *VAR_10;
 unsigned VAR_11 = VAR_6, VAR_12;





 for (VAR_9 = VAR_5; VAR_9 && VAR_11 > VAR_9->m_len; VAR_9 = VAR_9->m_next)
  VAR_11 -= VAR_9->m_len;
 if (VAR_9 == ((void*)0))
  return (((void*)0));







 VAR_12 = VAR_9->m_len - VAR_11;






 if (VAR_8 && (VAR_5->m_flags & VAR_3) && VAR_12 == 0) {
  FUNC_5(VAR_10, VAR_7, VAR_5->m_type);
  if (VAR_10 == ((void*)0))
   return (((void*)0));
  VAR_10->m_next = VAR_9->m_next;
  VAR_9->m_next = ((void*)0);
  VAR_10->m_pkthdr.rcvif = VAR_5->m_pkthdr.rcvif;
  VAR_10->m_pkthdr.len = VAR_5->m_pkthdr.len - VAR_6;
  VAR_5->m_pkthdr.len = VAR_6;
  return (VAR_10);
 } if (VAR_8 && (VAR_5->m_flags & VAR_3)) {
  FUNC_5(VAR_10, VAR_7, VAR_5->m_type);
  if (VAR_10 == ((void*)0))
   return (((void*)0));
  VAR_10->m_pkthdr.rcvif = VAR_5->m_pkthdr.rcvif;
  VAR_10->m_pkthdr.len = VAR_5->m_pkthdr.len - VAR_6;
  VAR_5->m_pkthdr.len = VAR_6;







  if (VAR_9->m_flags & VAR_2)
   goto extpacket;
  if (VAR_12 > VAR_0) {

   FUNC_0(VAR_10, 0);
   VAR_10->m_next = FUNC_9(VAR_9, VAR_11, VAR_7);
   if (VAR_10->m_next == ((void*)0)) {
    (void) FUNC_7(VAR_10);
    return (((void*)0));
   } else
    return (VAR_10);
  } else
   FUNC_0(VAR_10, VAR_12);
 } else if (VAR_12 == 0) {
  VAR_10 = VAR_9->m_next;
  VAR_9->m_next = ((void*)0);
  return (VAR_10);
 } else {
  FUNC_4(VAR_10, VAR_7, VAR_9->m_type);
  if (VAR_10 == ((void*)0))
   return (((void*)0));

  if ((VAR_9->m_flags & VAR_2) == 0) {
   FUNC_3(VAR_12 <= VAR_1);
   FUNC_2(VAR_10, VAR_12);
  }
 }
extpacket:
 if (VAR_9->m_flags & VAR_2) {
  VAR_10->m_flags |= VAR_2;
  VAR_10->m_ext = VAR_9->m_ext;
  FUNC_8(VAR_9);
  VAR_10->m_data = VAR_9->m_data + VAR_11;
 } else {
  FUNC_6(FUNC_1(VAR_9, VAR_4) + VAR_11, FUNC_1(VAR_10, VAR_4), VAR_12);
 }
 VAR_10->m_len = VAR_12;
 VAR_9->m_len = VAR_11;
 VAR_10->m_next = VAR_9->m_next;
 VAR_9->m_next = ((void*)0);
 return (VAR_10);
}
