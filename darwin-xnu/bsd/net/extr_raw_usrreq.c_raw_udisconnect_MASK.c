
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rawcb {scalar_t__ rcb_faddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rawcb*) ;
 int FUNC_1 (struct socket*) ;
 struct rawcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2)
{
 struct rawcb *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == 0)
  return VAR_0;
 if (VAR_3->rcb_faddr == 0) {
  return VAR_1;
 }
 FUNC_0(VAR_3);
 FUNC_1(VAR_2);
 return 0;
}
