
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ext_size; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; scalar_t__ m_len; struct mbuf* m_next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct mbuf *VAR_4, int *VAR_5, int *VAR_6)
{
 struct mbuf *VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9;
 int VAR_10;


 for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->m_next) {
  if (VAR_7->m_flags & VAR_3)
   break;
 }
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_0, "cfil_data_length: no M_PKTHDR");
  return (0);
 }
 VAR_4 = VAR_7;

 if (VAR_5 == ((void*)0) && VAR_6 == ((void*)0))
  return (FUNC_1(VAR_4));

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->m_next) {
  VAR_8 += VAR_7->m_len;
  VAR_10++;
  VAR_9 += VAR_1;
  if (VAR_7->m_flags & VAR_2)
   VAR_9 += VAR_7->m_ext.ext_size;
 }
 if (VAR_5) {
  *VAR_5 = VAR_9;
 }
 if (VAR_6) {
  *VAR_6 = VAR_10;
 }
 return (VAR_8);
}
