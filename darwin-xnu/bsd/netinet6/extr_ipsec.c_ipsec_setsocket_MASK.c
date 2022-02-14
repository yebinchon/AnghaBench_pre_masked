
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct ipsec_tag {struct socket* socket; } ;


 int VAR_0 ;
 struct ipsec_tag* FUNC_0 (struct mbuf*) ;
 struct ipsec_tag* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,struct ipsec_tag*) ;

int
FUNC_3(struct mbuf *VAR_1, struct socket *VAR_2)
{
 struct ipsec_tag *VAR_3;


 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3)
   return VAR_0;
 } else
  VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  VAR_3->socket = VAR_2;
  FUNC_2(VAR_1, VAR_3);
 }
 return 0;
}
