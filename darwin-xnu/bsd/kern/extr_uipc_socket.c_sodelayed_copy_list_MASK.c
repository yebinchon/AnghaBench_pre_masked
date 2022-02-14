
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef int u_int ;
struct uio {int dummy; } ;
struct socket {int dummy; } ;
struct recv_msg_elem {struct uio* uio; } ;
struct mbuf {int m_len; struct mbuf* m_next; struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_1, struct recv_msg_elem *VAR_2,
    u_int VAR_3, struct mbuf **VAR_4, user_ssize_t *VAR_5)
{
#pragma unused(so)
 int VAR_6 = 0;
 struct mbuf *VAR_7, *VAR_8;
 int VAR_9 = 0;
 struct uio *VAR_10;

 for (VAR_7 = *VAR_4, VAR_9 = 0; VAR_7 != ((void*)0) && VAR_9 < VAR_3;
     VAR_7 = VAR_7->m_nextpkt, VAR_9++) {
  VAR_10 = VAR_2[VAR_9].uio;
  for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->m_next) {
   VAR_6 = FUNC_2(FUNC_1(VAR_8, VAR_0), VAR_8->m_len, VAR_10);
   if (VAR_6 != 0)
    goto out;
  }
 }
out:
 FUNC_0(*VAR_4);

 *VAR_4 = ((void*)0);
 *VAR_5 = 0;

 return (VAR_6);
}
