
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct socket {TYPE_2__* so_proto; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int m_flags; scalar_t__ m_type; struct mbuf* m_next; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_send ) (struct socket*,int ,struct mbuf*,struct sockaddr*,struct mbuf*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*,int ,struct mbuf*,struct sockaddr*,struct mbuf*,int ) ;

int
FUNC_4(struct socket *VAR_2, struct sockaddr *VAR_3, struct mbuf *VAR_4, struct mbuf *VAR_5, uint32_t VAR_6)
{
 struct mbuf *VAR_7, *VAR_8;

 FUNC_2(VAR_2);





 FUNC_0(VAR_4 != ((void*)0) &&
     (VAR_5 == ((void*)0) || VAR_4->m_flags & VAR_1));





 if (VAR_5 == ((void*)0) && (VAR_4->m_flags & VAR_1) == 0) {

  for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->m_next) {
   if (VAR_7->m_flags & VAR_1) {
    VAR_4 = VAR_7;
    break;
   } else if (VAR_7->m_type == VAR_0) {
    if (VAR_5 == ((void*)0)) {

     VAR_5 = VAR_7;
    }
    if (VAR_5 != ((void*)0) && VAR_7->m_next != ((void*)0) && VAR_7->m_next->m_type != VAR_0) {

     VAR_8 = VAR_7;
    }
   }
  }
  if (VAR_8 != ((void*)0))
   VAR_8->m_next = ((void*)0);
 }

 int VAR_9 = (*VAR_2->so_proto->pr_usrreqs->pru_send)
   (VAR_2, VAR_6, VAR_4, VAR_3, VAR_5, FUNC_1());

 return VAR_9;
}
