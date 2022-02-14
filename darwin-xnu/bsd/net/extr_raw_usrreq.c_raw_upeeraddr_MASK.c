
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rawcb {scalar_t__ rcb_faddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sockaddr* FUNC_0 (scalar_t__,int) ;
 struct rawcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_2, struct sockaddr **VAR_3)
{
 struct rawcb *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 == 0)
  return VAR_0;
 if (VAR_4->rcb_faddr == 0) {
  return VAR_1;
 }
 *VAR_3 = FUNC_0(VAR_4->rcb_faddr, 1);
 return 0;
}
