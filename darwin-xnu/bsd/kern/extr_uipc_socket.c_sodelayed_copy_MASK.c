
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
struct uio {int dummy; } ;
struct socket {int dummy; } ;
struct mbuf {struct mbuf* m_next; scalar_t__ m_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_1, struct uio *VAR_2, struct mbuf **VAR_3,
    user_ssize_t *VAR_4)
{
 int VAR_5 = 0;
 struct mbuf *VAR_6;

 VAR_6 = *VAR_3;

 FUNC_3(VAR_1, 0);

 while (VAR_6 != ((void*)0) && VAR_5 == 0) {
  VAR_5 = FUNC_4(FUNC_1(VAR_6, VAR_0), (int)VAR_6->m_len, VAR_2);
  VAR_6 = VAR_6->m_next;
 }
 FUNC_0(*VAR_3);

 *VAR_3 = ((void*)0);
 *VAR_4 = 0;

 FUNC_2(VAR_1, 0);

 return (VAR_5);
}
