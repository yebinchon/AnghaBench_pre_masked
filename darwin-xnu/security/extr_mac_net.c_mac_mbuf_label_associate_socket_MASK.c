
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsocket {int dummy; } ;
struct socket {int so_label; } ;
struct mbuf {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,struct xsocket*,int ,struct mbuf*,struct label*) ;
 struct label* FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 int FUNC_2 (struct socket*,struct xsocket*) ;

void
FUNC_3(struct socket *VAR_1, struct mbuf *VAR_2)
{
 struct label *VAR_3;
 struct xsocket VAR_4;



 VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_1, &VAR_4);
 FUNC_0(VAR_0, &VAR_4, VAR_1->so_label,
      VAR_2, VAR_3);
}
