
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct ndrv_cb {scalar_t__ nd_faddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ndrv_cb*) ;
 struct ndrv_cb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_2)
{
 struct ndrv_cb *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == 0)
  return VAR_0;

 if (VAR_3->nd_faddr == 0)
  return VAR_1;

 FUNC_0(VAR_3);
 return 0;
}
