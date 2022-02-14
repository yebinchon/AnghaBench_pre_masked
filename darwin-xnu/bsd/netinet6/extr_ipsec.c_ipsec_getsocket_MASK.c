
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct ipsec_tag {struct socket* socket; } ;


 struct ipsec_tag* FUNC_0 (struct mbuf*) ;

struct socket *
FUNC_1(struct mbuf *VAR_0)
{
 struct ipsec_tag *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1->socket;
 else
  return ((void*)0);
}
