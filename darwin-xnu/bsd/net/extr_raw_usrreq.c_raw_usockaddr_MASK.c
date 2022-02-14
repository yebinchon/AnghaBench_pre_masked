
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rawcb {scalar_t__ rcb_laddr; } ;


 int VAR_0 ;
 struct sockaddr* FUNC_0 (scalar_t__,int) ;
 struct rawcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct sockaddr **VAR_2)
{
 struct rawcb *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 == 0)
  return VAR_0;
 if (VAR_3->rcb_laddr == 0)
  return VAR_0;
 *VAR_2 = FUNC_0(VAR_3->rcb_laddr, 1);
 return 0;
}
